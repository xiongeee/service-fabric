// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

#pragma once

namespace Reliability
{
    namespace FailoverManagerComponent
    {
        class HealthReportFactory
        {
            DENY_COPY(HealthReportFactory);

        public:
            explicit HealthReportFactory(const std::wstring & nodeId, bool isFMM, const Common::ConfigEntry<Common::TimeSpan> & stateTraceIntervalEntry);

            //Rebuild
            ServiceModel::HealthReport GenerateRebuildStuckHealthReport();
            ServiceModel::HealthReport GenerateRebuildStuckHealthReport(vector<Federation::NodeInstance> & stuckNodes);
            ServiceModel::HealthReport GenerateClearRebuildStuckHealthReport();

            //NodeInfo
            ServiceModel::HealthReport GenerateNodeInfoHealthReport(NodeInfoSPtr nodeInfo, bool isUpgrade = false);
            ServiceModel::HealthReport GenerateNodeDeactivationHealthReport(NodeInfoSPtr nodeInfo, bool isDeactivationComplete);

            //ServiceInfo
            ServiceModel::HealthReport GenerateServiceInfoHealthReport(ServiceInfoSPtr serviceInfo);

            //FailoverUnit
            ServiceModel::HealthReport GenerateInBuildFailoverUnitHealthReport(InBuildFailoverUnit const & inBuildFailoverUnit, bool isDeleted);
            ServiceModel::HealthReport GenerateFailoverUnitHealthReport(FailoverUnit const & inBuildFailoverUnit);


        private:
            ServiceModel::HealthReport GenerateRebuildStuckHealthReport(const wstring & description);
            std::wstring GenerateRebuildBroadcastStuckDescription();
            std::wstring GenerateRebuildWaitingForNodesDescription(vector<Federation::NodeInstance> & stuckNodes);
            void PopulateNodeAttributeList(ServiceModel::AttributeList & attributes, const NodeInfoSPtr & nodeInfo);

            static const std::wstring documentationUrl_;
            //kept alive by the FederationSubsystem pointer, member of FM.h
            const std::wstring & nodeId_;
            const bool isFMM_;
            const Common::ConfigEntry<Common::TimeSpan> & stateTraceIntervalEntry_;
        };
    }
}
