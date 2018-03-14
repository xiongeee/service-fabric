// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

#pragma once 

//
// External Header Files required by API definitions header files
//

#include "Common/Common.h"
#include "ServiceModel/ServiceModel.h"

#include "FabricTypes.h"
#include "FabricCommon.h"
#include "FabricRuntime.h"
#include "FabricClient.h"
#include "FabricInfrastructureService_.h"
#include "FabricTokenValidationService_.h"
#include "FabricServiceCommunication_.h"
#include "FabricTransport_.h"
#include "FabricFaultAnalysisService_.h"
#include "FabricUpgradeOrchestrationService_.h"
#include "FabricBackupRestoreService_.h"
#include "FabricContainerActivatorService_.h"

//
// api definitions Public Header Files
//

#include "api/definitions/InterfacePointers.h"
#include "api/definitions/ForwardDeclarations.h"


#include "api/definitions/IStatelessServiceFactory.h"
#include "api/definitions/IStatelessServiceInstance.h"
#include "api/definitions/IStatefulServiceFactory.h"
#include "api/definitions/IStatefulServiceReplica.h"
#include "api/definitions/IReplicator.h"
#include "api/definitions/IClientFactory.h"
#include "api/definitions/IClientSettings.h"
#include "api/definitions/IDataLossHandler.h"
#include "api/definitions/IQueryClient.h"
#include "api/definitions/IResolvedServicePartitionResult.h"
#include "api/definitions/IServiceManagementClient.h"
#include "api/definitions/IApplicationManagementClient.h"
#include "api/definitions/IApplicationUpgradeProgressResult.h"
#include "api/definitions/IPrimaryReplicator.h"
#include "api/definitions/IStateProvider.h"
#include "api/definitions/IStateReplicator.h"
#include "api/definitions/IOperationData.h"
#include "api/definitions/IOperationDataStream.h"
#include "api/definitions/ITransactionBase.h"
#include "api/definitions/ITransaction.h"
#include "api/definitions/IKeyValueStoreReplica.h"
#include "api/definitions/IKeyValueStoreItemEnumerator.h"
#include "api/definitions/IKeyValueStoreItemMetadataEnumerator.h"
#include "api/definitions/IKeyValueStoreItemMetadataResult.h"
#include "api/definitions/IKeyValueStoreItemResult.h"
#include "api/definitions/IStoreEventHandler.h"
#include "api/definitions/IKeyValueStoreReplicaFactory.h"
#include "api/definitions/IInfrastructureService.h"
#include "api/definitions/IInfrastructureServiceAgent.h"
#include "api/definitions/IInfrastructureServiceAgentFactory.h"
#include "api/definitions/IUpgradeProgressResult.h"
#include "api/definitions/IClusterManagementClient.h"
#include "api/definitions/IRepairManagementClient.h"
#include "api/definitions/IHealthClient.h"
#include "api/definitions/IPropertyBatchResult.h"
#include "api/definitions/IPropertyManagementClient.h"
#include "api/definitions/IServiceGroupManagementClient.h"
#include "api/definitions/IInfrastructureServiceClient.h"
#include "api/definitions/IInternalInfrastructureServiceClient.h"
#include "api/definitions/IFaultAnalysisService.h"
#include "api/definitions/IFaultAnalysisServiceAgent.h"
#include "api/definitions/IFaultAnalysisServiceAgentFactory.h"
#include "api/definitions/IBackupRestoreHandler.h"
#include "api/definitions/IBackupRestoreService.h"
#include "api/definitions/IBackupRestoreServiceAgent.h"
#include "api/definitions/IBackupRestoreServiceAgentFactory.h"
#include "api/definitions/IOrchestrationUpgradeStatusResult.h"
#include "api/definitions/IUpgradeOrchestrationServiceStateResult.h"
#include "api/definitions/IUpgradeOrchestrationService.h"
#include "api/definitions/IUpgradeOrchestrationServiceAgent.h"
#include "api/definitions/IUpgradeOrchestrationServiceAgentFactory.h"
#include "api/definitions/ITestManagementClient.h"
#include "api/definitions/ITestManagementClientInternal.h"
#include "api/definitions/IInvokeDataLossProgressResult.h"
#include "api/definitions/IInvokeQuorumLossProgressResult.h"
#include "api/definitions/IRestartPartitionProgressResult.h"
#include "api/definitions/INodeTransitionProgressResult.h"
#include "api/definitions/IChaosReportResult.h"
#include "api/definitions/IFaultManagementClient.h"
#include "api/definitions/IMovePrimaryResult.h"
#include "api/definitions/IMoveSecondaryResult.h"
#include "api/definitions/IRestartNodeResult.h"
#include "api/definitions/IRestartDeployedCodePackageResult.h"
#include "api/definitions/IStartNodeResult.h"
#include "api/definitions/IStopNodeResult.h"
#include "api/definitions/ITestClient.h"
#include "api/definitions/IFabricTestClient.h"
#include "api/definitions/ISecondaryEventHandler.h"
#include "api/definitions/IStoreItemMetadata.h"
#include "api/definitions/IStoreItem.h"
#include "api/definitions/IStoreItemMetadataEnumerator.h"
#include "api/definitions/IStoreItemEnumerator.h"
#include "api/definitions/IStoreNotificationEnumerator.h"
#include "api/definitions/IStoreEnumerator.h"
#include "api/definitions/IFileStoreServiceClient.h"
#include "api/definitions/IFileStoreServiceClientProgressEventHandler.h"
#include "api/definitions/IInternalFileStoreServiceClient.h"
#include "api/definitions/IClaimsAuthenticator.h"
#include "api/definitions/ITokenValidationService.h"
#include "api/definitions/ITokenValidationServiceAgent.h"
#include "api/definitions/ITokenValidationServiceAgentFactory.h"
#include "api/definitions/INativeImageStoreClient.h"
#include "api/definitions/INativeImageStoreProgressEventHandler.h"
#include "api/definitions/IInternalTokenValidationServiceClient.h"
#include "api/definitions/IAccessControlClient.h"
#include "api/definitions/IImageStoreClient.h"
#include "api/definitions/IServiceEndpointsVersion.h"
#include "api/definitions/IServiceNotification.h"
#include "api/definitions/IServiceNotificationEventHandler.h"
#include "api/definitions/IClientConnectionEventHandler.h"
#include "api/definitions/IStorePostBackupHandler.h"
#include "api/definitions/IEseLocalStoreSettingsResult.h"
#include "api/definitions/IKeyValueStoreReplicaSettingsResult.h"
#include "api/definitions/IKeyValueStoreReplicaSettings_V2Result.h"
#include "api/definitions/ISharedLogSettingsResult.h"
#include "api/definitions/IStatefulServiceReplicaStatusResult.h"
#include "api/definitions/ICommunicationMessageSender.h"
#include "api/definitions/IClientConnection.h"
#include "api/definitions/IServiceCommunicationMessageHandler.h"
#include "api/definitions/IServiceCommunicationTransport.h"
#include "api/definitions/IServiceCommunicationListenerFactory.h"
#include "api/definitions/IServiceConnectionEventHandler.h"
#include "api/definitions/IServiceConnectionHandler.h"
#include "api/definitions/IServiceCommunicationClient.h"
#include "api/definitions/IServiceCommunicationListener.h"
#include "api/definitions/IServiceCommunicationClientFactory.h"
#include "api/definitions/IComposeManagementClient.h"
#include "api/definitions/IContainerActivatorService.h"
#include "api/definitions/IContainerActivatorServiceAgent.h"
