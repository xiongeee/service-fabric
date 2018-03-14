// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::NodeQueryResult, ServiceModel::QueryResultHelpers::Node, FABRIC_NODE_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_NODE)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ServiceQueryResult, ServiceModel::QueryResultHelpers::Service, FABRIC_SERVICE_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_SERVICE)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ServiceGroupMemberQueryResult, ServiceModel::QueryResultHelpers::ServiceGroupMember, FABRIC_SERVICE_GROUP_MEMBER_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_SERVICE_GROUP_MEMBER)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ApplicationTypeQueryResult, ServiceModel::QueryResultHelpers::ApplicationType, FABRIC_APPLICATION_TYPE_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_APPLICATION_TYPE)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ApplicationQueryResult, ServiceModel::QueryResultHelpers::Application, FABRIC_APPLICATION_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_APPLICATION)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ComposeDeploymentStatusQueryResult, ServiceModel::QueryResultHelpers::ComposeDeploymentStatus, FABRIC_COMPOSE_DEPLOYMENT_STATUS_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_COMPOSE_DEPLOYMENT_STATUS)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ServicePartitionQueryResult, ServiceModel::QueryResultHelpers::ServicePartition, FABRIC_SERVICE_PARTITION_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_SERVICE_PARTITION)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ServiceReplicaQueryResult, ServiceModel::QueryResultHelpers::ServiceReplica, FABRIC_SERVICE_REPLICA_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_SERVICE_REPLICA)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::QueryMetadataQueryResult, ServiceModel::QueryResultHelpers::QueryMetadata, FABRIC_QUERY_METADATA_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_QUERY_METADATA)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ServiceTypeQueryResult, ServiceModel::QueryResultHelpers::ServiceType, FABRIC_SERVICE_TYPE_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_SERVICE_TYPE)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ServiceGroupMemberTypeQueryResult, ServiceModel::QueryResultHelpers::ServiceGroupMemberType, FABRIC_SERVICE_GROUP_MEMBER_TYPE_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_SERVICE_GROUP_MEMBER_TYPE)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::DeployedApplicationQueryResult, ServiceModel::QueryResultHelpers::DeployedApplication, FABRIC_DEPLOYED_APPLICATION_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_DEPLOYED_APPLICATION)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::DeployedServiceManifestQueryResult, ServiceModel::QueryResultHelpers::DeployedServiceManifest, FABRIC_DEPLOYED_SERVICE_PACKAGE_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_DEPLOYED_SERVICE_MANIFEST)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::DeployedServiceReplicaQueryResult, ServiceModel::QueryResultHelpers::DeployedServiceReplica, FABRIC_DEPLOYED_SERVICE_REPLICA_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_DEPLOYED_SERVICE_REPLICA)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::DeployedServiceTypeQueryResult, ServiceModel::QueryResultHelpers::DeployedServiceType, FABRIC_DEPLOYED_SERVICE_TYPE_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_DEPLOYED_SERVICE_TYPE)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::DeployedCodePackageQueryResult, ServiceModel::QueryResultHelpers::DeployedCodePackage, FABRIC_DEPLOYED_CODE_PACKAGE_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_DEPLOYED_CODE_PACKAGE)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::NodeHealth, ServiceModel::QueryResultHelpers::NodeHealth, FABRIC_NODE_HEALTH, FABRIC_QUERY_RESULT_ITEM_KIND_NODE_HEALTH)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ReplicaHealth, ServiceModel::QueryResultHelpers::ReplicaHealth, FABRIC_REPLICA_HEALTH, FABRIC_QUERY_RESULT_ITEM_KIND_REPLICA_HEALTH)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::PartitionHealth, ServiceModel::QueryResultHelpers::PartitionHealth, FABRIC_PARTITION_HEALTH, FABRIC_QUERY_RESULT_ITEM_KIND_PARTITION_HEALTH)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ServiceHealth, ServiceModel::QueryResultHelpers::ServiceHealth, FABRIC_SERVICE_HEALTH, FABRIC_QUERY_RESULT_ITEM_KIND_SERVICE_HEALTH)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ApplicationHealth, ServiceModel::QueryResultHelpers::ApplicationHealth, FABRIC_APPLICATION_HEALTH, FABRIC_QUERY_RESULT_ITEM_KIND_APPLICATION_HEALTH)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ClusterHealth, ServiceModel::QueryResultHelpers::ClusterHealth, FABRIC_CLUSTER_HEALTH, FABRIC_QUERY_RESULT_ITEM_KIND_CLUSTER_HEALTH)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::DeployedApplicationHealth, ServiceModel::QueryResultHelpers::DeployedApplicationHealth, FABRIC_DEPLOYED_APPLICATION_HEALTH, FABRIC_QUERY_RESULT_ITEM_KIND_DEPLOYED_APPLICATION_HEALTH)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::DeployedServicePackageHealth, ServiceModel::QueryResultHelpers::DeployedServicePackageHealth, FABRIC_DEPLOYED_SERVICE_PACKAGE_HEALTH, FABRIC_QUERY_RESULT_ITEM_KIND_DEPLOYED_SERVICE_PACKAGE_HEALTH)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::DeployedServiceReplicaDetailQueryResult, ServiceModel::QueryResultHelpers::DeployedServiceReplicaDetail, FABRIC_DEPLOYED_SERVICE_REPLICA_DETAIL_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_DEPLOYED_SERVICE_REPLICA_DETAIL)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ClusterLoadInformationQueryResult, ServiceModel::QueryResultHelpers::ClusterLoadInformation, FABRIC_CLUSTER_LOAD_INFORMATION, FABRIC_QUERY_RESULT_ITEM_KIND_CLUSTER_LOAD_INFORMATION)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::PartitionLoadInformationQueryResult, ServiceModel::QueryResultHelpers::PartitionLoadInformation, FABRIC_PARTITION_LOAD_INFORMATION, FABRIC_QUERY_RESULT_ITEM_KIND_PARTITION_LOAD_INFORMATION)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ProvisionedFabricCodeVersionQueryResultItem, ServiceModel::QueryResultHelpers::ProvisionedFabricCodeVersion, FABRIC_PROVISIONED_CODE_VERSION_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_PROVISIONED_FABRIC_CODE_VERSION)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ProvisionedFabricConfigVersionQueryResultItem, ServiceModel::QueryResultHelpers::ProvisionedFabricConfigVersion, FABRIC_PROVISIONED_CONFIG_VERSION_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_PROVISIONED_FABRIC_CONFIG_VERSION)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::NodeLoadInformationQueryResult, ServiceModel::QueryResultHelpers::NodeLoadInformation, FABRIC_NODE_LOAD_INFORMATION, FABRIC_QUERY_RESULT_ITEM_KIND_PROVISIONED_FABRIC_CONFIG_VERSION)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ReplicaLoadInformationQueryResult, ServiceModel::QueryResultHelpers::ReplicaLoadInformation, FABRIC_REPLICA_LOAD_INFORMATION, FABRIC_QUERY_RESULT_ITEM_KIND_PROVISIONED_FABRIC_CONFIG_VERSION)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::UnplacedReplicaInformationQueryResult, ServiceModel::QueryResultHelpers::UnplacedReplicaInformation, FABRIC_UNPLACED_REPLICA_INFORMATION, FABRIC_QUERY_RESULT_ITEM_KIND_PROVISIONED_FABRIC_CONFIG_VERSION)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ApplicationLoadInformationQueryResult, ServiceModel::QueryResultHelpers::ApplicationLoadInformation, FABRIC_APPLICATION_LOAD_INFORMATION, FABRIC_QUERY_RESULT_ITEM_KIND_PROVISIONED_FABRIC_CONFIG_VERSION)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ClusterHealthChunk, ServiceModel::QueryResultHelpers::ClusterHealthChunk, FABRIC_CLUSTER_HEALTH_CHUNK, FABRIC_QUERY_RESULT_ITEM_KIND_CLUSTER_HEALTH_CHUNK)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::TestCommandListQueryResult, ServiceModel::QueryResultHelpers::TestCommandList, TEST_COMMAND_QUERY_RESULT_ITEM, FABRIC_QUERY_RESULT_ITEM_KIND_TEST_COMMAND_LIST)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ServiceNameQueryResult, ServiceModel::QueryResultHelpers::ServiceName, FABRIC_SERVICE_NAME_QUERY_RESULT, FABRIC_QUERY_RESULT_ITEM_KIND_SERVICE_NAME)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ApplicationNameQueryResult, ServiceModel::QueryResultHelpers::ApplicationName, FABRIC_APPLICATION_NAME_QUERY_RESULT, FABRIC_QUERY_RESULT_ITEM_KIND_APPLICATION_NAME)
DEFINE_QUERY_RESULT_LIST_ITEM(ServiceModel::ComposeDeploymentUpgradeProgress, ServiceModel::QueryResultHelpers::ComposeDeploymentUpgradeProgress, FABRIC_COMPOSE_DEPLOYMENT_UPGRADE_PROGRESS, FABRIC_QUERY_RESULT_ITEM_KIND_COMPOSE_DEPLOYMENT_UPGRADE_PROGRESS)

DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::InfrastructureTaskQueryResult, ServiceModel::QueryResultHelpers::InfrastructureTask)
DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::InternalDeletedApplicationsQueryObject, ServiceModel::QueryResultHelpers::InternalDeletedApplicationsQueryObject)
DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::InternalProvisionedApplicationTypeQueryResult, ServiceModel::QueryResultHelpers::InternalProvisionedApplicationTypeQueryResult)
DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::NodeAggregatedHealthState, ServiceModel::QueryResultHelpers::NodeAggregatedHealthState)
DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::ReplicaAggregatedHealthState, ServiceModel::QueryResultHelpers::ReplicaAggregatedHealthState)
DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::PartitionAggregatedHealthState, ServiceModel::QueryResultHelpers::PartitionAggregatedHealthState)
DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::ServiceAggregatedHealthState, ServiceModel::QueryResultHelpers::ServiceAggregatedHealthState)
DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::DeployedApplicationAggregatedHealthState, ServiceModel::QueryResultHelpers::DeployedApplicationAggregatedHealthState)
DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::DeployedServicePackageAggregatedHealthState, ServiceModel::QueryResultHelpers::DeployedServicePackageAggregatedHealthState)
DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::ApplicationAggregatedHealthState, ServiceModel::QueryResultHelpers::ApplicationAggregatedHealthState)
DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::PackageSharingPolicyQueryObject, ServiceModel::QueryResultHelpers::PackageSharingPolicyQueryObject)
DEFINE_QUERY_RESULT_INTERNAL_LIST_ITEM(ServiceModel::PackageSharingPolicyList, ServiceModel::QueryResultHelpers::PackageSharingPolicyList)
DECLARE_QUERY_RESULT_TYPE_ACTIVATOR_FACTORY(RepairTask)

