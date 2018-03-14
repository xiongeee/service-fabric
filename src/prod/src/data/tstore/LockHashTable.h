// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

#pragma once

namespace Data
{
   namespace TStore
   {
      class LockHashTable : public KObject<LockHashTable>, public KShared<LockHashTable>
      {
         K_FORCE_SHARED(LockHashTable)

      public:
         static NTSTATUS
            Create(
               __in KAllocator& allocator,
               __out LockHashTable::SPtr& result);

         __declspec(property(get = get_LockEntries, put = set_LockEntries)) Dictionary<ULONG64, LockHashValue::SPtr>::SPtr  LockEntries;
         Dictionary<ULONG64, LockHashValue::SPtr>::SPtr  get_LockEntries() const
         {
            return lockEntriesSPtr_;
         }

         void set_LockEntries(__in Dictionary<ULONG64, LockHashValue::SPtr>& value)
         {
            lockEntriesSPtr_ = &value;
         }

         void EnterWriteLock();
         void ExitWriteLock();
         void EnterReadLock();
         void ExitReadLock();
         void Close();

      private:
         Dictionary<ULONG64, LockHashValue::SPtr>::SPtr lockEntriesSPtr_;
         KReaderWriterSpinLock lockHashTableLock_;
      };
   }
}


