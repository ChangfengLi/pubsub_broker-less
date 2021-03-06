/* Generated from Opc.Ua.Types.bsd with script /home/imc/project/open62541-1.2/tools/generate_datatypes.py
 * on host imc by user imc at 2021-04-29 12:09:23 */

#include "types_generated.h"

/* Boolean */
#define Boolean_members NULL

/* SByte */
#define SByte_members NULL

/* Byte */
#define Byte_members NULL

/* Int16 */
#define Int16_members NULL

/* UInt16 */
#define UInt16_members NULL

/* Int32 */
#define Int32_members NULL

/* UInt32 */
#define UInt32_members NULL

/* Int64 */
#define Int64_members NULL

/* UInt64 */
#define UInt64_members NULL

/* Float */
#define Float_members NULL

/* Double */
#define Double_members NULL

/* String */
#define String_members NULL

/* DateTime */
#define DateTime_members NULL

/* Guid */
#define Guid_members NULL

/* ByteString */
#define ByteString_members NULL

/* XmlElement */
#define XmlElement_members NULL

/* NodeId */
#define NodeId_members NULL

/* ExpandedNodeId */
#define ExpandedNodeId_members NULL

/* StatusCode */
#define StatusCode_members NULL

/* QualifiedName */
#define QualifiedName_members NULL

/* LocalizedText */
#define LocalizedText_members NULL

/* ExtensionObject */
#define ExtensionObject_members NULL

/* DataValue */
#define DataValue_members NULL

/* Variant */
#define Variant_members NULL

/* DiagnosticInfo */
#define DiagnosticInfo_members NULL

/* ViewAttributes */
static UA_DataTypeMember ViewAttributes_members[7] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, displayName) - offsetof(UA_ViewAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, description) - offsetof(UA_ViewAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, writeMask) - offsetof(UA_ViewAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, userWriteMask) - offsetof(UA_ViewAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, containsNoLoops) - offsetof(UA_ViewAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ContainsNoLoops") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, eventNotifier) - offsetof(UA_ViewAttributes, containsNoLoops) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventNotifier") /* .memberName */
},};

/* UadpNetworkMessageContentMask */
#define UadpNetworkMessageContentMask_members NULL

/* XVType */
static UA_DataTypeMember XVType_members[2] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("X") /* .memberName */
},
{
    UA_TYPES_FLOAT, /* .memberTypeIndex */
    offsetof(UA_XVType, value) - offsetof(UA_XVType, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* ElementOperand */
static UA_DataTypeMember ElementOperand_members[1] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Index") /* .memberName */
},};

/* VariableAttributes */
static UA_DataTypeMember VariableAttributes_members[13] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, displayName) - offsetof(UA_VariableAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, description) - offsetof(UA_VariableAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, writeMask) - offsetof(UA_VariableAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, userWriteMask) - offsetof(UA_VariableAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, value) - offsetof(UA_VariableAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, dataType) - offsetof(UA_VariableAttributes, value) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataType") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, valueRank) - offsetof(UA_VariableAttributes, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValueRank") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, arrayDimensionsSize) - offsetof(UA_VariableAttributes, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ArrayDimensions") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, accessLevel) - offsetof(UA_VariableAttributes, arrayDimensions) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AccessLevel") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, userAccessLevel) - offsetof(UA_VariableAttributes, accessLevel) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserAccessLevel") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, minimumSamplingInterval) - offsetof(UA_VariableAttributes, userAccessLevel) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MinimumSamplingInterval") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, historizing) - offsetof(UA_VariableAttributes, minimumSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Historizing") /* .memberName */
},};

/* EnumValueType */
static UA_DataTypeMember EnumValueType_members[3] = {
{
    UA_TYPES_INT64, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumValueType, displayName) - offsetof(UA_EnumValueType, value) - sizeof(UA_Int64), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumValueType, description) - offsetof(UA_EnumValueType, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},};

/* BrokerConnectionTransportDataType */
static UA_DataTypeMember BrokerConnectionTransportDataType_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResourceUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerConnectionTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerConnectionTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
},};

/* EventFieldList */
static UA_DataTypeMember EventFieldList_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientHandle") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_EventFieldList, eventFieldsSize) - offsetof(UA_EventFieldList, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventFields") /* .memberName */
},};

/* MonitoredItemCreateResult */
static UA_DataTypeMember MonitoredItemCreateResult_members[5] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, monitoredItemId) - offsetof(UA_MonitoredItemCreateResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItemId") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, revisedSamplingInterval) - offsetof(UA_MonitoredItemCreateResult, monitoredItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedSamplingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, revisedQueueSize) - offsetof(UA_MonitoredItemCreateResult, revisedSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedQueueSize") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, filterResult) - offsetof(UA_MonitoredItemCreateResult, revisedQueueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FilterResult") /* .memberName */
},};

/* EUInformation */
static UA_DataTypeMember EUInformation_members[4] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NamespaceUri") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EUInformation, unitId) - offsetof(UA_EUInformation, namespaceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitId") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EUInformation, displayName) - offsetof(UA_EUInformation, unitId) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EUInformation, description) - offsetof(UA_EUInformation, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},};

/* ServerDiagnosticsSummaryDataType */
static UA_DataTypeMember ServerDiagnosticsSummaryDataType_members[12] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerViewCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, currentSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, serverViewCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CurrentSessionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, currentSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CumulatedSessionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityRejectedSessionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RejectedSessionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, sessionTimeoutCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionTimeoutCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, sessionAbortCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, sessionTimeoutCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionAbortCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, currentSubscriptionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, sessionAbortCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CurrentSubscriptionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSubscriptionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, currentSubscriptionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CumulatedSubscriptionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, publishingIntervalCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSubscriptionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingIntervalCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedRequestsCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, publishingIntervalCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityRejectedRequestsCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedRequestsCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedRequestsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RejectedRequestsCount") /* .memberName */
},};

/* ContentFilterElementResult */
static UA_DataTypeMember ContentFilterElementResult_members[3] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElementResult, operandStatusCodesSize) - offsetof(UA_ContentFilterElementResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OperandStatusCodes") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElementResult, operandDiagnosticInfosSize) - offsetof(UA_ContentFilterElementResult, operandStatusCodes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OperandDiagnosticInfos") /* .memberName */
},};

/* LiteralOperand */
static UA_DataTypeMember LiteralOperand_members[1] = {
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* UadpDataSetMessageContentMask */
#define UadpDataSetMessageContentMask_members NULL

/* MessageSecurityMode */
#define MessageSecurityMode_members NULL

/* UtcTime */
#define UtcTime_members NULL

/* UserIdentityToken */
static UA_DataTypeMember UserIdentityToken_members[1] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},};

/* X509IdentityToken */
static UA_DataTypeMember X509IdentityToken_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_X509IdentityToken, certificateData) - offsetof(UA_X509IdentityToken, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CertificateData") /* .memberName */
},};

/* MonitoredItemNotification */
static UA_DataTypeMember MonitoredItemNotification_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientHandle") /* .memberName */
},
{
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemNotification, value) - offsetof(UA_MonitoredItemNotification, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* StructureType */
#define StructureType_members NULL

/* ResponseHeader */
static UA_DataTypeMember ResponseHeader_members[6] = {
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Timestamp") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, requestHandle) - offsetof(UA_ResponseHeader, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHandle") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, serviceResult) - offsetof(UA_ResponseHeader, requestHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServiceResult") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, serviceDiagnostics) - offsetof(UA_ResponseHeader, serviceResult) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServiceDiagnostics") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, stringTableSize) - offsetof(UA_ResponseHeader, serviceDiagnostics) - sizeof(UA_DiagnosticInfo), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StringTable") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, additionalHeader) - offsetof(UA_ResponseHeader, stringTable) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AdditionalHeader") /* .memberName */
},};

/* SignatureData */
static UA_DataTypeMember SignatureData_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Algorithm") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_SignatureData, signature) - offsetof(UA_SignatureData, algorithm) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Signature") /* .memberName */
},};

/* NetworkAddressUrlDataType */
static UA_DataTypeMember NetworkAddressUrlDataType_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkInterface") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_NetworkAddressUrlDataType, url) - offsetof(UA_NetworkAddressUrlDataType, networkInterface) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Url") /* .memberName */
},};

/* ModifySubscriptionResponse */
static UA_DataTypeMember ModifySubscriptionResponse_members[4] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedPublishingInterval) - offsetof(UA_ModifySubscriptionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedPublishingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedLifetimeCount) - offsetof(UA_ModifySubscriptionResponse, revisedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedLifetimeCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedMaxKeepAliveCount) - offsetof(UA_ModifySubscriptionResponse, revisedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedMaxKeepAliveCount") /* .memberName */
},};

/* NodeAttributes */
static UA_DataTypeMember NodeAttributes_members[5] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, displayName) - offsetof(UA_NodeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, description) - offsetof(UA_NodeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, writeMask) - offsetof(UA_NodeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, userWriteMask) - offsetof(UA_NodeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},};

/* ActivateSessionResponse */
static UA_DataTypeMember ActivateSessionResponse_members[4] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, serverNonce) - offsetof(UA_ActivateSessionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerNonce") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, resultsSize) - offsetof(UA_ActivateSessionResponse, serverNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, diagnosticInfosSize) - offsetof(UA_ActivateSessionResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* EnumField */
static UA_DataTypeMember EnumField_members[4] = {
{
    UA_TYPES_INT64, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumField, displayName) - offsetof(UA_EnumField, value) - sizeof(UA_Int64), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumField, description) - offsetof(UA_EnumField, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EnumField, name) - offsetof(UA_EnumField, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},};

/* VariableTypeAttributes */
static UA_DataTypeMember VariableTypeAttributes_members[10] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, displayName) - offsetof(UA_VariableTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, description) - offsetof(UA_VariableTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, writeMask) - offsetof(UA_VariableTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, userWriteMask) - offsetof(UA_VariableTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, value) - offsetof(UA_VariableTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, dataType) - offsetof(UA_VariableTypeAttributes, value) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataType") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, valueRank) - offsetof(UA_VariableTypeAttributes, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValueRank") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, arrayDimensionsSize) - offsetof(UA_VariableTypeAttributes, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ArrayDimensions") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, isAbstract) - offsetof(UA_VariableTypeAttributes, arrayDimensions) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsAbstract") /* .memberName */
},};

/* CallMethodResult */
static UA_DataTypeMember CallMethodResult_members[4] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, inputArgumentResultsSize) - offsetof(UA_CallMethodResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InputArgumentResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, inputArgumentDiagnosticInfosSize) - offsetof(UA_CallMethodResult, inputArgumentResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InputArgumentDiagnosticInfos") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, outputArgumentsSize) - offsetof(UA_CallMethodResult, inputArgumentDiagnosticInfos) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OutputArguments") /* .memberName */
},};

/* MonitoringMode */
#define MonitoringMode_members NULL

/* SetMonitoringModeResponse */
static UA_DataTypeMember SetMonitoringModeResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeResponse, resultsSize) - offsetof(UA_SetMonitoringModeResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeResponse, diagnosticInfosSize) - offsetof(UA_SetMonitoringModeResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* BrowseResultMask */
#define BrowseResultMask_members NULL

/* RequestHeader */
static UA_DataTypeMember RequestHeader_members[7] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationToken") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, timestamp) - offsetof(UA_RequestHeader, authenticationToken) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Timestamp") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, requestHandle) - offsetof(UA_RequestHeader, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHandle") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, returnDiagnostics) - offsetof(UA_RequestHeader, requestHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReturnDiagnostics") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, auditEntryId) - offsetof(UA_RequestHeader, returnDiagnostics) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuditEntryId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, timeoutHint) - offsetof(UA_RequestHeader, auditEntryId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TimeoutHint") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, additionalHeader) - offsetof(UA_RequestHeader, timeoutHint) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AdditionalHeader") /* .memberName */
},};

/* MonitoredItemModifyResult */
static UA_DataTypeMember MonitoredItemModifyResult_members[4] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, revisedSamplingInterval) - offsetof(UA_MonitoredItemModifyResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedSamplingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, revisedQueueSize) - offsetof(UA_MonitoredItemModifyResult, revisedSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedQueueSize") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, filterResult) - offsetof(UA_MonitoredItemModifyResult, revisedQueueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FilterResult") /* .memberName */
},};

/* CloseSecureChannelRequest */
static UA_DataTypeMember CloseSecureChannelRequest_members[1] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},};

/* NotificationMessage */
static UA_DataTypeMember NotificationMessage_members[3] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SequenceNumber") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_NotificationMessage, publishTime) - offsetof(UA_NotificationMessage, sequenceNumber) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishTime") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_NotificationMessage, notificationDataSize) - offsetof(UA_NotificationMessage, publishTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NotificationData") /* .memberName */
},};

/* CreateSubscriptionResponse */
static UA_DataTypeMember CreateSubscriptionResponse_members[5] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, subscriptionId) - offsetof(UA_CreateSubscriptionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedPublishingInterval) - offsetof(UA_CreateSubscriptionResponse, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedPublishingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedLifetimeCount) - offsetof(UA_CreateSubscriptionResponse, revisedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedLifetimeCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedMaxKeepAliveCount) - offsetof(UA_CreateSubscriptionResponse, revisedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedMaxKeepAliveCount") /* .memberName */
},};

/* BrokerTransportQualityOfService */
#define BrokerTransportQualityOfService_members NULL

/* EnumDefinition */
static UA_DataTypeMember EnumDefinition_members[1] = {
{
    UA_TYPES_ENUMFIELD, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fields") /* .memberName */
},};

/* AxisScaleEnumeration */
#define AxisScaleEnumeration_members NULL

/* BrowseDirection */
#define BrowseDirection_members NULL

/* CallMethodRequest */
static UA_DataTypeMember CallMethodRequest_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ObjectId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CallMethodRequest, methodId) - offsetof(UA_CallMethodRequest, objectId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MethodId") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_CallMethodRequest, inputArgumentsSize) - offsetof(UA_CallMethodRequest, methodId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InputArguments") /* .memberName */
},};

/* ReadResponse */
static UA_DataTypeMember ReadResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_ReadResponse, resultsSize) - offsetof(UA_ReadResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ReadResponse, diagnosticInfosSize) - offsetof(UA_ReadResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* PermissionType */
#define PermissionType_members NULL

/* TimestampsToReturn */
#define TimestampsToReturn_members NULL

/* NodeClass */
#define NodeClass_members NULL

/* ObjectTypeAttributes */
static UA_DataTypeMember ObjectTypeAttributes_members[6] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, displayName) - offsetof(UA_ObjectTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, description) - offsetof(UA_ObjectTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, writeMask) - offsetof(UA_ObjectTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, userWriteMask) - offsetof(UA_ObjectTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, isAbstract) - offsetof(UA_ObjectTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsAbstract") /* .memberName */
},};

/* SecurityTokenRequestType */
#define SecurityTokenRequestType_members NULL

/* CloseSessionResponse */
static UA_DataTypeMember CloseSessionResponse_members[1] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},};

/* SetPublishingModeRequest */
static UA_DataTypeMember SetPublishingModeRequest_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeRequest, publishingEnabled) - offsetof(UA_SetPublishingModeRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingEnabled") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeRequest, subscriptionIdsSize) - offsetof(UA_SetPublishingModeRequest, publishingEnabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionIds") /* .memberName */
},};

/* IssuedIdentityToken */
static UA_DataTypeMember IssuedIdentityToken_members[3] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_IssuedIdentityToken, tokenData) - offsetof(UA_IssuedIdentityToken, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TokenData") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_IssuedIdentityToken, encryptionAlgorithm) - offsetof(UA_IssuedIdentityToken, tokenData) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EncryptionAlgorithm") /* .memberName */
},};

/* DeleteMonitoredItemsResponse */
static UA_DataTypeMember DeleteMonitoredItemsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsResponse, resultsSize) - offsetof(UA_DeleteMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_DeleteMonitoredItemsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* DatagramConnectionTransportDataType */
static UA_DataTypeMember DatagramConnectionTransportDataType_members[1] = {
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscoveryAddress") /* .memberName */
},};

/* ApplicationType */
#define ApplicationType_members NULL

/* BrowseNextRequest */
static UA_DataTypeMember BrowseNextRequest_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_BrowseNextRequest, releaseContinuationPoints) - offsetof(UA_BrowseNextRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReleaseContinuationPoints") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_BrowseNextRequest, continuationPointsSize) - offsetof(UA_BrowseNextRequest, releaseContinuationPoints) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ContinuationPoints") /* .memberName */
},};

/* ModifySubscriptionRequest */
static UA_DataTypeMember ModifySubscriptionRequest_members[7] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, subscriptionId) - offsetof(UA_ModifySubscriptionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedPublishingInterval) - offsetof(UA_ModifySubscriptionRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedPublishingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedLifetimeCount) - offsetof(UA_ModifySubscriptionRequest, requestedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedLifetimeCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedMaxKeepAliveCount) - offsetof(UA_ModifySubscriptionRequest, requestedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedMaxKeepAliveCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, maxNotificationsPerPublish) - offsetof(UA_ModifySubscriptionRequest, requestedMaxKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxNotificationsPerPublish") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, priority) - offsetof(UA_ModifySubscriptionRequest, maxNotificationsPerPublish) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Priority") /* .memberName */
},};

/* BrowseDescription */
static UA_DataTypeMember BrowseDescription_members[6] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_BROWSEDIRECTION, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, browseDirection) - offsetof(UA_BrowseDescription, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowseDirection") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, referenceTypeId) - offsetof(UA_BrowseDescription, browseDirection) - sizeof(UA_BrowseDirection), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, includeSubtypes) - offsetof(UA_BrowseDescription, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IncludeSubtypes") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, nodeClassMask) - offsetof(UA_BrowseDescription, includeSubtypes) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeClassMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, resultMask) - offsetof(UA_BrowseDescription, nodeClassMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResultMask") /* .memberName */
},};

/* SignedSoftwareCertificate */
static UA_DataTypeMember SignedSoftwareCertificate_members[2] = {
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CertificateData") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_SignedSoftwareCertificate, signature) - offsetof(UA_SignedSoftwareCertificate, certificateData) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Signature") /* .memberName */
},};

/* BrowsePathTarget */
static UA_DataTypeMember BrowsePathTarget_members[2] = {
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowsePathTarget, remainingPathIndex) - offsetof(UA_BrowsePathTarget, targetId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RemainingPathIndex") /* .memberName */
},};

/* WriteResponse */
static UA_DataTypeMember WriteResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_WriteResponse, resultsSize) - offsetof(UA_WriteResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_WriteResponse, diagnosticInfosSize) - offsetof(UA_WriteResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* AddNodesResult */
static UA_DataTypeMember AddNodesResult_members[2] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesResult, addedNodeId) - offsetof(UA_AddNodesResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AddedNodeId") /* .memberName */
},};

/* UadpDataSetReaderMessageDataType */
static UA_DataTypeMember UadpDataSetReaderMessageDataType_members[9] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GroupVersion") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageNumber) - offsetof(UA_UadpDataSetReaderMessageDataType, groupVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageNumber") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, dataSetOffset) - offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageNumber) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetOffset") /* .memberName */
},
{
    UA_TYPES_GUID, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, dataSetClassId) - offsetof(UA_UadpDataSetReaderMessageDataType, dataSetOffset) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetClassId") /* .memberName */
},
{
    UA_TYPES_UADPNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageContentMask) - offsetof(UA_UadpDataSetReaderMessageDataType, dataSetClassId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
},
{
    UA_TYPES_UADPDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, dataSetMessageContentMask) - offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageContentMask) - sizeof(UA_UadpNetworkMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, publishingInterval) - offsetof(UA_UadpDataSetReaderMessageDataType, dataSetMessageContentMask) - sizeof(UA_UadpDataSetMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingInterval") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, receiveOffset) - offsetof(UA_UadpDataSetReaderMessageDataType, publishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReceiveOffset") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, processingOffset) - offsetof(UA_UadpDataSetReaderMessageDataType, receiveOffset) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProcessingOffset") /* .memberName */
},};

/* AddReferencesItem */
static UA_DataTypeMember AddReferencesItem_members[6] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SourceNodeId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, referenceTypeId) - offsetof(UA_AddReferencesItem, sourceNodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, isForward) - offsetof(UA_AddReferencesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsForward") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetServerUri) - offsetof(UA_AddReferencesItem, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetServerUri") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetNodeId) - offsetof(UA_AddReferencesItem, targetServerUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetNodeId") /* .memberName */
},
{
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetNodeClass) - offsetof(UA_AddReferencesItem, targetNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetNodeClass") /* .memberName */
},};

/* DeleteReferencesResponse */
static UA_DataTypeMember DeleteReferencesResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesResponse, resultsSize) - offsetof(UA_DeleteReferencesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesResponse, diagnosticInfosSize) - offsetof(UA_DeleteReferencesResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* RelativePathElement */
static UA_DataTypeMember RelativePathElement_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, isInverse) - offsetof(UA_RelativePathElement, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsInverse") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, includeSubtypes) - offsetof(UA_RelativePathElement, isInverse) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IncludeSubtypes") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, targetName) - offsetof(UA_RelativePathElement, includeSubtypes) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetName") /* .memberName */
},};

/* SubscriptionAcknowledgement */
static UA_DataTypeMember SubscriptionAcknowledgement_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionAcknowledgement, sequenceNumber) - offsetof(UA_SubscriptionAcknowledgement, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SequenceNumber") /* .memberName */
},};

/* ConfigurationVersionDataType */
static UA_DataTypeMember ConfigurationVersionDataType_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MajorVersion") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ConfigurationVersionDataType, minorVersion) - offsetof(UA_ConfigurationVersionDataType, majorVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MinorVersion") /* .memberName */
},};

/* DataSetFieldContentMask */
#define DataSetFieldContentMask_members NULL

/* TransferResult */
static UA_DataTypeMember TransferResult_members[2] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TransferResult, availableSequenceNumbersSize) - offsetof(UA_TransferResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AvailableSequenceNumbers") /* .memberName */
},};

/* PublishedVariableDataType */
static UA_DataTypeMember PublishedVariableDataType_members[8] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishedVariable") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, attributeId) - offsetof(UA_PublishedVariableDataType, publishedVariable) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, samplingIntervalHint) - offsetof(UA_PublishedVariableDataType, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SamplingIntervalHint") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, deadbandType) - offsetof(UA_PublishedVariableDataType, samplingIntervalHint) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeadbandType") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, deadbandValue) - offsetof(UA_PublishedVariableDataType, deadbandType) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeadbandValue") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, indexRange) - offsetof(UA_PublishedVariableDataType, deadbandValue) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, substituteValue) - offsetof(UA_PublishedVariableDataType, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubstituteValue") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, metaDataPropertiesSize) - offsetof(UA_PublishedVariableDataType, substituteValue) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MetaDataProperties") /* .memberName */
},};

/* CreateMonitoredItemsResponse */
static UA_DataTypeMember CreateMonitoredItemsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_MONITOREDITEMCREATERESULT, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsResponse, resultsSize) - offsetof(UA_CreateMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_CreateMonitoredItemsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* RolePermissionType */
static UA_DataTypeMember RolePermissionType_members[2] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RoleId") /* .memberName */
},
{
    UA_TYPES_PERMISSIONTYPE, /* .memberTypeIndex */
    offsetof(UA_RolePermissionType, permissions) - offsetof(UA_RolePermissionType, roleId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Permissions") /* .memberName */
},};

/* OverrideValueHandling */
#define OverrideValueHandling_members NULL

/* DeleteReferencesItem */
static UA_DataTypeMember DeleteReferencesItem_members[5] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SourceNodeId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, referenceTypeId) - offsetof(UA_DeleteReferencesItem, sourceNodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, isForward) - offsetof(UA_DeleteReferencesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsForward") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, targetNodeId) - offsetof(UA_DeleteReferencesItem, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetNodeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, deleteBidirectional) - offsetof(UA_DeleteReferencesItem, targetNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeleteBidirectional") /* .memberName */
},};

/* WriteValue */
static UA_DataTypeMember WriteValue_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_WriteValue, attributeId) - offsetof(UA_WriteValue, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriteValue, indexRange) - offsetof(UA_WriteValue, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},
{
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_WriteValue, value) - offsetof(UA_WriteValue, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* DataTypeAttributes */
static UA_DataTypeMember DataTypeAttributes_members[6] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, displayName) - offsetof(UA_DataTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, description) - offsetof(UA_DataTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, writeMask) - offsetof(UA_DataTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, userWriteMask) - offsetof(UA_DataTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, isAbstract) - offsetof(UA_DataTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsAbstract") /* .memberName */
},};

/* TransferSubscriptionsResponse */
static UA_DataTypeMember TransferSubscriptionsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_TRANSFERRESULT, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsResponse, resultsSize) - offsetof(UA_TransferSubscriptionsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsResponse, diagnosticInfosSize) - offsetof(UA_TransferSubscriptionsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* AddReferencesResponse */
static UA_DataTypeMember AddReferencesResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_AddReferencesResponse, resultsSize) - offsetof(UA_AddReferencesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_AddReferencesResponse, diagnosticInfosSize) - offsetof(UA_AddReferencesResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* DeadbandType */
#define DeadbandType_members NULL

/* DataChangeTrigger */
#define DataChangeTrigger_members NULL

/* BuildInfo */
static UA_DataTypeMember BuildInfo_members[6] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProductUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, manufacturerName) - offsetof(UA_BuildInfo, productUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ManufacturerName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, productName) - offsetof(UA_BuildInfo, manufacturerName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProductName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, softwareVersion) - offsetof(UA_BuildInfo, productName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SoftwareVersion") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, buildNumber) - offsetof(UA_BuildInfo, softwareVersion) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuildNumber") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, buildDate) - offsetof(UA_BuildInfo, buildNumber) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuildDate") /* .memberName */
},};

/* FilterOperand */
#define FilterOperand_members NULL

/* MonitoringParameters */
static UA_DataTypeMember MonitoringParameters_members[5] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientHandle") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, samplingInterval) - offsetof(UA_MonitoringParameters, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SamplingInterval") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, filter) - offsetof(UA_MonitoringParameters, samplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Filter") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, queueSize) - offsetof(UA_MonitoringParameters, filter) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueueSize") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, discardOldest) - offsetof(UA_MonitoringParameters, queueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscardOldest") /* .memberName */
},};

/* DoubleComplexNumberType */
static UA_DataTypeMember DoubleComplexNumberType_members[2] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Real") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DoubleComplexNumberType, imaginary) - offsetof(UA_DoubleComplexNumberType, real) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Imaginary") /* .memberName */
},};

/* DeleteNodesItem */
static UA_DataTypeMember DeleteNodesItem_members[2] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesItem, deleteTargetReferences) - offsetof(UA_DeleteNodesItem, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeleteTargetReferences") /* .memberName */
},};

/* DatagramWriterGroupTransportDataType */
static UA_DataTypeMember DatagramWriterGroupTransportDataType_members[2] = {
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageRepeatCount") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DatagramWriterGroupTransportDataType, messageRepeatDelay) - offsetof(UA_DatagramWriterGroupTransportDataType, messageRepeatCount) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageRepeatDelay") /* .memberName */
},};

/* ReadValueId */
static UA_DataTypeMember ReadValueId_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, attributeId) - offsetof(UA_ReadValueId, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, indexRange) - offsetof(UA_ReadValueId, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, dataEncoding) - offsetof(UA_ReadValueId, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataEncoding") /* .memberName */
},};

/* CallRequest */
static UA_DataTypeMember CallRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_CALLMETHODREQUEST, /* .memberTypeIndex */
    offsetof(UA_CallRequest, methodsToCallSize) - offsetof(UA_CallRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MethodsToCall") /* .memberName */
},};

/* RelativePath */
static UA_DataTypeMember RelativePath_members[1] = {
{
    UA_TYPES_RELATIVEPATHELEMENT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Elements") /* .memberName */
},};

/* DeleteNodesRequest */
static UA_DataTypeMember DeleteNodesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_DELETENODESITEM, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesRequest, nodesToDeleteSize) - offsetof(UA_DeleteNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToDelete") /* .memberName */
},};

/* BrokerDataSetWriterTransportDataType */
static UA_DataTypeMember BrokerDataSetWriterTransportDataType_members[6] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueueName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, resourceUri) - offsetof(UA_BrokerDataSetWriterTransportDataType, queueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResourceUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerDataSetWriterTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
},
{
    UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, requestedDeliveryGuarantee) - offsetof(UA_BrokerDataSetWriterTransportDataType, authenticationProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedDeliveryGuarantee") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, metaDataQueueName) - offsetof(UA_BrokerDataSetWriterTransportDataType, requestedDeliveryGuarantee) - sizeof(UA_BrokerTransportQualityOfService), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MetaDataQueueName") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, metaDataUpdateTime) - offsetof(UA_BrokerDataSetWriterTransportDataType, metaDataQueueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MetaDataUpdateTime") /* .memberName */
},};

/* MonitoredItemModifyRequest */
static UA_DataTypeMember MonitoredItemModifyRequest_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItemId") /* .memberName */
},
{
    UA_TYPES_MONITORINGPARAMETERS, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyRequest, requestedParameters) - offsetof(UA_MonitoredItemModifyRequest, monitoredItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedParameters") /* .memberName */
},};

/* UserTokenType */
#define UserTokenType_members NULL

/* AggregateConfiguration */
static UA_DataTypeMember AggregateConfiguration_members[5] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UseServerCapabilitiesDefaults") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, treatUncertainAsBad) - offsetof(UA_AggregateConfiguration, useServerCapabilitiesDefaults) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TreatUncertainAsBad") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, percentDataBad) - offsetof(UA_AggregateConfiguration, treatUncertainAsBad) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PercentDataBad") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, percentDataGood) - offsetof(UA_AggregateConfiguration, percentDataBad) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PercentDataGood") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, useSlopedExtrapolation) - offsetof(UA_AggregateConfiguration, percentDataGood) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UseSlopedExtrapolation") /* .memberName */
},};

/* LocaleId */
#define LocaleId_members NULL

/* UnregisterNodesResponse */
static UA_DataTypeMember UnregisterNodesResponse_members[1] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},};

/* ContentFilterResult */
static UA_DataTypeMember ContentFilterResult_members[2] = {
{
    UA_TYPES_CONTENTFILTERELEMENTRESULT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ElementResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ContentFilterResult, elementDiagnosticInfosSize) - offsetof(UA_ContentFilterResult, elementResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ElementDiagnosticInfos") /* .memberName */
},};

/* SimpleTypeDescription */
static UA_DataTypeMember SimpleTypeDescription_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataTypeId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_SimpleTypeDescription, name) - offsetof(UA_SimpleTypeDescription, dataTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SimpleTypeDescription, baseDataType) - offsetof(UA_SimpleTypeDescription, name) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BaseDataType") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_SimpleTypeDescription, builtInType) - offsetof(UA_SimpleTypeDescription, baseDataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuiltInType") /* .memberName */
},};

/* UserTokenPolicy */
static UA_DataTypeMember UserTokenPolicy_members[5] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},
{
    UA_TYPES_USERTOKENTYPE, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, tokenType) - offsetof(UA_UserTokenPolicy, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TokenType") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, issuedTokenType) - offsetof(UA_UserTokenPolicy, tokenType) - sizeof(UA_UserTokenType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IssuedTokenType") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, issuerEndpointUrl) - offsetof(UA_UserTokenPolicy, issuedTokenType) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IssuerEndpointUrl") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, securityPolicyUri) - offsetof(UA_UserTokenPolicy, issuerEndpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityPolicyUri") /* .memberName */
},};

/* DeleteMonitoredItemsRequest */
static UA_DataTypeMember DeleteMonitoredItemsRequest_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsRequest, subscriptionId) - offsetof(UA_DeleteMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsRequest, monitoredItemIdsSize) - offsetof(UA_DeleteMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItemIds") /* .memberName */
},};

/* SetMonitoringModeRequest */
static UA_DataTypeMember SetMonitoringModeRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, subscriptionId) - offsetof(UA_SetMonitoringModeRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_MONITORINGMODE, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, monitoringMode) - offsetof(UA_SetMonitoringModeRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoringMode") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, monitoredItemIdsSize) - offsetof(UA_SetMonitoringModeRequest, monitoringMode) - sizeof(UA_MonitoringMode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItemIds") /* .memberName */
},};

/* Duration */
#define Duration_members NULL

/* ReferenceTypeAttributes */
static UA_DataTypeMember ReferenceTypeAttributes_members[8] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, displayName) - offsetof(UA_ReferenceTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, description) - offsetof(UA_ReferenceTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, writeMask) - offsetof(UA_ReferenceTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, userWriteMask) - offsetof(UA_ReferenceTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, isAbstract) - offsetof(UA_ReferenceTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsAbstract") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, symmetric) - offsetof(UA_ReferenceTypeAttributes, isAbstract) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Symmetric") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, inverseName) - offsetof(UA_ReferenceTypeAttributes, symmetric) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InverseName") /* .memberName */
},};

/* DataSetFieldFlags */
#define DataSetFieldFlags_members NULL

/* GetEndpointsRequest */
static UA_DataTypeMember GetEndpointsRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, endpointUrl) - offsetof(UA_GetEndpointsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrl") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, localeIdsSize) - offsetof(UA_GetEndpointsRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LocaleIds") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, profileUrisSize) - offsetof(UA_GetEndpointsRequest, localeIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProfileUris") /* .memberName */
},};

/* CloseSecureChannelResponse */
static UA_DataTypeMember CloseSecureChannelResponse_members[1] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},};

/* PublishedDataItemsDataType */
static UA_DataTypeMember PublishedDataItemsDataType_members[1] = {
{
    UA_TYPES_PUBLISHEDVARIABLEDATATYPE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishedData") /* .memberName */
},};

/* PubSubState */
#define PubSubState_members NULL

/* ViewDescription */
static UA_DataTypeMember ViewDescription_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ViewId") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ViewDescription, timestamp) - offsetof(UA_ViewDescription, viewId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Timestamp") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewDescription, viewVersion) - offsetof(UA_ViewDescription, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ViewVersion") /* .memberName */
},};

/* SetPublishingModeResponse */
static UA_DataTypeMember SetPublishingModeResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeResponse, resultsSize) - offsetof(UA_SetPublishingModeResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeResponse, diagnosticInfosSize) - offsetof(UA_SetPublishingModeResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* StatusChangeNotification */
static UA_DataTypeMember StatusChangeNotification_members[2] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Status") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_StatusChangeNotification, diagnosticInfo) - offsetof(UA_StatusChangeNotification, status) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfo") /* .memberName */
},};

/* StructureField */
static UA_DataTypeMember StructureField_members[7] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_StructureField, description) - offsetof(UA_StructureField, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_StructureField, dataType) - offsetof(UA_StructureField, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataType") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_StructureField, valueRank) - offsetof(UA_StructureField, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValueRank") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_StructureField, arrayDimensionsSize) - offsetof(UA_StructureField, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ArrayDimensions") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_StructureField, maxStringLength) - offsetof(UA_StructureField, arrayDimensions) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxStringLength") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_StructureField, isOptional) - offsetof(UA_StructureField, maxStringLength) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsOptional") /* .memberName */
},};

/* NodeAttributesMask */
#define NodeAttributesMask_members NULL

/* EventFilterResult */
static UA_DataTypeMember EventFilterResult_members[3] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SelectClauseResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_EventFilterResult, selectClauseDiagnosticInfosSize) - offsetof(UA_EventFilterResult, selectClauseResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SelectClauseDiagnosticInfos") /* .memberName */
},
{
    UA_TYPES_CONTENTFILTERRESULT, /* .memberTypeIndex */
    offsetof(UA_EventFilterResult, whereClauseResult) - offsetof(UA_EventFilterResult, selectClauseDiagnosticInfos) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WhereClauseResult") /* .memberName */
},};

/* BrokerWriterGroupTransportDataType */
static UA_DataTypeMember BrokerWriterGroupTransportDataType_members[4] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueueName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerWriterGroupTransportDataType, resourceUri) - offsetof(UA_BrokerWriterGroupTransportDataType, queueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResourceUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerWriterGroupTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerWriterGroupTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
},
{
    UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE, /* .memberTypeIndex */
    offsetof(UA_BrokerWriterGroupTransportDataType, requestedDeliveryGuarantee) - offsetof(UA_BrokerWriterGroupTransportDataType, authenticationProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedDeliveryGuarantee") /* .memberName */
},};

/* KeyValuePair */
static UA_DataTypeMember KeyValuePair_members[2] = {
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Key") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_KeyValuePair, value) - offsetof(UA_KeyValuePair, key) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* MonitoredItemCreateRequest */
static UA_DataTypeMember MonitoredItemCreateRequest_members[3] = {
{
    UA_TYPES_READVALUEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ItemToMonitor") /* .memberName */
},
{
    UA_TYPES_MONITORINGMODE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateRequest, monitoringMode) - offsetof(UA_MonitoredItemCreateRequest, itemToMonitor) - sizeof(UA_ReadValueId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoringMode") /* .memberName */
},
{
    UA_TYPES_MONITORINGPARAMETERS, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateRequest, requestedParameters) - offsetof(UA_MonitoredItemCreateRequest, monitoringMode) - sizeof(UA_MonitoringMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedParameters") /* .memberName */
},};

/* ComplexNumberType */
static UA_DataTypeMember ComplexNumberType_members[2] = {
{
    UA_TYPES_FLOAT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Real") /* .memberName */
},
{
    UA_TYPES_FLOAT, /* .memberTypeIndex */
    offsetof(UA_ComplexNumberType, imaginary) - offsetof(UA_ComplexNumberType, real) - sizeof(UA_Float), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Imaginary") /* .memberName */
},};

/* Range */
static UA_DataTypeMember Range_members[2] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Low") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_Range, high) - offsetof(UA_Range, low) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("High") /* .memberName */
},};

/* DataChangeNotification */
static UA_DataTypeMember DataChangeNotification_members[2] = {
{
    UA_TYPES_MONITOREDITEMNOTIFICATION, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItems") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DataChangeNotification, diagnosticInfosSize) - offsetof(UA_DataChangeNotification, monitoredItems) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* Argument */
static UA_DataTypeMember Argument_members[5] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_Argument, dataType) - offsetof(UA_Argument, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataType") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_Argument, valueRank) - offsetof(UA_Argument, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValueRank") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_Argument, arrayDimensionsSize) - offsetof(UA_Argument, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ArrayDimensions") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_Argument, description) - offsetof(UA_Argument, arrayDimensions) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},};

/* JsonDataSetMessageContentMask */
#define JsonDataSetMessageContentMask_members NULL

/* TransferSubscriptionsRequest */
static UA_DataTypeMember TransferSubscriptionsRequest_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsRequest, subscriptionIdsSize) - offsetof(UA_TransferSubscriptionsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionIds") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsRequest, sendInitialValues) - offsetof(UA_TransferSubscriptionsRequest, subscriptionIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SendInitialValues") /* .memberName */
},};

/* ChannelSecurityToken */
static UA_DataTypeMember ChannelSecurityToken_members[4] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ChannelId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, tokenId) - offsetof(UA_ChannelSecurityToken, channelId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TokenId") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, createdAt) - offsetof(UA_ChannelSecurityToken, tokenId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CreatedAt") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, revisedLifetime) - offsetof(UA_ChannelSecurityToken, createdAt) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedLifetime") /* .memberName */
},};

/* ServerState */
#define ServerState_members NULL

/* EventNotificationList */
static UA_DataTypeMember EventNotificationList_members[1] = {
{
    UA_TYPES_EVENTFIELDLIST, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Events") /* .memberName */
},};

/* AnonymousIdentityToken */
static UA_DataTypeMember AnonymousIdentityToken_members[1] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},};

/* FilterOperator */
#define FilterOperator_members NULL

/* AggregateFilter */
static UA_DataTypeMember AggregateFilter_members[4] = {
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartTime") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, aggregateType) - offsetof(UA_AggregateFilter, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AggregateType") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, processingInterval) - offsetof(UA_AggregateFilter, aggregateType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProcessingInterval") /* .memberName */
},
{
    UA_TYPES_AGGREGATECONFIGURATION, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, aggregateConfiguration) - offsetof(UA_AggregateFilter, processingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AggregateConfiguration") /* .memberName */
},};

/* RepublishResponse */
static UA_DataTypeMember RepublishResponse_members[2] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_NOTIFICATIONMESSAGE, /* .memberTypeIndex */
    offsetof(UA_RepublishResponse, notificationMessage) - offsetof(UA_RepublishResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NotificationMessage") /* .memberName */
},};

/* DeleteSubscriptionsResponse */
static UA_DataTypeMember DeleteSubscriptionsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsResponse, resultsSize) - offsetof(UA_DeleteSubscriptionsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsResponse, diagnosticInfosSize) - offsetof(UA_DeleteSubscriptionsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* RegisterNodesRequest */
static UA_DataTypeMember RegisterNodesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_RegisterNodesRequest, nodesToRegisterSize) - offsetof(UA_RegisterNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToRegister") /* .memberName */
},};

/* StructureDefinition */
static UA_DataTypeMember StructureDefinition_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DefaultEncodingId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_StructureDefinition, baseDataType) - offsetof(UA_StructureDefinition, defaultEncodingId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BaseDataType") /* .memberName */
},
{
    UA_TYPES_STRUCTURETYPE, /* .memberTypeIndex */
    offsetof(UA_StructureDefinition, structureType) - offsetof(UA_StructureDefinition, baseDataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StructureType") /* .memberName */
},
{
    UA_TYPES_STRUCTUREFIELD, /* .memberTypeIndex */
    offsetof(UA_StructureDefinition, fieldsSize) - offsetof(UA_StructureDefinition, structureType) - sizeof(UA_StructureType), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fields") /* .memberName */
},};

/* MethodAttributes */
static UA_DataTypeMember MethodAttributes_members[7] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, displayName) - offsetof(UA_MethodAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, description) - offsetof(UA_MethodAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, writeMask) - offsetof(UA_MethodAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, userWriteMask) - offsetof(UA_MethodAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, executable) - offsetof(UA_MethodAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Executable") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, userExecutable) - offsetof(UA_MethodAttributes, executable) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserExecutable") /* .memberName */
},};

/* UserNameIdentityToken */
static UA_DataTypeMember UserNameIdentityToken_members[4] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, userName) - offsetof(UA_UserNameIdentityToken, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserName") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, password) - offsetof(UA_UserNameIdentityToken, userName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Password") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, encryptionAlgorithm) - offsetof(UA_UserNameIdentityToken, password) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EncryptionAlgorithm") /* .memberName */
},};

/* UnregisterNodesRequest */
static UA_DataTypeMember UnregisterNodesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_UnregisterNodesRequest, nodesToUnregisterSize) - offsetof(UA_UnregisterNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToUnregister") /* .memberName */
},};

/* DataSetOrderingType */
#define DataSetOrderingType_members NULL

/* OpenSecureChannelResponse */
static UA_DataTypeMember OpenSecureChannelResponse_members[4] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, serverProtocolVersion) - offsetof(UA_OpenSecureChannelResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerProtocolVersion") /* .memberName */
},
{
    UA_TYPES_CHANNELSECURITYTOKEN, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, securityToken) - offsetof(UA_OpenSecureChannelResponse, serverProtocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityToken") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, serverNonce) - offsetof(UA_OpenSecureChannelResponse, securityToken) - sizeof(UA_ChannelSecurityToken), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerNonce") /* .memberName */
},};

/* SetTriggeringResponse */
static UA_DataTypeMember SetTriggeringResponse_members[5] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, addResultsSize) - offsetof(UA_SetTriggeringResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AddResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, addDiagnosticInfosSize) - offsetof(UA_SetTriggeringResponse, addResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AddDiagnosticInfos") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, removeResultsSize) - offsetof(UA_SetTriggeringResponse, addDiagnosticInfos) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RemoveResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, removeDiagnosticInfosSize) - offsetof(UA_SetTriggeringResponse, removeResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RemoveDiagnosticInfos") /* .memberName */
},};

/* SimpleAttributeOperand */
static UA_DataTypeMember SimpleAttributeOperand_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TypeDefinitionId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, browsePathSize) - offsetof(UA_SimpleAttributeOperand, typeDefinitionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowsePath") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, attributeId) - offsetof(UA_SimpleAttributeOperand, browsePath) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, indexRange) - offsetof(UA_SimpleAttributeOperand, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},};

/* UadpDataSetWriterMessageDataType */
static UA_DataTypeMember UadpDataSetWriterMessageDataType_members[4] = {
{
    UA_TYPES_UADPDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetWriterMessageDataType, configuredSize) - offsetof(UA_UadpDataSetWriterMessageDataType, dataSetMessageContentMask) - sizeof(UA_UadpDataSetMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ConfiguredSize") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetWriterMessageDataType, networkMessageNumber) - offsetof(UA_UadpDataSetWriterMessageDataType, configuredSize) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageNumber") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetWriterMessageDataType, dataSetOffset) - offsetof(UA_UadpDataSetWriterMessageDataType, networkMessageNumber) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetOffset") /* .memberName */
},};

/* JsonNetworkMessageContentMask */
#define JsonNetworkMessageContentMask_members NULL

/* RepublishRequest */
static UA_DataTypeMember RepublishRequest_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RepublishRequest, subscriptionId) - offsetof(UA_RepublishRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RepublishRequest, retransmitSequenceNumber) - offsetof(UA_RepublishRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RetransmitSequenceNumber") /* .memberName */
},};

/* RegisterNodesResponse */
static UA_DataTypeMember RegisterNodesResponse_members[2] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_RegisterNodesResponse, registeredNodeIdsSize) - offsetof(UA_RegisterNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RegisteredNodeIds") /* .memberName */
},};

/* ModifyMonitoredItemsResponse */
static UA_DataTypeMember ModifyMonitoredItemsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_MONITOREDITEMMODIFYRESULT, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsResponse, resultsSize) - offsetof(UA_ModifyMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_ModifyMonitoredItemsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* FieldTargetDataType */
static UA_DataTypeMember FieldTargetDataType_members[7] = {
{
    UA_TYPES_GUID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetFieldId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, receiverIndexRange) - offsetof(UA_FieldTargetDataType, dataSetFieldId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReceiverIndexRange") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, targetNodeId) - offsetof(UA_FieldTargetDataType, receiverIndexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetNodeId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, attributeId) - offsetof(UA_FieldTargetDataType, targetNodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, writeIndexRange) - offsetof(UA_FieldTargetDataType, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteIndexRange") /* .memberName */
},
{
    UA_TYPES_OVERRIDEVALUEHANDLING, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, overrideValueHandling) - offsetof(UA_FieldTargetDataType, writeIndexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OverrideValueHandling") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, overrideValue) - offsetof(UA_FieldTargetDataType, overrideValueHandling) - sizeof(UA_OverrideValueHandling), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OverrideValue") /* .memberName */
},};

/* DeleteSubscriptionsRequest */
static UA_DataTypeMember DeleteSubscriptionsRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsRequest, subscriptionIdsSize) - offsetof(UA_DeleteSubscriptionsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionIds") /* .memberName */
},};

/* RedundancySupport */
#define RedundancySupport_members NULL

/* BrowsePath */
static UA_DataTypeMember BrowsePath_members[2] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartingNode") /* .memberName */
},
{
    UA_TYPES_RELATIVEPATH, /* .memberTypeIndex */
    offsetof(UA_BrowsePath, relativePath) - offsetof(UA_BrowsePath, startingNode) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RelativePath") /* .memberName */
},};

/* ObjectAttributes */
static UA_DataTypeMember ObjectAttributes_members[6] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, displayName) - offsetof(UA_ObjectAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, description) - offsetof(UA_ObjectAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, writeMask) - offsetof(UA_ObjectAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, userWriteMask) - offsetof(UA_ObjectAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, eventNotifier) - offsetof(UA_ObjectAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventNotifier") /* .memberName */
},};

/* PublishRequest */
static UA_DataTypeMember PublishRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT, /* .memberTypeIndex */
    offsetof(UA_PublishRequest, subscriptionAcknowledgementsSize) - offsetof(UA_PublishRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionAcknowledgements") /* .memberName */
},};

/* FindServersRequest */
static UA_DataTypeMember FindServersRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, endpointUrl) - offsetof(UA_FindServersRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrl") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, localeIdsSize) - offsetof(UA_FindServersRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LocaleIds") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, serverUrisSize) - offsetof(UA_FindServersRequest, localeIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerUris") /* .memberName */
},};

/* JsonDataSetWriterMessageDataType */
static UA_DataTypeMember JsonDataSetWriterMessageDataType_members[1] = {
{
    UA_TYPES_JSONDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
},};

/* FieldMetaData */
static UA_DataTypeMember FieldMetaData_members[10] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, description) - offsetof(UA_FieldMetaData, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_DATASETFIELDFLAGS, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, fieldFlags) - offsetof(UA_FieldMetaData, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FieldFlags") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, builtInType) - offsetof(UA_FieldMetaData, fieldFlags) - sizeof(UA_DataSetFieldFlags), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuiltInType") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, dataType) - offsetof(UA_FieldMetaData, builtInType) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataType") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, valueRank) - offsetof(UA_FieldMetaData, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValueRank") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, arrayDimensionsSize) - offsetof(UA_FieldMetaData, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ArrayDimensions") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, maxStringLength) - offsetof(UA_FieldMetaData, arrayDimensions) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxStringLength") /* .memberName */
},
{
    UA_TYPES_GUID, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, dataSetFieldId) - offsetof(UA_FieldMetaData, maxStringLength) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetFieldId") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, propertiesSize) - offsetof(UA_FieldMetaData, dataSetFieldId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Properties") /* .memberName */
},};

/* ReferenceDescription */
static UA_DataTypeMember ReferenceDescription_members[7] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, isForward) - offsetof(UA_ReferenceDescription, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsForward") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, nodeId) - offsetof(UA_ReferenceDescription, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, browseName) - offsetof(UA_ReferenceDescription, nodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowseName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, displayName) - offsetof(UA_ReferenceDescription, browseName) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, nodeClass) - offsetof(UA_ReferenceDescription, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeClass") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, typeDefinition) - offsetof(UA_ReferenceDescription, nodeClass) - sizeof(UA_NodeClass), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TypeDefinition") /* .memberName */
},};

/* SubscribedDataSetMirrorDataType */
static UA_DataTypeMember SubscribedDataSetMirrorDataType_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParentNodeName") /* .memberName */
},
{
    UA_TYPES_ROLEPERMISSIONTYPE, /* .memberTypeIndex */
    offsetof(UA_SubscribedDataSetMirrorDataType, rolePermissionsSize) - offsetof(UA_SubscribedDataSetMirrorDataType, parentNodeName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RolePermissions") /* .memberName */
},};

/* TargetVariablesDataType */
static UA_DataTypeMember TargetVariablesDataType_members[1] = {
{
    UA_TYPES_FIELDTARGETDATATYPE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetVariables") /* .memberName */
},};

/* CreateSubscriptionRequest */
static UA_DataTypeMember CreateSubscriptionRequest_members[7] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedPublishingInterval) - offsetof(UA_CreateSubscriptionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedPublishingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedLifetimeCount) - offsetof(UA_CreateSubscriptionRequest, requestedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedLifetimeCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedMaxKeepAliveCount) - offsetof(UA_CreateSubscriptionRequest, requestedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedMaxKeepAliveCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, maxNotificationsPerPublish) - offsetof(UA_CreateSubscriptionRequest, requestedMaxKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxNotificationsPerPublish") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, publishingEnabled) - offsetof(UA_CreateSubscriptionRequest, maxNotificationsPerPublish) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingEnabled") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, priority) - offsetof(UA_CreateSubscriptionRequest, publishingEnabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Priority") /* .memberName */
},};

/* CallResponse */
static UA_DataTypeMember CallResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_CALLMETHODRESULT, /* .memberTypeIndex */
    offsetof(UA_CallResponse, resultsSize) - offsetof(UA_CallResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CallResponse, diagnosticInfosSize) - offsetof(UA_CallResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* DeleteNodesResponse */
static UA_DataTypeMember DeleteNodesResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesResponse, resultsSize) - offsetof(UA_DeleteNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesResponse, diagnosticInfosSize) - offsetof(UA_DeleteNodesResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* BrokerDataSetReaderTransportDataType */
static UA_DataTypeMember BrokerDataSetReaderTransportDataType_members[5] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueueName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, resourceUri) - offsetof(UA_BrokerDataSetReaderTransportDataType, queueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResourceUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerDataSetReaderTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
},
{
    UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, requestedDeliveryGuarantee) - offsetof(UA_BrokerDataSetReaderTransportDataType, authenticationProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedDeliveryGuarantee") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, metaDataQueueName) - offsetof(UA_BrokerDataSetReaderTransportDataType, requestedDeliveryGuarantee) - sizeof(UA_BrokerTransportQualityOfService), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MetaDataQueueName") /* .memberName */
},};

/* ModifyMonitoredItemsRequest */
static UA_DataTypeMember ModifyMonitoredItemsRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, subscriptionId) - offsetof(UA_ModifyMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, timestampsToReturn) - offsetof(UA_ModifyMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TimestampsToReturn") /* .memberName */
},
{
    UA_TYPES_MONITOREDITEMMODIFYREQUEST, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, itemsToModifySize) - offsetof(UA_ModifyMonitoredItemsRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ItemsToModify") /* .memberName */
},};

/* ServiceFault */
static UA_DataTypeMember ServiceFault_members[1] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},};

/* PublishResponse */
static UA_DataTypeMember PublishResponse_members[7] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, subscriptionId) - offsetof(UA_PublishResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, availableSequenceNumbersSize) - offsetof(UA_PublishResponse, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AvailableSequenceNumbers") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, moreNotifications) - offsetof(UA_PublishResponse, availableSequenceNumbers) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MoreNotifications") /* .memberName */
},
{
    UA_TYPES_NOTIFICATIONMESSAGE, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, notificationMessage) - offsetof(UA_PublishResponse, moreNotifications) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NotificationMessage") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, resultsSize) - offsetof(UA_PublishResponse, notificationMessage) - sizeof(UA_NotificationMessage), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, diagnosticInfosSize) - offsetof(UA_PublishResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* CreateMonitoredItemsRequest */
static UA_DataTypeMember CreateMonitoredItemsRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, subscriptionId) - offsetof(UA_CreateMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, timestampsToReturn) - offsetof(UA_CreateMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TimestampsToReturn") /* .memberName */
},
{
    UA_TYPES_MONITOREDITEMCREATEREQUEST, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, itemsToCreateSize) - offsetof(UA_CreateMonitoredItemsRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ItemsToCreate") /* .memberName */
},};

/* OpenSecureChannelRequest */
static UA_DataTypeMember OpenSecureChannelRequest_members[6] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, clientProtocolVersion) - offsetof(UA_OpenSecureChannelRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientProtocolVersion") /* .memberName */
},
{
    UA_TYPES_SECURITYTOKENREQUESTTYPE, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, requestType) - offsetof(UA_OpenSecureChannelRequest, clientProtocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestType") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, securityMode) - offsetof(UA_OpenSecureChannelRequest, requestType) - sizeof(UA_SecurityTokenRequestType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, clientNonce) - offsetof(UA_OpenSecureChannelRequest, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientNonce") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, requestedLifetime) - offsetof(UA_OpenSecureChannelRequest, clientNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedLifetime") /* .memberName */
},};

/* CloseSessionRequest */
static UA_DataTypeMember CloseSessionRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CloseSessionRequest, deleteSubscriptions) - offsetof(UA_CloseSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeleteSubscriptions") /* .memberName */
},};

/* SetTriggeringRequest */
static UA_DataTypeMember SetTriggeringRequest_members[5] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, subscriptionId) - offsetof(UA_SetTriggeringRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, triggeringItemId) - offsetof(UA_SetTriggeringRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TriggeringItemId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, linksToAddSize) - offsetof(UA_SetTriggeringRequest, triggeringItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LinksToAdd") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, linksToRemoveSize) - offsetof(UA_SetTriggeringRequest, linksToAdd) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LinksToRemove") /* .memberName */
},};

/* EnumDescription */
static UA_DataTypeMember EnumDescription_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataTypeId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_EnumDescription, name) - offsetof(UA_EnumDescription, dataTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_ENUMDEFINITION, /* .memberTypeIndex */
    offsetof(UA_EnumDescription, enumDefinition) - offsetof(UA_EnumDescription, name) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EnumDefinition") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_EnumDescription, builtInType) - offsetof(UA_EnumDescription, enumDefinition) - sizeof(UA_EnumDefinition), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuiltInType") /* .memberName */
},};

/* BrowseResult */
static UA_DataTypeMember BrowseResult_members[3] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_BrowseResult, continuationPoint) - offsetof(UA_BrowseResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ContinuationPoint") /* .memberName */
},
{
    UA_TYPES_REFERENCEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseResult, referencesSize) - offsetof(UA_BrowseResult, continuationPoint) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("References") /* .memberName */
},};

/* AddReferencesRequest */
static UA_DataTypeMember AddReferencesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_ADDREFERENCESITEM, /* .memberTypeIndex */
    offsetof(UA_AddReferencesRequest, referencesToAddSize) - offsetof(UA_AddReferencesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferencesToAdd") /* .memberName */
},};

/* AddNodesItem */
static UA_DataTypeMember AddNodesItem_members[7] = {
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParentNodeId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, referenceTypeId) - offsetof(UA_AddNodesItem, parentNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, requestedNewNodeId) - offsetof(UA_AddNodesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedNewNodeId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, browseName) - offsetof(UA_AddNodesItem, requestedNewNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowseName") /* .memberName */
},
{
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, nodeClass) - offsetof(UA_AddNodesItem, browseName) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeClass") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, nodeAttributes) - offsetof(UA_AddNodesItem, nodeClass) - sizeof(UA_NodeClass), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeAttributes") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, typeDefinition) - offsetof(UA_AddNodesItem, nodeAttributes) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TypeDefinition") /* .memberName */
},};

/* ServerStatusDataType */
static UA_DataTypeMember ServerStatusDataType_members[6] = {
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartTime") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, currentTime) - offsetof(UA_ServerStatusDataType, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CurrentTime") /* .memberName */
},
{
    UA_TYPES_SERVERSTATE, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, state) - offsetof(UA_ServerStatusDataType, currentTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("State") /* .memberName */
},
{
    UA_TYPES_BUILDINFO, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, buildInfo) - offsetof(UA_ServerStatusDataType, state) - sizeof(UA_ServerState), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuildInfo") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, secondsTillShutdown) - offsetof(UA_ServerStatusDataType, buildInfo) - sizeof(UA_BuildInfo), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecondsTillShutdown") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, shutdownReason) - offsetof(UA_ServerStatusDataType, secondsTillShutdown) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ShutdownReason") /* .memberName */
},};

/* BrowseNextResponse */
static UA_DataTypeMember BrowseNextResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_BROWSERESULT, /* .memberTypeIndex */
    offsetof(UA_BrowseNextResponse, resultsSize) - offsetof(UA_BrowseNextResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_BrowseNextResponse, diagnosticInfosSize) - offsetof(UA_BrowseNextResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* AxisInformation */
static UA_DataTypeMember AxisInformation_members[5] = {
{
    UA_TYPES_EUINFORMATION, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EngineeringUnits") /* .memberName */
},
{
    UA_TYPES_RANGE, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, eURange) - offsetof(UA_AxisInformation, engineeringUnits) - sizeof(UA_EUInformation), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EURange") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, title) - offsetof(UA_AxisInformation, eURange) - sizeof(UA_Range), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Title") /* .memberName */
},
{
    UA_TYPES_AXISSCALEENUMERATION, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, axisScaleType) - offsetof(UA_AxisInformation, title) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AxisScaleType") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, axisStepsSize) - offsetof(UA_AxisInformation, axisScaleType) - sizeof(UA_AxisScaleEnumeration), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AxisSteps") /* .memberName */
},};

/* ApplicationDescription */
static UA_DataTypeMember ApplicationDescription_members[7] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ApplicationUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, productUri) - offsetof(UA_ApplicationDescription, applicationUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProductUri") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, applicationName) - offsetof(UA_ApplicationDescription, productUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ApplicationName") /* .memberName */
},
{
    UA_TYPES_APPLICATIONTYPE, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, applicationType) - offsetof(UA_ApplicationDescription, applicationName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ApplicationType") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, gatewayServerUri) - offsetof(UA_ApplicationDescription, applicationType) - sizeof(UA_ApplicationType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GatewayServerUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, discoveryProfileUri) - offsetof(UA_ApplicationDescription, gatewayServerUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscoveryProfileUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, discoveryUrlsSize) - offsetof(UA_ApplicationDescription, discoveryProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscoveryUrls") /* .memberName */
},};

/* StructureDescription */
static UA_DataTypeMember StructureDescription_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataTypeId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_StructureDescription, name) - offsetof(UA_StructureDescription, dataTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRUCTUREDEFINITION, /* .memberTypeIndex */
    offsetof(UA_StructureDescription, structureDefinition) - offsetof(UA_StructureDescription, name) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StructureDefinition") /* .memberName */
},};

/* ReadRequest */
static UA_DataTypeMember ReadRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, maxAge) - offsetof(UA_ReadRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxAge") /* .memberName */
},
{
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, timestampsToReturn) - offsetof(UA_ReadRequest, maxAge) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TimestampsToReturn") /* .memberName */
},
{
    UA_TYPES_READVALUEID, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, nodesToReadSize) - offsetof(UA_ReadRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToRead") /* .memberName */
},};

/* DataSetWriterDataType */
static UA_DataTypeMember DataSetWriterDataType_members[9] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, enabled) - offsetof(UA_DataSetWriterDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetWriterId) - offsetof(UA_DataSetWriterDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetWriterId") /* .memberName */
},
{
    UA_TYPES_DATASETFIELDCONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetFieldContentMask) - offsetof(UA_DataSetWriterDataType, dataSetWriterId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetFieldContentMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, keyFrameCount) - offsetof(UA_DataSetWriterDataType, dataSetFieldContentMask) - sizeof(UA_DataSetFieldContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("KeyFrameCount") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetName) - offsetof(UA_DataSetWriterDataType, keyFrameCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetName") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetWriterPropertiesSize) - offsetof(UA_DataSetWriterDataType, dataSetName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetWriterProperties") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, transportSettings) - offsetof(UA_DataSetWriterDataType, dataSetWriterProperties) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportSettings") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, messageSettings) - offsetof(UA_DataSetWriterDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageSettings") /* .memberName */
},};

/* ActivateSessionRequest */
static UA_DataTypeMember ActivateSessionRequest_members[6] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, clientSignature) - offsetof(UA_ActivateSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientSignature") /* .memberName */
},
{
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, clientSoftwareCertificatesSize) - offsetof(UA_ActivateSessionRequest, clientSignature) - sizeof(UA_SignatureData), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientSoftwareCertificates") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, localeIdsSize) - offsetof(UA_ActivateSessionRequest, clientSoftwareCertificates) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LocaleIds") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, userIdentityToken) - offsetof(UA_ActivateSessionRequest, localeIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserIdentityToken") /* .memberName */
},
{
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, userTokenSignature) - offsetof(UA_ActivateSessionRequest, userIdentityToken) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserTokenSignature") /* .memberName */
},};

/* BrowsePathResult */
static UA_DataTypeMember BrowsePathResult_members[2] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_BROWSEPATHTARGET, /* .memberTypeIndex */
    offsetof(UA_BrowsePathResult, targetsSize) - offsetof(UA_BrowsePathResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Targets") /* .memberName */
},};

/* AddNodesRequest */
static UA_DataTypeMember AddNodesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_ADDNODESITEM, /* .memberTypeIndex */
    offsetof(UA_AddNodesRequest, nodesToAddSize) - offsetof(UA_AddNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToAdd") /* .memberName */
},};

/* BrowseRequest */
static UA_DataTypeMember BrowseRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_VIEWDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, view) - offsetof(UA_BrowseRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("View") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, requestedMaxReferencesPerNode) - offsetof(UA_BrowseRequest, view) - sizeof(UA_ViewDescription), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedMaxReferencesPerNode") /* .memberName */
},
{
    UA_TYPES_BROWSEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, nodesToBrowseSize) - offsetof(UA_BrowseRequest, requestedMaxReferencesPerNode) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToBrowse") /* .memberName */
},};

/* WriteRequest */
static UA_DataTypeMember WriteRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_WRITEVALUE, /* .memberTypeIndex */
    offsetof(UA_WriteRequest, nodesToWriteSize) - offsetof(UA_WriteRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToWrite") /* .memberName */
},};

/* AddNodesResponse */
static UA_DataTypeMember AddNodesResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_ADDNODESRESULT, /* .memberTypeIndex */
    offsetof(UA_AddNodesResponse, resultsSize) - offsetof(UA_AddNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_AddNodesResponse, diagnosticInfosSize) - offsetof(UA_AddNodesResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* AttributeOperand */
static UA_DataTypeMember AttributeOperand_members[5] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, alias) - offsetof(UA_AttributeOperand, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Alias") /* .memberName */
},
{
    UA_TYPES_RELATIVEPATH, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, browsePath) - offsetof(UA_AttributeOperand, alias) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowsePath") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, attributeId) - offsetof(UA_AttributeOperand, browsePath) - sizeof(UA_RelativePath), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, indexRange) - offsetof(UA_AttributeOperand, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},};

/* DataChangeFilter */
static UA_DataTypeMember DataChangeFilter_members[3] = {
{
    UA_TYPES_DATACHANGETRIGGER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Trigger") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataChangeFilter, deadbandType) - offsetof(UA_DataChangeFilter, trigger) - sizeof(UA_DataChangeTrigger), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeadbandType") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DataChangeFilter, deadbandValue) - offsetof(UA_DataChangeFilter, deadbandType) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeadbandValue") /* .memberName */
},};

/* EndpointDescription */
static UA_DataTypeMember EndpointDescription_members[8] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrl") /* .memberName */
},
{
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, server) - offsetof(UA_EndpointDescription, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Server") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, serverCertificate) - offsetof(UA_EndpointDescription, server) - sizeof(UA_ApplicationDescription), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerCertificate") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityMode) - offsetof(UA_EndpointDescription, serverCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityPolicyUri) - offsetof(UA_EndpointDescription, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityPolicyUri") /* .memberName */
},
{
    UA_TYPES_USERTOKENPOLICY, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, userIdentityTokensSize) - offsetof(UA_EndpointDescription, securityPolicyUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserIdentityTokens") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, transportProfileUri) - offsetof(UA_EndpointDescription, userIdentityTokens) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportProfileUri") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityLevel) - offsetof(UA_EndpointDescription, transportProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityLevel") /* .memberName */
},};

/* DeleteReferencesRequest */
static UA_DataTypeMember DeleteReferencesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_DELETEREFERENCESITEM, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesRequest, referencesToDeleteSize) - offsetof(UA_DeleteReferencesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferencesToDelete") /* .memberName */
},};

/* JsonWriterGroupMessageDataType */
static UA_DataTypeMember JsonWriterGroupMessageDataType_members[1] = {
{
    UA_TYPES_JSONNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
},};

/* TranslateBrowsePathsToNodeIdsRequest */
static UA_DataTypeMember TranslateBrowsePathsToNodeIdsRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_BROWSEPATH, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsRequest, browsePathsSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowsePaths") /* .memberName */
},};

/* JsonDataSetReaderMessageDataType */
static UA_DataTypeMember JsonDataSetReaderMessageDataType_members[2] = {
{
    UA_TYPES_JSONNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
},
{
    UA_TYPES_JSONDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_JsonDataSetReaderMessageDataType, dataSetMessageContentMask) - offsetof(UA_JsonDataSetReaderMessageDataType, networkMessageContentMask) - sizeof(UA_JsonNetworkMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
},};

/* FindServersResponse */
static UA_DataTypeMember FindServersResponse_members[2] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_FindServersResponse, serversSize) - offsetof(UA_FindServersResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Servers") /* .memberName */
},};

/* CreateSessionRequest */
static UA_DataTypeMember CreateSessionRequest_members[9] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientDescription) - offsetof(UA_CreateSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientDescription") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, serverUri) - offsetof(UA_CreateSessionRequest, clientDescription) - sizeof(UA_ApplicationDescription), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, endpointUrl) - offsetof(UA_CreateSessionRequest, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrl") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, sessionName) - offsetof(UA_CreateSessionRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionName") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientNonce) - offsetof(UA_CreateSessionRequest, sessionName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientNonce") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientCertificate) - offsetof(UA_CreateSessionRequest, clientNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientCertificate") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, requestedSessionTimeout) - offsetof(UA_CreateSessionRequest, clientCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedSessionTimeout") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, maxResponseMessageSize) - offsetof(UA_CreateSessionRequest, requestedSessionTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxResponseMessageSize") /* .memberName */
},};

/* ContentFilterElement */
static UA_DataTypeMember ContentFilterElement_members[2] = {
{
    UA_TYPES_FILTEROPERATOR, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FilterOperator") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElement, filterOperandsSize) - offsetof(UA_ContentFilterElement, filterOperator) - sizeof(UA_FilterOperator), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FilterOperands") /* .memberName */
},};

/* UadpWriterGroupMessageDataType */
static UA_DataTypeMember UadpWriterGroupMessageDataType_members[5] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GroupVersion") /* .memberName */
},
{
    UA_TYPES_DATASETORDERINGTYPE, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, dataSetOrdering) - offsetof(UA_UadpWriterGroupMessageDataType, groupVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetOrdering") /* .memberName */
},
{
    UA_TYPES_UADPNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, networkMessageContentMask) - offsetof(UA_UadpWriterGroupMessageDataType, dataSetOrdering) - sizeof(UA_DataSetOrderingType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, samplingOffset) - offsetof(UA_UadpWriterGroupMessageDataType, networkMessageContentMask) - sizeof(UA_UadpNetworkMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SamplingOffset") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, publishingOffsetSize) - offsetof(UA_UadpWriterGroupMessageDataType, samplingOffset) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingOffset") /* .memberName */
},};

/* UABinaryFileDataType */
static UA_DataTypeMember UABinaryFileDataType_members[7] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Namespaces") /* .memberName */
},
{
    UA_TYPES_STRUCTUREDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, structureDataTypesSize) - offsetof(UA_UABinaryFileDataType, namespaces) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StructureDataTypes") /* .memberName */
},
{
    UA_TYPES_ENUMDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, enumDataTypesSize) - offsetof(UA_UABinaryFileDataType, structureDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EnumDataTypes") /* .memberName */
},
{
    UA_TYPES_SIMPLETYPEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, simpleDataTypesSize) - offsetof(UA_UABinaryFileDataType, enumDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SimpleDataTypes") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, schemaLocation) - offsetof(UA_UABinaryFileDataType, simpleDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SchemaLocation") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, fileHeaderSize) - offsetof(UA_UABinaryFileDataType, schemaLocation) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FileHeader") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, body) - offsetof(UA_UABinaryFileDataType, fileHeader) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Body") /* .memberName */
},};

/* TranslateBrowsePathsToNodeIdsResponse */
static UA_DataTypeMember TranslateBrowsePathsToNodeIdsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_BROWSEPATHRESULT, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, resultsSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, diagnosticInfosSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* BrowseResponse */
static UA_DataTypeMember BrowseResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_BROWSERESULT, /* .memberTypeIndex */
    offsetof(UA_BrowseResponse, resultsSize) - offsetof(UA_BrowseResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_BrowseResponse, diagnosticInfosSize) - offsetof(UA_BrowseResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* CreateSessionResponse */
static UA_DataTypeMember CreateSessionResponse_members[10] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, sessionId) - offsetof(UA_CreateSessionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, authenticationToken) - offsetof(UA_CreateSessionResponse, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationToken") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, revisedSessionTimeout) - offsetof(UA_CreateSessionResponse, authenticationToken) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedSessionTimeout") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverNonce) - offsetof(UA_CreateSessionResponse, revisedSessionTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerNonce") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverCertificate) - offsetof(UA_CreateSessionResponse, serverNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerCertificate") /* .memberName */
},
{
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverEndpointsSize) - offsetof(UA_CreateSessionResponse, serverCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerEndpoints") /* .memberName */
},
{
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverSoftwareCertificatesSize) - offsetof(UA_CreateSessionResponse, serverEndpoints) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerSoftwareCertificates") /* .memberName */
},
{
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverSignature) - offsetof(UA_CreateSessionResponse, serverSoftwareCertificates) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerSignature") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, maxRequestMessageSize) - offsetof(UA_CreateSessionResponse, serverSignature) - sizeof(UA_SignatureData), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxRequestMessageSize") /* .memberName */
},};

/* DataSetMetaDataType */
static UA_DataTypeMember DataSetMetaDataType_members[9] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Namespaces") /* .memberName */
},
{
    UA_TYPES_STRUCTUREDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, structureDataTypesSize) - offsetof(UA_DataSetMetaDataType, namespaces) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StructureDataTypes") /* .memberName */
},
{
    UA_TYPES_ENUMDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, enumDataTypesSize) - offsetof(UA_DataSetMetaDataType, structureDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EnumDataTypes") /* .memberName */
},
{
    UA_TYPES_SIMPLETYPEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, simpleDataTypesSize) - offsetof(UA_DataSetMetaDataType, enumDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SimpleDataTypes") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, name) - offsetof(UA_DataSetMetaDataType, simpleDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, description) - offsetof(UA_DataSetMetaDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_FIELDMETADATA, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, fieldsSize) - offsetof(UA_DataSetMetaDataType, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fields") /* .memberName */
},
{
    UA_TYPES_GUID, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, dataSetClassId) - offsetof(UA_DataSetMetaDataType, fields) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetClassId") /* .memberName */
},
{
    UA_TYPES_CONFIGURATIONVERSIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, configurationVersion) - offsetof(UA_DataSetMetaDataType, dataSetClassId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ConfigurationVersion") /* .memberName */
},};

/* ContentFilter */
static UA_DataTypeMember ContentFilter_members[1] = {
{
    UA_TYPES_CONTENTFILTERELEMENT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Elements") /* .memberName */
},};

/* WriterGroupDataType */
static UA_DataTypeMember WriterGroupDataType_members[16] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, enabled) - offsetof(UA_WriterGroupDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, securityMode) - offsetof(UA_WriterGroupDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, securityGroupId) - offsetof(UA_WriterGroupDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityGroupId") /* .memberName */
},
{
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, securityKeyServicesSize) - offsetof(UA_WriterGroupDataType, securityGroupId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityKeyServices") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, maxNetworkMessageSize) - offsetof(UA_WriterGroupDataType, securityKeyServices) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxNetworkMessageSize") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, groupPropertiesSize) - offsetof(UA_WriterGroupDataType, maxNetworkMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GroupProperties") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, writerGroupId) - offsetof(UA_WriterGroupDataType, groupProperties) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriterGroupId") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, publishingInterval) - offsetof(UA_WriterGroupDataType, writerGroupId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingInterval") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, keepAliveTime) - offsetof(UA_WriterGroupDataType, publishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("KeepAliveTime") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, priority) - offsetof(UA_WriterGroupDataType, keepAliveTime) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Priority") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, localeIdsSize) - offsetof(UA_WriterGroupDataType, priority) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LocaleIds") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, headerLayoutUri) - offsetof(UA_WriterGroupDataType, localeIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HeaderLayoutUri") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, transportSettings) - offsetof(UA_WriterGroupDataType, headerLayoutUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportSettings") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, messageSettings) - offsetof(UA_WriterGroupDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageSettings") /* .memberName */
},
{
    UA_TYPES_DATASETWRITERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, dataSetWritersSize) - offsetof(UA_WriterGroupDataType, messageSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetWriters") /* .memberName */
},};

/* GetEndpointsResponse */
static UA_DataTypeMember GetEndpointsResponse_members[2] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsResponse, endpointsSize) - offsetof(UA_GetEndpointsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Endpoints") /* .memberName */
},};

/* PublishedEventsDataType */
static UA_DataTypeMember PublishedEventsDataType_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventNotifier") /* .memberName */
},
{
    UA_TYPES_SIMPLEATTRIBUTEOPERAND, /* .memberTypeIndex */
    offsetof(UA_PublishedEventsDataType, selectedFieldsSize) - offsetof(UA_PublishedEventsDataType, eventNotifier) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SelectedFields") /* .memberName */
},
{
    UA_TYPES_CONTENTFILTER, /* .memberTypeIndex */
    offsetof(UA_PublishedEventsDataType, filter) - offsetof(UA_PublishedEventsDataType, selectedFields) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Filter") /* .memberName */
},};

/* EventFilter */
static UA_DataTypeMember EventFilter_members[2] = {
{
    UA_TYPES_SIMPLEATTRIBUTEOPERAND, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SelectClauses") /* .memberName */
},
{
    UA_TYPES_CONTENTFILTER, /* .memberTypeIndex */
    offsetof(UA_EventFilter, whereClause) - offsetof(UA_EventFilter, selectClauses) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WhereClause") /* .memberName */
},};

/* DataSetReaderDataType */
static UA_DataTypeMember DataSetReaderDataType_members[17] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, enabled) - offsetof(UA_DataSetReaderDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, publisherId) - offsetof(UA_DataSetReaderDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublisherId") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, writerGroupId) - offsetof(UA_DataSetReaderDataType, publisherId) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriterGroupId") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetWriterId) - offsetof(UA_DataSetReaderDataType, writerGroupId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetWriterId") /* .memberName */
},
{
    UA_TYPES_DATASETMETADATATYPE, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetMetaData) - offsetof(UA_DataSetReaderDataType, dataSetWriterId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMetaData") /* .memberName */
},
{
    UA_TYPES_DATASETFIELDCONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetFieldContentMask) - offsetof(UA_DataSetReaderDataType, dataSetMetaData) - sizeof(UA_DataSetMetaDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetFieldContentMask") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, messageReceiveTimeout) - offsetof(UA_DataSetReaderDataType, dataSetFieldContentMask) - sizeof(UA_DataSetFieldContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageReceiveTimeout") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, keyFrameCount) - offsetof(UA_DataSetReaderDataType, messageReceiveTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("KeyFrameCount") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, headerLayoutUri) - offsetof(UA_DataSetReaderDataType, keyFrameCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HeaderLayoutUri") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, securityMode) - offsetof(UA_DataSetReaderDataType, headerLayoutUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, securityGroupId) - offsetof(UA_DataSetReaderDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityGroupId") /* .memberName */
},
{
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, securityKeyServicesSize) - offsetof(UA_DataSetReaderDataType, securityGroupId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityKeyServices") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetReaderPropertiesSize) - offsetof(UA_DataSetReaderDataType, securityKeyServices) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetReaderProperties") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, transportSettings) - offsetof(UA_DataSetReaderDataType, dataSetReaderProperties) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportSettings") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, messageSettings) - offsetof(UA_DataSetReaderDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageSettings") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, subscribedDataSet) - offsetof(UA_DataSetReaderDataType, messageSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscribedDataSet") /* .memberName */
},};

/* PublishedDataSetDataType */
static UA_DataTypeMember PublishedDataSetDataType_members[5] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, dataSetFolderSize) - offsetof(UA_PublishedDataSetDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetFolder") /* .memberName */
},
{
    UA_TYPES_DATASETMETADATATYPE, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, dataSetMetaData) - offsetof(UA_PublishedDataSetDataType, dataSetFolder) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMetaData") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, extensionFieldsSize) - offsetof(UA_PublishedDataSetDataType, dataSetMetaData) - sizeof(UA_DataSetMetaDataType), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ExtensionFields") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, dataSetSource) - offsetof(UA_PublishedDataSetDataType, extensionFields) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetSource") /* .memberName */
},};

/* ReaderGroupDataType */
static UA_DataTypeMember ReaderGroupDataType_members[10] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, enabled) - offsetof(UA_ReaderGroupDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, securityMode) - offsetof(UA_ReaderGroupDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, securityGroupId) - offsetof(UA_ReaderGroupDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityGroupId") /* .memberName */
},
{
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, securityKeyServicesSize) - offsetof(UA_ReaderGroupDataType, securityGroupId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityKeyServices") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, maxNetworkMessageSize) - offsetof(UA_ReaderGroupDataType, securityKeyServices) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxNetworkMessageSize") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, groupPropertiesSize) - offsetof(UA_ReaderGroupDataType, maxNetworkMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GroupProperties") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, transportSettings) - offsetof(UA_ReaderGroupDataType, groupProperties) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportSettings") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, messageSettings) - offsetof(UA_ReaderGroupDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageSettings") /* .memberName */
},
{
    UA_TYPES_DATASETREADERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, dataSetReadersSize) - offsetof(UA_ReaderGroupDataType, messageSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetReaders") /* .memberName */
},};

/* PubSubConnectionDataType */
static UA_DataTypeMember PubSubConnectionDataType_members[9] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, enabled) - offsetof(UA_PubSubConnectionDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, publisherId) - offsetof(UA_PubSubConnectionDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublisherId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, transportProfileUri) - offsetof(UA_PubSubConnectionDataType, publisherId) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportProfileUri") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, address) - offsetof(UA_PubSubConnectionDataType, transportProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Address") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, connectionPropertiesSize) - offsetof(UA_PubSubConnectionDataType, address) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ConnectionProperties") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, transportSettings) - offsetof(UA_PubSubConnectionDataType, connectionProperties) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportSettings") /* .memberName */
},
{
    UA_TYPES_WRITERGROUPDATATYPE, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, writerGroupsSize) - offsetof(UA_PubSubConnectionDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriterGroups") /* .memberName */
},
{
    UA_TYPES_READERGROUPDATATYPE, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, readerGroupsSize) - offsetof(UA_PubSubConnectionDataType, writerGroups) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReaderGroups") /* .memberName */
},};

/* PubSubConfigurationDataType */
static UA_DataTypeMember PubSubConfigurationDataType_members[3] = {
{
    UA_TYPES_PUBLISHEDDATASETDATATYPE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishedDataSets") /* .memberName */
},
{
    UA_TYPES_PUBSUBCONNECTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_PubSubConfigurationDataType, connectionsSize) - offsetof(UA_PubSubConfigurationDataType, publishedDataSets) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Connections") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PubSubConfigurationDataType, enabled) - offsetof(UA_PubSubConfigurationDataType, connections) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},};
const UA_DataType UA_TYPES[UA_TYPES_COUNT] = {
/* Boolean */
{
    {0, UA_NODEIDTYPE_NUMERIC, {1LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Boolean), /* .memSize */
    UA_TYPES_BOOLEAN, /* .typeIndex */
    UA_DATATYPEKIND_BOOLEAN, /* .typeKind */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .membersSize */
    Boolean_members  /* .members */
    UA_TYPENAME("Boolean") /* .typeName */
},
/* SByte */
{
    {0, UA_NODEIDTYPE_NUMERIC, {2LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_SByte), /* .memSize */
    UA_TYPES_SBYTE, /* .typeIndex */
    UA_DATATYPEKIND_SBYTE, /* .typeKind */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .membersSize */
    SByte_members  /* .members */
    UA_TYPENAME("SByte") /* .typeName */
},
/* Byte */
{
    {0, UA_NODEIDTYPE_NUMERIC, {3LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Byte), /* .memSize */
    UA_TYPES_BYTE, /* .typeIndex */
    UA_DATATYPEKIND_BYTE, /* .typeKind */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .membersSize */
    Byte_members  /* .members */
    UA_TYPENAME("Byte") /* .typeName */
},
/* Int16 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {4LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Int16), /* .memSize */
    UA_TYPES_INT16, /* .typeIndex */
    UA_DATATYPEKIND_INT16, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    Int16_members  /* .members */
    UA_TYPENAME("Int16") /* .typeName */
},
/* UInt16 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {5LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UInt16), /* .memSize */
    UA_TYPES_UINT16, /* .typeIndex */
    UA_DATATYPEKIND_UINT16, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UInt16_members  /* .members */
    UA_TYPENAME("UInt16") /* .typeName */
},
/* Int32 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {6LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Int32), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_INT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    Int32_members  /* .members */
    UA_TYPENAME("Int32") /* .typeName */
},
/* UInt32 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {7LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UInt32), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UInt32_members  /* .members */
    UA_TYPENAME("UInt32") /* .typeName */
},
/* Int64 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {8LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Int64), /* .memSize */
    UA_TYPES_INT64, /* .typeIndex */
    UA_DATATYPEKIND_INT64, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    Int64_members  /* .members */
    UA_TYPENAME("Int64") /* .typeName */
},
/* UInt64 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {9LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UInt64), /* .memSize */
    UA_TYPES_UINT64, /* .typeIndex */
    UA_DATATYPEKIND_UINT64, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UInt64_members  /* .members */
    UA_TYPENAME("UInt64") /* .typeName */
},
/* Float */
{
    {0, UA_NODEIDTYPE_NUMERIC, {10LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Float), /* .memSize */
    UA_TYPES_FLOAT, /* .typeIndex */
    UA_DATATYPEKIND_FLOAT, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_FLOAT, /* .overlayable */
    0, /* .membersSize */
    Float_members  /* .members */
    UA_TYPENAME("Float") /* .typeName */
},
/* Double */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Double), /* .memSize */
    UA_TYPES_DOUBLE, /* .typeIndex */
    UA_DATATYPEKIND_DOUBLE, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_FLOAT, /* .overlayable */
    0, /* .membersSize */
    Double_members  /* .members */
    UA_TYPENAME("Double") /* .typeName */
},
/* String */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_String), /* .memSize */
    UA_TYPES_STRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    String_members  /* .members */
    UA_TYPENAME("String") /* .typeName */
},
/* DateTime */
{
    {0, UA_NODEIDTYPE_NUMERIC, {13LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DateTime), /* .memSize */
    UA_TYPES_DATETIME, /* .typeIndex */
    UA_DATATYPEKIND_DATETIME, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DateTime_members  /* .members */
    UA_TYPENAME("DateTime") /* .typeName */
},
/* Guid */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Guid), /* .memSize */
    UA_TYPES_GUID, /* .typeIndex */
    UA_DATATYPEKIND_GUID, /* .typeKind */
    true, /* .pointerFree */
    (UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_Guid, data2) == sizeof(UA_UInt32) && offsetof(UA_Guid, data3) == (sizeof(UA_UInt16) + sizeof(UA_UInt32)) && offsetof(UA_Guid, data4) == (2*sizeof(UA_UInt32))), /* .overlayable */
    0, /* .membersSize */
    Guid_members  /* .members */
    UA_TYPENAME("Guid") /* .typeName */
},
/* ByteString */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ByteString), /* .memSize */
    UA_TYPES_BYTESTRING, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ByteString_members  /* .members */
    UA_TYPENAME("ByteString") /* .typeName */
},
/* XmlElement */
{
    {0, UA_NODEIDTYPE_NUMERIC, {16LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_XmlElement), /* .memSize */
    UA_TYPES_XMLELEMENT, /* .typeIndex */
    UA_DATATYPEKIND_XMLELEMENT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    XmlElement_members  /* .members */
    UA_TYPENAME("XmlElement") /* .typeName */
},
/* NodeId */
{
    {0, UA_NODEIDTYPE_NUMERIC, {17LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_NodeId), /* .memSize */
    UA_TYPES_NODEID, /* .typeIndex */
    UA_DATATYPEKIND_NODEID, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    NodeId_members  /* .members */
    UA_TYPENAME("NodeId") /* .typeName */
},
/* ExpandedNodeId */
{
    {0, UA_NODEIDTYPE_NUMERIC, {18LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ExpandedNodeId), /* .memSize */
    UA_TYPES_EXPANDEDNODEID, /* .typeIndex */
    UA_DATATYPEKIND_EXPANDEDNODEID, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ExpandedNodeId_members  /* .members */
    UA_TYPENAME("ExpandedNodeId") /* .typeName */
},
/* StatusCode */
{
    {0, UA_NODEIDTYPE_NUMERIC, {19LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_StatusCode), /* .memSize */
    UA_TYPES_STATUSCODE, /* .typeIndex */
    UA_DATATYPEKIND_STATUSCODE, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    StatusCode_members  /* .members */
    UA_TYPENAME("StatusCode") /* .typeName */
},
/* QualifiedName */
{
    {0, UA_NODEIDTYPE_NUMERIC, {20LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_QualifiedName), /* .memSize */
    UA_TYPES_QUALIFIEDNAME, /* .typeIndex */
    UA_DATATYPEKIND_QUALIFIEDNAME, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    QualifiedName_members  /* .members */
    UA_TYPENAME("QualifiedName") /* .typeName */
},
/* LocalizedText */
{
    {0, UA_NODEIDTYPE_NUMERIC, {21LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_LocalizedText), /* .memSize */
    UA_TYPES_LOCALIZEDTEXT, /* .typeIndex */
    UA_DATATYPEKIND_LOCALIZEDTEXT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    LocalizedText_members  /* .members */
    UA_TYPENAME("LocalizedText") /* .typeName */
},
/* ExtensionObject */
{
    {0, UA_NODEIDTYPE_NUMERIC, {22LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ExtensionObject), /* .memSize */
    UA_TYPES_EXTENSIONOBJECT, /* .typeIndex */
    UA_DATATYPEKIND_EXTENSIONOBJECT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ExtensionObject_members  /* .members */
    UA_TYPENAME("ExtensionObject") /* .typeName */
},
/* DataValue */
{
    {0, UA_NODEIDTYPE_NUMERIC, {23LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DataValue), /* .memSize */
    UA_TYPES_DATAVALUE, /* .typeIndex */
    UA_DATATYPEKIND_DATAVALUE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DataValue_members  /* .members */
    UA_TYPENAME("DataValue") /* .typeName */
},
/* Variant */
{
    {0, UA_NODEIDTYPE_NUMERIC, {24LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Variant), /* .memSize */
    UA_TYPES_VARIANT, /* .typeIndex */
    UA_DATATYPEKIND_VARIANT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Variant_members  /* .members */
    UA_TYPENAME("Variant") /* .typeName */
},
/* DiagnosticInfo */
{
    {0, UA_NODEIDTYPE_NUMERIC, {25LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DiagnosticInfo), /* .memSize */
    UA_TYPES_DIAGNOSTICINFO, /* .typeIndex */
    UA_DATATYPEKIND_DIAGNOSTICINFO, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DiagnosticInfo_members  /* .members */
    UA_TYPENAME("DiagnosticInfo") /* .typeName */
},
/* ViewAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {373LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {375LU}}, /* .binaryEncodingId */
    sizeof(UA_ViewAttributes), /* .memSize */
    UA_TYPES_VIEWATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    ViewAttributes_members  /* .members */
    UA_TYPENAME("ViewAttributes") /* .typeName */
},
/* UadpNetworkMessageContentMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15642LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UadpNetworkMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UadpNetworkMessageContentMask_members  /* .members */
    UA_TYPENAME("UadpNetworkMessageContentMask") /* .typeName */
},
/* XVType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12080LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12090LU}}, /* .binaryEncodingId */
    sizeof(UA_XVType), /* .memSize */
    UA_TYPES_XVTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    XVType_members  /* .members */
    UA_TYPENAME("XVType") /* .typeName */
},
/* ElementOperand */
{
    {0, UA_NODEIDTYPE_NUMERIC, {592LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {594LU}}, /* .binaryEncodingId */
    sizeof(UA_ElementOperand), /* .memSize */
    UA_TYPES_ELEMENTOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    ElementOperand_members  /* .members */
    UA_TYPENAME("ElementOperand") /* .typeName */
},
/* VariableAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {355LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {357LU}}, /* .binaryEncodingId */
    sizeof(UA_VariableAttributes), /* .memSize */
    UA_TYPES_VARIABLEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    13, /* .membersSize */
    VariableAttributes_members  /* .members */
    UA_TYPENAME("VariableAttributes") /* .typeName */
},
/* EnumValueType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {7594LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {8251LU}}, /* .binaryEncodingId */
    sizeof(UA_EnumValueType), /* .memSize */
    UA_TYPES_ENUMVALUETYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    EnumValueType_members  /* .members */
    UA_TYPENAME("EnumValueType") /* .typeName */
},
/* BrokerConnectionTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15007LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15479LU}}, /* .binaryEncodingId */
    sizeof(UA_BrokerConnectionTransportDataType), /* .memSize */
    UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    BrokerConnectionTransportDataType_members  /* .members */
    UA_TYPENAME("BrokerConnectionTransportDataType") /* .typeName */
},
/* EventFieldList */
{
    {0, UA_NODEIDTYPE_NUMERIC, {917LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {919LU}}, /* .binaryEncodingId */
    sizeof(UA_EventFieldList), /* .memSize */
    UA_TYPES_EVENTFIELDLIST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    EventFieldList_members  /* .members */
    UA_TYPENAME("EventFieldList") /* .typeName */
},
/* MonitoredItemCreateResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {746LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {748LU}}, /* .binaryEncodingId */
    sizeof(UA_MonitoredItemCreateResult), /* .memSize */
    UA_TYPES_MONITOREDITEMCREATERESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    MonitoredItemCreateResult_members  /* .members */
    UA_TYPENAME("MonitoredItemCreateResult") /* .typeName */
},
/* EUInformation */
{
    {0, UA_NODEIDTYPE_NUMERIC, {887LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {889LU}}, /* .binaryEncodingId */
    sizeof(UA_EUInformation), /* .memSize */
    UA_TYPES_EUINFORMATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    EUInformation_members  /* .members */
    UA_TYPENAME("EUInformation") /* .typeName */
},
/* ServerDiagnosticsSummaryDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {859LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {861LU}}, /* .binaryEncodingId */
    sizeof(UA_ServerDiagnosticsSummaryDataType), /* .memSize */
    UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    12, /* .membersSize */
    ServerDiagnosticsSummaryDataType_members  /* .members */
    UA_TYPENAME("ServerDiagnosticsSummaryDataType") /* .typeName */
},
/* ContentFilterElementResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {604LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {606LU}}, /* .binaryEncodingId */
    sizeof(UA_ContentFilterElementResult), /* .memSize */
    UA_TYPES_CONTENTFILTERELEMENTRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ContentFilterElementResult_members  /* .members */
    UA_TYPENAME("ContentFilterElementResult") /* .typeName */
},
/* LiteralOperand */
{
    {0, UA_NODEIDTYPE_NUMERIC, {595LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {597LU}}, /* .binaryEncodingId */
    sizeof(UA_LiteralOperand), /* .memSize */
    UA_TYPES_LITERALOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    LiteralOperand_members  /* .members */
    UA_TYPENAME("LiteralOperand") /* .typeName */
},
/* UadpDataSetMessageContentMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15646LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UadpDataSetMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UadpDataSetMessageContentMask_members  /* .members */
    UA_TYPENAME("UadpDataSetMessageContentMask") /* .typeName */
},
/* MessageSecurityMode */
{
    {0, UA_NODEIDTYPE_NUMERIC, {302LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_MessageSecurityMode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    MessageSecurityMode_members  /* .members */
    UA_TYPENAME("MessageSecurityMode") /* .typeName */
},
/* UtcTime */
{
    {0, UA_NODEIDTYPE_NUMERIC, {294LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UtcTime), /* .memSize */
    UA_TYPES_UTCTIME, /* .typeIndex */
    UA_DATATYPEKIND_DATETIME, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    UtcTime_members  /* .members */
    UA_TYPENAME("UtcTime") /* .typeName */
},
/* UserIdentityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {316LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {318LU}}, /* .binaryEncodingId */
    sizeof(UA_UserIdentityToken), /* .memSize */
    UA_TYPES_USERIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    UserIdentityToken_members  /* .members */
    UA_TYPENAME("UserIdentityToken") /* .typeName */
},
/* X509IdentityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {325LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {327LU}}, /* .binaryEncodingId */
    sizeof(UA_X509IdentityToken), /* .memSize */
    UA_TYPES_X509IDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    X509IdentityToken_members  /* .members */
    UA_TYPENAME("X509IdentityToken") /* .typeName */
},
/* MonitoredItemNotification */
{
    {0, UA_NODEIDTYPE_NUMERIC, {806LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {808LU}}, /* .binaryEncodingId */
    sizeof(UA_MonitoredItemNotification), /* .memSize */
    UA_TYPES_MONITOREDITEMNOTIFICATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    MonitoredItemNotification_members  /* .members */
    UA_TYPENAME("MonitoredItemNotification") /* .typeName */
},
/* StructureType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {98LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_StructureType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    StructureType_members  /* .members */
    UA_TYPENAME("StructureType") /* .typeName */
},
/* ResponseHeader */
{
    {0, UA_NODEIDTYPE_NUMERIC, {392LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {394LU}}, /* .binaryEncodingId */
    sizeof(UA_ResponseHeader), /* .memSize */
    UA_TYPES_RESPONSEHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    ResponseHeader_members  /* .members */
    UA_TYPENAME("ResponseHeader") /* .typeName */
},
/* SignatureData */
{
    {0, UA_NODEIDTYPE_NUMERIC, {456LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {458LU}}, /* .binaryEncodingId */
    sizeof(UA_SignatureData), /* .memSize */
    UA_TYPES_SIGNATUREDATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SignatureData_members  /* .members */
    UA_TYPENAME("SignatureData") /* .typeName */
},
/* NetworkAddressUrlDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15510LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21152LU}}, /* .binaryEncodingId */
    sizeof(UA_NetworkAddressUrlDataType), /* .memSize */
    UA_TYPES_NETWORKADDRESSURLDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    NetworkAddressUrlDataType_members  /* .members */
    UA_TYPENAME("NetworkAddressUrlDataType") /* .typeName */
},
/* ModifySubscriptionResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {794LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {796LU}}, /* .binaryEncodingId */
    sizeof(UA_ModifySubscriptionResponse), /* .memSize */
    UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ModifySubscriptionResponse_members  /* .members */
    UA_TYPENAME("ModifySubscriptionResponse") /* .typeName */
},
/* NodeAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {349LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {351LU}}, /* .binaryEncodingId */
    sizeof(UA_NodeAttributes), /* .memSize */
    UA_TYPES_NODEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    NodeAttributes_members  /* .members */
    UA_TYPENAME("NodeAttributes") /* .typeName */
},
/* ActivateSessionResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {468LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {470LU}}, /* .binaryEncodingId */
    sizeof(UA_ActivateSessionResponse), /* .memSize */
    UA_TYPES_ACTIVATESESSIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ActivateSessionResponse_members  /* .members */
    UA_TYPENAME("ActivateSessionResponse") /* .typeName */
},
/* EnumField */
{
    {0, UA_NODEIDTYPE_NUMERIC, {102LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14845LU}}, /* .binaryEncodingId */
    sizeof(UA_EnumField), /* .memSize */
    UA_TYPES_ENUMFIELD, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    EnumField_members  /* .members */
    UA_TYPENAME("EnumField") /* .typeName */
},
/* VariableTypeAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {364LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {366LU}}, /* .binaryEncodingId */
    sizeof(UA_VariableTypeAttributes), /* .memSize */
    UA_TYPES_VARIABLETYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    VariableTypeAttributes_members  /* .members */
    UA_TYPENAME("VariableTypeAttributes") /* .typeName */
},
/* CallMethodResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {707LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {709LU}}, /* .binaryEncodingId */
    sizeof(UA_CallMethodResult), /* .memSize */
    UA_TYPES_CALLMETHODRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CallMethodResult_members  /* .members */
    UA_TYPENAME("CallMethodResult") /* .typeName */
},
/* MonitoringMode */
{
    {0, UA_NODEIDTYPE_NUMERIC, {716LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_MonitoringMode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    MonitoringMode_members  /* .members */
    UA_TYPENAME("MonitoringMode") /* .typeName */
},
/* SetMonitoringModeResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {770LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {772LU}}, /* .binaryEncodingId */
    sizeof(UA_SetMonitoringModeResponse), /* .memSize */
    UA_TYPES_SETMONITORINGMODERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    SetMonitoringModeResponse_members  /* .members */
    UA_TYPENAME("SetMonitoringModeResponse") /* .typeName */
},
/* BrowseResultMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {517LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_BrowseResultMask), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    BrowseResultMask_members  /* .members */
    UA_TYPENAME("BrowseResultMask") /* .typeName */
},
/* RequestHeader */
{
    {0, UA_NODEIDTYPE_NUMERIC, {389LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {391LU}}, /* .binaryEncodingId */
    sizeof(UA_RequestHeader), /* .memSize */
    UA_TYPES_REQUESTHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    RequestHeader_members  /* .members */
    UA_TYPENAME("RequestHeader") /* .typeName */
},
/* MonitoredItemModifyResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {758LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {760LU}}, /* .binaryEncodingId */
    sizeof(UA_MonitoredItemModifyResult), /* .memSize */
    UA_TYPES_MONITOREDITEMMODIFYRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    MonitoredItemModifyResult_members  /* .members */
    UA_TYPENAME("MonitoredItemModifyResult") /* .typeName */
},
/* CloseSecureChannelRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {450LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {452LU}}, /* .binaryEncodingId */
    sizeof(UA_CloseSecureChannelRequest), /* .memSize */
    UA_TYPES_CLOSESECURECHANNELREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    CloseSecureChannelRequest_members  /* .members */
    UA_TYPENAME("CloseSecureChannelRequest") /* .typeName */
},
/* NotificationMessage */
{
    {0, UA_NODEIDTYPE_NUMERIC, {803LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {805LU}}, /* .binaryEncodingId */
    sizeof(UA_NotificationMessage), /* .memSize */
    UA_TYPES_NOTIFICATIONMESSAGE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    NotificationMessage_members  /* .members */
    UA_TYPENAME("NotificationMessage") /* .typeName */
},
/* CreateSubscriptionResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {788LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {790LU}}, /* .binaryEncodingId */
    sizeof(UA_CreateSubscriptionResponse), /* .memSize */
    UA_TYPES_CREATESUBSCRIPTIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CreateSubscriptionResponse_members  /* .members */
    UA_TYPENAME("CreateSubscriptionResponse") /* .typeName */
},
/* BrokerTransportQualityOfService */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15008LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_BrokerTransportQualityOfService), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    BrokerTransportQualityOfService_members  /* .members */
    UA_TYPENAME("BrokerTransportQualityOfService") /* .typeName */
},
/* EnumDefinition */
{
    {0, UA_NODEIDTYPE_NUMERIC, {100LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {123LU}}, /* .binaryEncodingId */
    sizeof(UA_EnumDefinition), /* .memSize */
    UA_TYPES_ENUMDEFINITION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    EnumDefinition_members  /* .members */
    UA_TYPENAME("EnumDefinition") /* .typeName */
},
/* AxisScaleEnumeration */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12077LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_AxisScaleEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    AxisScaleEnumeration_members  /* .members */
    UA_TYPENAME("AxisScaleEnumeration") /* .typeName */
},
/* BrowseDirection */
{
    {0, UA_NODEIDTYPE_NUMERIC, {510LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_BrowseDirection), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    BrowseDirection_members  /* .members */
    UA_TYPENAME("BrowseDirection") /* .typeName */
},
/* CallMethodRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {704LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {706LU}}, /* .binaryEncodingId */
    sizeof(UA_CallMethodRequest), /* .memSize */
    UA_TYPES_CALLMETHODREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CallMethodRequest_members  /* .members */
    UA_TYPENAME("CallMethodRequest") /* .typeName */
},
/* ReadResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {632LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {634LU}}, /* .binaryEncodingId */
    sizeof(UA_ReadResponse), /* .memSize */
    UA_TYPES_READRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ReadResponse_members  /* .members */
    UA_TYPENAME("ReadResponse") /* .typeName */
},
/* PermissionType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {94LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_PermissionType), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    PermissionType_members  /* .members */
    UA_TYPENAME("PermissionType") /* .typeName */
},
/* TimestampsToReturn */
{
    {0, UA_NODEIDTYPE_NUMERIC, {625LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_TimestampsToReturn), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    TimestampsToReturn_members  /* .members */
    UA_TYPENAME("TimestampsToReturn") /* .typeName */
},
/* NodeClass */
{
    {0, UA_NODEIDTYPE_NUMERIC, {257LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_NodeClass), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    NodeClass_members  /* .members */
    UA_TYPENAME("NodeClass") /* .typeName */
},
/* ObjectTypeAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {361LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {363LU}}, /* .binaryEncodingId */
    sizeof(UA_ObjectTypeAttributes), /* .memSize */
    UA_TYPES_OBJECTTYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    ObjectTypeAttributes_members  /* .members */
    UA_TYPENAME("ObjectTypeAttributes") /* .typeName */
},
/* SecurityTokenRequestType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {315LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_SecurityTokenRequestType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    SecurityTokenRequestType_members  /* .members */
    UA_TYPENAME("SecurityTokenRequestType") /* .typeName */
},
/* CloseSessionResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {474LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {476LU}}, /* .binaryEncodingId */
    sizeof(UA_CloseSessionResponse), /* .memSize */
    UA_TYPES_CLOSESESSIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    CloseSessionResponse_members  /* .members */
    UA_TYPENAME("CloseSessionResponse") /* .typeName */
},
/* SetPublishingModeRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {797LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {799LU}}, /* .binaryEncodingId */
    sizeof(UA_SetPublishingModeRequest), /* .memSize */
    UA_TYPES_SETPUBLISHINGMODEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    SetPublishingModeRequest_members  /* .members */
    UA_TYPENAME("SetPublishingModeRequest") /* .typeName */
},
/* IssuedIdentityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {938LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {940LU}}, /* .binaryEncodingId */
    sizeof(UA_IssuedIdentityToken), /* .memSize */
    UA_TYPES_ISSUEDIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    IssuedIdentityToken_members  /* .members */
    UA_TYPENAME("IssuedIdentityToken") /* .typeName */
},
/* DeleteMonitoredItemsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {782LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {784LU}}, /* .binaryEncodingId */
    sizeof(UA_DeleteMonitoredItemsResponse), /* .memSize */
    UA_TYPES_DELETEMONITOREDITEMSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DeleteMonitoredItemsResponse_members  /* .members */
    UA_TYPENAME("DeleteMonitoredItemsResponse") /* .typeName */
},
/* DatagramConnectionTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {17467LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {17468LU}}, /* .binaryEncodingId */
    sizeof(UA_DatagramConnectionTransportDataType), /* .memSize */
    UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    DatagramConnectionTransportDataType_members  /* .members */
    UA_TYPENAME("DatagramConnectionTransportDataType") /* .typeName */
},
/* ApplicationType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {307LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ApplicationType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    ApplicationType_members  /* .members */
    UA_TYPENAME("ApplicationType") /* .typeName */
},
/* BrowseNextRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {531LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {533LU}}, /* .binaryEncodingId */
    sizeof(UA_BrowseNextRequest), /* .memSize */
    UA_TYPES_BROWSENEXTREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    BrowseNextRequest_members  /* .members */
    UA_TYPENAME("BrowseNextRequest") /* .typeName */
},
/* ModifySubscriptionRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {791LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {793LU}}, /* .binaryEncodingId */
    sizeof(UA_ModifySubscriptionRequest), /* .memSize */
    UA_TYPES_MODIFYSUBSCRIPTIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    ModifySubscriptionRequest_members  /* .members */
    UA_TYPENAME("ModifySubscriptionRequest") /* .typeName */
},
/* BrowseDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {514LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {516LU}}, /* .binaryEncodingId */
    sizeof(UA_BrowseDescription), /* .memSize */
    UA_TYPES_BROWSEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    BrowseDescription_members  /* .members */
    UA_TYPENAME("BrowseDescription") /* .typeName */
},
/* SignedSoftwareCertificate */
{
    {0, UA_NODEIDTYPE_NUMERIC, {344LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {346LU}}, /* .binaryEncodingId */
    sizeof(UA_SignedSoftwareCertificate), /* .memSize */
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SignedSoftwareCertificate_members  /* .members */
    UA_TYPENAME("SignedSoftwareCertificate") /* .typeName */
},
/* BrowsePathTarget */
{
    {0, UA_NODEIDTYPE_NUMERIC, {546LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {548LU}}, /* .binaryEncodingId */
    sizeof(UA_BrowsePathTarget), /* .memSize */
    UA_TYPES_BROWSEPATHTARGET, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    BrowsePathTarget_members  /* .members */
    UA_TYPENAME("BrowsePathTarget") /* .typeName */
},
/* WriteResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {674LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {676LU}}, /* .binaryEncodingId */
    sizeof(UA_WriteResponse), /* .memSize */
    UA_TYPES_WRITERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    WriteResponse_members  /* .members */
    UA_TYPENAME("WriteResponse") /* .typeName */
},
/* AddNodesResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {483LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {485LU}}, /* .binaryEncodingId */
    sizeof(UA_AddNodesResult), /* .memSize */
    UA_TYPES_ADDNODESRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    AddNodesResult_members  /* .members */
    UA_TYPENAME("AddNodesResult") /* .typeName */
},
/* UadpDataSetReaderMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15653LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15718LU}}, /* .binaryEncodingId */
    sizeof(UA_UadpDataSetReaderMessageDataType), /* .memSize */
    UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    UadpDataSetReaderMessageDataType_members  /* .members */
    UA_TYPENAME("UadpDataSetReaderMessageDataType") /* .typeName */
},
/* AddReferencesItem */
{
    {0, UA_NODEIDTYPE_NUMERIC, {379LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {381LU}}, /* .binaryEncodingId */
    sizeof(UA_AddReferencesItem), /* .memSize */
    UA_TYPES_ADDREFERENCESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    AddReferencesItem_members  /* .members */
    UA_TYPENAME("AddReferencesItem") /* .typeName */
},
/* DeleteReferencesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {507LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {509LU}}, /* .binaryEncodingId */
    sizeof(UA_DeleteReferencesResponse), /* .memSize */
    UA_TYPES_DELETEREFERENCESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DeleteReferencesResponse_members  /* .members */
    UA_TYPENAME("DeleteReferencesResponse") /* .typeName */
},
/* RelativePathElement */
{
    {0, UA_NODEIDTYPE_NUMERIC, {537LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {539LU}}, /* .binaryEncodingId */
    sizeof(UA_RelativePathElement), /* .memSize */
    UA_TYPES_RELATIVEPATHELEMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    RelativePathElement_members  /* .members */
    UA_TYPENAME("RelativePathElement") /* .typeName */
},
/* SubscriptionAcknowledgement */
{
    {0, UA_NODEIDTYPE_NUMERIC, {821LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {823LU}}, /* .binaryEncodingId */
    sizeof(UA_SubscriptionAcknowledgement), /* .memSize */
    UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SubscriptionAcknowledgement_members  /* .members */
    UA_TYPENAME("SubscriptionAcknowledgement") /* .typeName */
},
/* ConfigurationVersionDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14593LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14847LU}}, /* .binaryEncodingId */
    sizeof(UA_ConfigurationVersionDataType), /* .memSize */
    UA_TYPES_CONFIGURATIONVERSIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ConfigurationVersionDataType_members  /* .members */
    UA_TYPENAME("ConfigurationVersionDataType") /* .typeName */
},
/* DataSetFieldContentMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15583LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DataSetFieldContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DataSetFieldContentMask_members  /* .members */
    UA_TYPENAME("DataSetFieldContentMask") /* .typeName */
},
/* TransferResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {836LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {838LU}}, /* .binaryEncodingId */
    sizeof(UA_TransferResult), /* .memSize */
    UA_TYPES_TRANSFERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    TransferResult_members  /* .members */
    UA_TYPENAME("TransferResult") /* .typeName */
},
/* PublishedVariableDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14273LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14323LU}}, /* .binaryEncodingId */
    sizeof(UA_PublishedVariableDataType), /* .memSize */
    UA_TYPES_PUBLISHEDVARIABLEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    PublishedVariableDataType_members  /* .members */
    UA_TYPENAME("PublishedVariableDataType") /* .typeName */
},
/* CreateMonitoredItemsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {752LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {754LU}}, /* .binaryEncodingId */
    sizeof(UA_CreateMonitoredItemsResponse), /* .memSize */
    UA_TYPES_CREATEMONITOREDITEMSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CreateMonitoredItemsResponse_members  /* .members */
    UA_TYPENAME("CreateMonitoredItemsResponse") /* .typeName */
},
/* RolePermissionType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {96LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {128LU}}, /* .binaryEncodingId */
    sizeof(UA_RolePermissionType), /* .memSize */
    UA_TYPES_ROLEPERMISSIONTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    RolePermissionType_members  /* .members */
    UA_TYPENAME("RolePermissionType") /* .typeName */
},
/* OverrideValueHandling */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15874LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_OverrideValueHandling), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    OverrideValueHandling_members  /* .members */
    UA_TYPENAME("OverrideValueHandling") /* .typeName */
},
/* DeleteReferencesItem */
{
    {0, UA_NODEIDTYPE_NUMERIC, {385LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {387LU}}, /* .binaryEncodingId */
    sizeof(UA_DeleteReferencesItem), /* .memSize */
    UA_TYPES_DELETEREFERENCESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    DeleteReferencesItem_members  /* .members */
    UA_TYPENAME("DeleteReferencesItem") /* .typeName */
},
/* WriteValue */
{
    {0, UA_NODEIDTYPE_NUMERIC, {668LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {670LU}}, /* .binaryEncodingId */
    sizeof(UA_WriteValue), /* .memSize */
    UA_TYPES_WRITEVALUE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    WriteValue_members  /* .members */
    UA_TYPENAME("WriteValue") /* .typeName */
},
/* DataTypeAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {370LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {372LU}}, /* .binaryEncodingId */
    sizeof(UA_DataTypeAttributes), /* .memSize */
    UA_TYPES_DATATYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    DataTypeAttributes_members  /* .members */
    UA_TYPENAME("DataTypeAttributes") /* .typeName */
},
/* TransferSubscriptionsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {842LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {844LU}}, /* .binaryEncodingId */
    sizeof(UA_TransferSubscriptionsResponse), /* .memSize */
    UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    TransferSubscriptionsResponse_members  /* .members */
    UA_TYPENAME("TransferSubscriptionsResponse") /* .typeName */
},
/* AddReferencesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {495LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {497LU}}, /* .binaryEncodingId */
    sizeof(UA_AddReferencesResponse), /* .memSize */
    UA_TYPES_ADDREFERENCESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    AddReferencesResponse_members  /* .members */
    UA_TYPENAME("AddReferencesResponse") /* .typeName */
},
/* DeadbandType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {718LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DeadbandType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DeadbandType_members  /* .members */
    UA_TYPENAME("DeadbandType") /* .typeName */
},
/* DataChangeTrigger */
{
    {0, UA_NODEIDTYPE_NUMERIC, {717LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DataChangeTrigger), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DataChangeTrigger_members  /* .members */
    UA_TYPENAME("DataChangeTrigger") /* .typeName */
},
/* BuildInfo */
{
    {0, UA_NODEIDTYPE_NUMERIC, {338LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {340LU}}, /* .binaryEncodingId */
    sizeof(UA_BuildInfo), /* .memSize */
    UA_TYPES_BUILDINFO, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    BuildInfo_members  /* .members */
    UA_TYPENAME("BuildInfo") /* .typeName */
},
/* FilterOperand */
{
    {0, UA_NODEIDTYPE_NUMERIC, {589LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {591LU}}, /* .binaryEncodingId */
    sizeof(UA_FilterOperand), /* .memSize */
    UA_TYPES_FILTEROPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    FilterOperand_members  /* .members */
    UA_TYPENAME("FilterOperand") /* .typeName */
},
/* MonitoringParameters */
{
    {0, UA_NODEIDTYPE_NUMERIC, {740LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {742LU}}, /* .binaryEncodingId */
    sizeof(UA_MonitoringParameters), /* .memSize */
    UA_TYPES_MONITORINGPARAMETERS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    MonitoringParameters_members  /* .members */
    UA_TYPENAME("MonitoringParameters") /* .typeName */
},
/* DoubleComplexNumberType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12172LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12182LU}}, /* .binaryEncodingId */
    sizeof(UA_DoubleComplexNumberType), /* .memSize */
    UA_TYPES_DOUBLECOMPLEXNUMBERTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DoubleComplexNumberType_members  /* .members */
    UA_TYPENAME("DoubleComplexNumberType") /* .typeName */
},
/* DeleteNodesItem */
{
    {0, UA_NODEIDTYPE_NUMERIC, {382LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {384LU}}, /* .binaryEncodingId */
    sizeof(UA_DeleteNodesItem), /* .memSize */
    UA_TYPES_DELETENODESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DeleteNodesItem_members  /* .members */
    UA_TYPENAME("DeleteNodesItem") /* .typeName */
},
/* DatagramWriterGroupTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15532LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21155LU}}, /* .binaryEncodingId */
    sizeof(UA_DatagramWriterGroupTransportDataType), /* .memSize */
    UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DatagramWriterGroupTransportDataType_members  /* .members */
    UA_TYPENAME("DatagramWriterGroupTransportDataType") /* .typeName */
},
/* ReadValueId */
{
    {0, UA_NODEIDTYPE_NUMERIC, {626LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {628LU}}, /* .binaryEncodingId */
    sizeof(UA_ReadValueId), /* .memSize */
    UA_TYPES_READVALUEID, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ReadValueId_members  /* .members */
    UA_TYPENAME("ReadValueId") /* .typeName */
},
/* CallRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {710LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {712LU}}, /* .binaryEncodingId */
    sizeof(UA_CallRequest), /* .memSize */
    UA_TYPES_CALLREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CallRequest_members  /* .members */
    UA_TYPENAME("CallRequest") /* .typeName */
},
/* RelativePath */
{
    {0, UA_NODEIDTYPE_NUMERIC, {540LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {542LU}}, /* .binaryEncodingId */
    sizeof(UA_RelativePath), /* .memSize */
    UA_TYPES_RELATIVEPATH, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    RelativePath_members  /* .members */
    UA_TYPENAME("RelativePath") /* .typeName */
},
/* DeleteNodesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {498LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {500LU}}, /* .binaryEncodingId */
    sizeof(UA_DeleteNodesRequest), /* .memSize */
    UA_TYPES_DELETENODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DeleteNodesRequest_members  /* .members */
    UA_TYPENAME("DeleteNodesRequest") /* .typeName */
},
/* BrokerDataSetWriterTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15669LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15729LU}}, /* .binaryEncodingId */
    sizeof(UA_BrokerDataSetWriterTransportDataType), /* .memSize */
    UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    BrokerDataSetWriterTransportDataType_members  /* .members */
    UA_TYPENAME("BrokerDataSetWriterTransportDataType") /* .typeName */
},
/* MonitoredItemModifyRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {755LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {757LU}}, /* .binaryEncodingId */
    sizeof(UA_MonitoredItemModifyRequest), /* .memSize */
    UA_TYPES_MONITOREDITEMMODIFYREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    MonitoredItemModifyRequest_members  /* .members */
    UA_TYPENAME("MonitoredItemModifyRequest") /* .typeName */
},
/* UserTokenType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {303LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UserTokenType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UserTokenType_members  /* .members */
    UA_TYPENAME("UserTokenType") /* .typeName */
},
/* AggregateConfiguration */
{
    {0, UA_NODEIDTYPE_NUMERIC, {948LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {950LU}}, /* .binaryEncodingId */
    sizeof(UA_AggregateConfiguration), /* .memSize */
    UA_TYPES_AGGREGATECONFIGURATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    AggregateConfiguration_members  /* .members */
    UA_TYPENAME("AggregateConfiguration") /* .typeName */
},
/* LocaleId */
{
    {0, UA_NODEIDTYPE_NUMERIC, {295LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_LocaleId), /* .memSize */
    UA_TYPES_LOCALEID, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    LocaleId_members  /* .members */
    UA_TYPENAME("LocaleId") /* .typeName */
},
/* UnregisterNodesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {567LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {569LU}}, /* .binaryEncodingId */
    sizeof(UA_UnregisterNodesResponse), /* .memSize */
    UA_TYPES_UNREGISTERNODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    UnregisterNodesResponse_members  /* .members */
    UA_TYPENAME("UnregisterNodesResponse") /* .typeName */
},
/* ContentFilterResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {607LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {609LU}}, /* .binaryEncodingId */
    sizeof(UA_ContentFilterResult), /* .memSize */
    UA_TYPES_CONTENTFILTERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ContentFilterResult_members  /* .members */
    UA_TYPENAME("ContentFilterResult") /* .typeName */
},
/* SimpleTypeDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15005LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15421LU}}, /* .binaryEncodingId */
    sizeof(UA_SimpleTypeDescription), /* .memSize */
    UA_TYPES_SIMPLETYPEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    SimpleTypeDescription_members  /* .members */
    UA_TYPENAME("SimpleTypeDescription") /* .typeName */
},
/* UserTokenPolicy */
{
    {0, UA_NODEIDTYPE_NUMERIC, {304LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {306LU}}, /* .binaryEncodingId */
    sizeof(UA_UserTokenPolicy), /* .memSize */
    UA_TYPES_USERTOKENPOLICY, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    UserTokenPolicy_members  /* .members */
    UA_TYPENAME("UserTokenPolicy") /* .typeName */
},
/* DeleteMonitoredItemsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {779LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {781LU}}, /* .binaryEncodingId */
    sizeof(UA_DeleteMonitoredItemsRequest), /* .memSize */
    UA_TYPES_DELETEMONITOREDITEMSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DeleteMonitoredItemsRequest_members  /* .members */
    UA_TYPENAME("DeleteMonitoredItemsRequest") /* .typeName */
},
/* SetMonitoringModeRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {767LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {769LU}}, /* .binaryEncodingId */
    sizeof(UA_SetMonitoringModeRequest), /* .memSize */
    UA_TYPES_SETMONITORINGMODEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    SetMonitoringModeRequest_members  /* .members */
    UA_TYPENAME("SetMonitoringModeRequest") /* .typeName */
},
/* Duration */
{
    {0, UA_NODEIDTYPE_NUMERIC, {290LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Duration), /* .memSize */
    UA_TYPES_DURATION, /* .typeIndex */
    UA_DATATYPEKIND_DOUBLE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Duration_members  /* .members */
    UA_TYPENAME("Duration") /* .typeName */
},
/* ReferenceTypeAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {367LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {369LU}}, /* .binaryEncodingId */
    sizeof(UA_ReferenceTypeAttributes), /* .memSize */
    UA_TYPES_REFERENCETYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    ReferenceTypeAttributes_members  /* .members */
    UA_TYPENAME("ReferenceTypeAttributes") /* .typeName */
},
/* DataSetFieldFlags */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15904LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DataSetFieldFlags), /* .memSize */
    UA_TYPES_UINT16, /* .typeIndex */
    UA_DATATYPEKIND_UINT16, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DataSetFieldFlags_members  /* .members */
    UA_TYPENAME("DataSetFieldFlags") /* .typeName */
},
/* GetEndpointsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {426LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {428LU}}, /* .binaryEncodingId */
    sizeof(UA_GetEndpointsRequest), /* .memSize */
    UA_TYPES_GETENDPOINTSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    GetEndpointsRequest_members  /* .members */
    UA_TYPENAME("GetEndpointsRequest") /* .typeName */
},
/* CloseSecureChannelResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {453LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {455LU}}, /* .binaryEncodingId */
    sizeof(UA_CloseSecureChannelResponse), /* .memSize */
    UA_TYPES_CLOSESECURECHANNELRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    CloseSecureChannelResponse_members  /* .members */
    UA_TYPENAME("CloseSecureChannelResponse") /* .typeName */
},
/* PublishedDataItemsDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15581LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15679LU}}, /* .binaryEncodingId */
    sizeof(UA_PublishedDataItemsDataType), /* .memSize */
    UA_TYPES_PUBLISHEDDATAITEMSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    PublishedDataItemsDataType_members  /* .members */
    UA_TYPENAME("PublishedDataItemsDataType") /* .typeName */
},
/* PubSubState */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14647LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_PubSubState), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    PubSubState_members  /* .members */
    UA_TYPENAME("PubSubState") /* .typeName */
},
/* ViewDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {511LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {513LU}}, /* .binaryEncodingId */
    sizeof(UA_ViewDescription), /* .memSize */
    UA_TYPES_VIEWDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ViewDescription_members  /* .members */
    UA_TYPENAME("ViewDescription") /* .typeName */
},
/* SetPublishingModeResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {800LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {802LU}}, /* .binaryEncodingId */
    sizeof(UA_SetPublishingModeResponse), /* .memSize */
    UA_TYPES_SETPUBLISHINGMODERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    SetPublishingModeResponse_members  /* .members */
    UA_TYPENAME("SetPublishingModeResponse") /* .typeName */
},
/* StatusChangeNotification */
{
    {0, UA_NODEIDTYPE_NUMERIC, {818LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {820LU}}, /* .binaryEncodingId */
    sizeof(UA_StatusChangeNotification), /* .memSize */
    UA_TYPES_STATUSCHANGENOTIFICATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    StatusChangeNotification_members  /* .members */
    UA_TYPENAME("StatusChangeNotification") /* .typeName */
},
/* StructureField */
{
    {0, UA_NODEIDTYPE_NUMERIC, {101LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14844LU}}, /* .binaryEncodingId */
    sizeof(UA_StructureField), /* .memSize */
    UA_TYPES_STRUCTUREFIELD, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    StructureField_members  /* .members */
    UA_TYPENAME("StructureField") /* .typeName */
},
/* NodeAttributesMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {348LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_NodeAttributesMask), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    NodeAttributesMask_members  /* .members */
    UA_TYPENAME("NodeAttributesMask") /* .typeName */
},
/* EventFilterResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {734LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {736LU}}, /* .binaryEncodingId */
    sizeof(UA_EventFilterResult), /* .memSize */
    UA_TYPES_EVENTFILTERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    EventFilterResult_members  /* .members */
    UA_TYPENAME("EventFilterResult") /* .typeName */
},
/* BrokerWriterGroupTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15667LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15727LU}}, /* .binaryEncodingId */
    sizeof(UA_BrokerWriterGroupTransportDataType), /* .memSize */
    UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    BrokerWriterGroupTransportDataType_members  /* .members */
    UA_TYPENAME("BrokerWriterGroupTransportDataType") /* .typeName */
},
/* KeyValuePair */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14533LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14846LU}}, /* .binaryEncodingId */
    sizeof(UA_KeyValuePair), /* .memSize */
    UA_TYPES_KEYVALUEPAIR, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    KeyValuePair_members  /* .members */
    UA_TYPENAME("KeyValuePair") /* .typeName */
},
/* MonitoredItemCreateRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {743LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {745LU}}, /* .binaryEncodingId */
    sizeof(UA_MonitoredItemCreateRequest), /* .memSize */
    UA_TYPES_MONITOREDITEMCREATEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    MonitoredItemCreateRequest_members  /* .members */
    UA_TYPENAME("MonitoredItemCreateRequest") /* .typeName */
},
/* ComplexNumberType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12171LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12181LU}}, /* .binaryEncodingId */
    sizeof(UA_ComplexNumberType), /* .memSize */
    UA_TYPES_COMPLEXNUMBERTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ComplexNumberType_members  /* .members */
    UA_TYPENAME("ComplexNumberType") /* .typeName */
},
/* Range */
{
    {0, UA_NODEIDTYPE_NUMERIC, {884LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {886LU}}, /* .binaryEncodingId */
    sizeof(UA_Range), /* .memSize */
    UA_TYPES_RANGE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    Range_members  /* .members */
    UA_TYPENAME("Range") /* .typeName */
},
/* DataChangeNotification */
{
    {0, UA_NODEIDTYPE_NUMERIC, {809LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {811LU}}, /* .binaryEncodingId */
    sizeof(UA_DataChangeNotification), /* .memSize */
    UA_TYPES_DATACHANGENOTIFICATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DataChangeNotification_members  /* .members */
    UA_TYPENAME("DataChangeNotification") /* .typeName */
},
/* Argument */
{
    {0, UA_NODEIDTYPE_NUMERIC, {296LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {298LU}}, /* .binaryEncodingId */
    sizeof(UA_Argument), /* .memSize */
    UA_TYPES_ARGUMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    Argument_members  /* .members */
    UA_TYPENAME("Argument") /* .typeName */
},
/* JsonDataSetMessageContentMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15658LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_JsonDataSetMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    JsonDataSetMessageContentMask_members  /* .members */
    UA_TYPENAME("JsonDataSetMessageContentMask") /* .typeName */
},
/* TransferSubscriptionsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {839LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {841LU}}, /* .binaryEncodingId */
    sizeof(UA_TransferSubscriptionsRequest), /* .memSize */
    UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    TransferSubscriptionsRequest_members  /* .members */
    UA_TYPENAME("TransferSubscriptionsRequest") /* .typeName */
},
/* ChannelSecurityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {441LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {443LU}}, /* .binaryEncodingId */
    sizeof(UA_ChannelSecurityToken), /* .memSize */
    UA_TYPES_CHANNELSECURITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ChannelSecurityToken_members  /* .members */
    UA_TYPENAME("ChannelSecurityToken") /* .typeName */
},
/* ServerState */
{
    {0, UA_NODEIDTYPE_NUMERIC, {852LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ServerState), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    ServerState_members  /* .members */
    UA_TYPENAME("ServerState") /* .typeName */
},
/* EventNotificationList */
{
    {0, UA_NODEIDTYPE_NUMERIC, {914LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {916LU}}, /* .binaryEncodingId */
    sizeof(UA_EventNotificationList), /* .memSize */
    UA_TYPES_EVENTNOTIFICATIONLIST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    EventNotificationList_members  /* .members */
    UA_TYPENAME("EventNotificationList") /* .typeName */
},
/* AnonymousIdentityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {319LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {321LU}}, /* .binaryEncodingId */
    sizeof(UA_AnonymousIdentityToken), /* .memSize */
    UA_TYPES_ANONYMOUSIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    AnonymousIdentityToken_members  /* .members */
    UA_TYPENAME("AnonymousIdentityToken") /* .typeName */
},
/* FilterOperator */
{
    {0, UA_NODEIDTYPE_NUMERIC, {576LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_FilterOperator), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    FilterOperator_members  /* .members */
    UA_TYPENAME("FilterOperator") /* .typeName */
},
/* AggregateFilter */
{
    {0, UA_NODEIDTYPE_NUMERIC, {728LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {730LU}}, /* .binaryEncodingId */
    sizeof(UA_AggregateFilter), /* .memSize */
    UA_TYPES_AGGREGATEFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    AggregateFilter_members  /* .members */
    UA_TYPENAME("AggregateFilter") /* .typeName */
},
/* RepublishResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {833LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {835LU}}, /* .binaryEncodingId */
    sizeof(UA_RepublishResponse), /* .memSize */
    UA_TYPES_REPUBLISHRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    RepublishResponse_members  /* .members */
    UA_TYPENAME("RepublishResponse") /* .typeName */
},
/* DeleteSubscriptionsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {848LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {850LU}}, /* .binaryEncodingId */
    sizeof(UA_DeleteSubscriptionsResponse), /* .memSize */
    UA_TYPES_DELETESUBSCRIPTIONSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DeleteSubscriptionsResponse_members  /* .members */
    UA_TYPENAME("DeleteSubscriptionsResponse") /* .typeName */
},
/* RegisterNodesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {558LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {560LU}}, /* .binaryEncodingId */
    sizeof(UA_RegisterNodesRequest), /* .memSize */
    UA_TYPES_REGISTERNODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    RegisterNodesRequest_members  /* .members */
    UA_TYPENAME("RegisterNodesRequest") /* .typeName */
},
/* StructureDefinition */
{
    {0, UA_NODEIDTYPE_NUMERIC, {99LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {122LU}}, /* .binaryEncodingId */
    sizeof(UA_StructureDefinition), /* .memSize */
    UA_TYPES_STRUCTUREDEFINITION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    StructureDefinition_members  /* .members */
    UA_TYPENAME("StructureDefinition") /* .typeName */
},
/* MethodAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {358LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {360LU}}, /* .binaryEncodingId */
    sizeof(UA_MethodAttributes), /* .memSize */
    UA_TYPES_METHODATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    MethodAttributes_members  /* .members */
    UA_TYPENAME("MethodAttributes") /* .typeName */
},
/* UserNameIdentityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {322LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {324LU}}, /* .binaryEncodingId */
    sizeof(UA_UserNameIdentityToken), /* .memSize */
    UA_TYPES_USERNAMEIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    UserNameIdentityToken_members  /* .members */
    UA_TYPENAME("UserNameIdentityToken") /* .typeName */
},
/* UnregisterNodesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {564LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {566LU}}, /* .binaryEncodingId */
    sizeof(UA_UnregisterNodesRequest), /* .memSize */
    UA_TYPES_UNREGISTERNODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    UnregisterNodesRequest_members  /* .members */
    UA_TYPENAME("UnregisterNodesRequest") /* .typeName */
},
/* DataSetOrderingType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {20408LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DataSetOrderingType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DataSetOrderingType_members  /* .members */
    UA_TYPENAME("DataSetOrderingType") /* .typeName */
},
/* OpenSecureChannelResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {447LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {449LU}}, /* .binaryEncodingId */
    sizeof(UA_OpenSecureChannelResponse), /* .memSize */
    UA_TYPES_OPENSECURECHANNELRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    OpenSecureChannelResponse_members  /* .members */
    UA_TYPENAME("OpenSecureChannelResponse") /* .typeName */
},
/* SetTriggeringResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {776LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {778LU}}, /* .binaryEncodingId */
    sizeof(UA_SetTriggeringResponse), /* .memSize */
    UA_TYPES_SETTRIGGERINGRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetTriggeringResponse_members  /* .members */
    UA_TYPENAME("SetTriggeringResponse") /* .typeName */
},
/* SimpleAttributeOperand */
{
    {0, UA_NODEIDTYPE_NUMERIC, {601LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {603LU}}, /* .binaryEncodingId */
    sizeof(UA_SimpleAttributeOperand), /* .memSize */
    UA_TYPES_SIMPLEATTRIBUTEOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    SimpleAttributeOperand_members  /* .members */
    UA_TYPENAME("SimpleAttributeOperand") /* .typeName */
},
/* UadpDataSetWriterMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15652LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15717LU}}, /* .binaryEncodingId */
    sizeof(UA_UadpDataSetWriterMessageDataType), /* .memSize */
    UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    UadpDataSetWriterMessageDataType_members  /* .members */
    UA_TYPENAME("UadpDataSetWriterMessageDataType") /* .typeName */
},
/* JsonNetworkMessageContentMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15654LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_JsonNetworkMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    JsonNetworkMessageContentMask_members  /* .members */
    UA_TYPENAME("JsonNetworkMessageContentMask") /* .typeName */
},
/* RepublishRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {830LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {832LU}}, /* .binaryEncodingId */
    sizeof(UA_RepublishRequest), /* .memSize */
    UA_TYPES_REPUBLISHREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    RepublishRequest_members  /* .members */
    UA_TYPENAME("RepublishRequest") /* .typeName */
},
/* RegisterNodesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {561LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {563LU}}, /* .binaryEncodingId */
    sizeof(UA_RegisterNodesResponse), /* .memSize */
    UA_TYPES_REGISTERNODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    RegisterNodesResponse_members  /* .members */
    UA_TYPENAME("RegisterNodesResponse") /* .typeName */
},
/* ModifyMonitoredItemsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {764LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {766LU}}, /* .binaryEncodingId */
    sizeof(UA_ModifyMonitoredItemsResponse), /* .memSize */
    UA_TYPES_MODIFYMONITOREDITEMSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ModifyMonitoredItemsResponse_members  /* .members */
    UA_TYPENAME("ModifyMonitoredItemsResponse") /* .typeName */
},
/* FieldTargetDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14744LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14848LU}}, /* .binaryEncodingId */
    sizeof(UA_FieldTargetDataType), /* .memSize */
    UA_TYPES_FIELDTARGETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    FieldTargetDataType_members  /* .members */
    UA_TYPENAME("FieldTargetDataType") /* .typeName */
},
/* DeleteSubscriptionsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {845LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {847LU}}, /* .binaryEncodingId */
    sizeof(UA_DeleteSubscriptionsRequest), /* .memSize */
    UA_TYPES_DELETESUBSCRIPTIONSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DeleteSubscriptionsRequest_members  /* .members */
    UA_TYPENAME("DeleteSubscriptionsRequest") /* .typeName */
},
/* RedundancySupport */
{
    {0, UA_NODEIDTYPE_NUMERIC, {851LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_RedundancySupport), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    RedundancySupport_members  /* .members */
    UA_TYPENAME("RedundancySupport") /* .typeName */
},
/* BrowsePath */
{
    {0, UA_NODEIDTYPE_NUMERIC, {543LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {545LU}}, /* .binaryEncodingId */
    sizeof(UA_BrowsePath), /* .memSize */
    UA_TYPES_BROWSEPATH, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    BrowsePath_members  /* .members */
    UA_TYPENAME("BrowsePath") /* .typeName */
},
/* ObjectAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {352LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {354LU}}, /* .binaryEncodingId */
    sizeof(UA_ObjectAttributes), /* .memSize */
    UA_TYPES_OBJECTATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    ObjectAttributes_members  /* .members */
    UA_TYPENAME("ObjectAttributes") /* .typeName */
},
/* PublishRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {824LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {826LU}}, /* .binaryEncodingId */
    sizeof(UA_PublishRequest), /* .memSize */
    UA_TYPES_PUBLISHREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    PublishRequest_members  /* .members */
    UA_TYPENAME("PublishRequest") /* .typeName */
},
/* FindServersRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {420LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {422LU}}, /* .binaryEncodingId */
    sizeof(UA_FindServersRequest), /* .memSize */
    UA_TYPES_FINDSERVERSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    FindServersRequest_members  /* .members */
    UA_TYPENAME("FindServersRequest") /* .typeName */
},
/* JsonDataSetWriterMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15664LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15724LU}}, /* .binaryEncodingId */
    sizeof(UA_JsonDataSetWriterMessageDataType), /* .memSize */
    UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    JsonDataSetWriterMessageDataType_members  /* .members */
    UA_TYPENAME("JsonDataSetWriterMessageDataType") /* .typeName */
},
/* FieldMetaData */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14524LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14839LU}}, /* .binaryEncodingId */
    sizeof(UA_FieldMetaData), /* .memSize */
    UA_TYPES_FIELDMETADATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    FieldMetaData_members  /* .members */
    UA_TYPENAME("FieldMetaData") /* .typeName */
},
/* ReferenceDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {518LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {520LU}}, /* .binaryEncodingId */
    sizeof(UA_ReferenceDescription), /* .memSize */
    UA_TYPES_REFERENCEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    ReferenceDescription_members  /* .members */
    UA_TYPENAME("ReferenceDescription") /* .typeName */
},
/* SubscribedDataSetMirrorDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15635LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15713LU}}, /* .binaryEncodingId */
    sizeof(UA_SubscribedDataSetMirrorDataType), /* .memSize */
    UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SubscribedDataSetMirrorDataType_members  /* .members */
    UA_TYPENAME("SubscribedDataSetMirrorDataType") /* .typeName */
},
/* TargetVariablesDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15631LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15712LU}}, /* .binaryEncodingId */
    sizeof(UA_TargetVariablesDataType), /* .memSize */
    UA_TYPES_TARGETVARIABLESDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    TargetVariablesDataType_members  /* .members */
    UA_TYPENAME("TargetVariablesDataType") /* .typeName */
},
/* CreateSubscriptionRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {785LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {787LU}}, /* .binaryEncodingId */
    sizeof(UA_CreateSubscriptionRequest), /* .memSize */
    UA_TYPES_CREATESUBSCRIPTIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CreateSubscriptionRequest_members  /* .members */
    UA_TYPENAME("CreateSubscriptionRequest") /* .typeName */
},
/* CallResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {713LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {715LU}}, /* .binaryEncodingId */
    sizeof(UA_CallResponse), /* .memSize */
    UA_TYPES_CALLRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CallResponse_members  /* .members */
    UA_TYPENAME("CallResponse") /* .typeName */
},
/* DeleteNodesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {501LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {503LU}}, /* .binaryEncodingId */
    sizeof(UA_DeleteNodesResponse), /* .memSize */
    UA_TYPES_DELETENODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DeleteNodesResponse_members  /* .members */
    UA_TYPENAME("DeleteNodesResponse") /* .typeName */
},
/* BrokerDataSetReaderTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15670LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15733LU}}, /* .binaryEncodingId */
    sizeof(UA_BrokerDataSetReaderTransportDataType), /* .memSize */
    UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    BrokerDataSetReaderTransportDataType_members  /* .members */
    UA_TYPENAME("BrokerDataSetReaderTransportDataType") /* .typeName */
},
/* ModifyMonitoredItemsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {761LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {763LU}}, /* .binaryEncodingId */
    sizeof(UA_ModifyMonitoredItemsRequest), /* .memSize */
    UA_TYPES_MODIFYMONITOREDITEMSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ModifyMonitoredItemsRequest_members  /* .members */
    UA_TYPENAME("ModifyMonitoredItemsRequest") /* .typeName */
},
/* ServiceFault */
{
    {0, UA_NODEIDTYPE_NUMERIC, {395LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {397LU}}, /* .binaryEncodingId */
    sizeof(UA_ServiceFault), /* .memSize */
    UA_TYPES_SERVICEFAULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    ServiceFault_members  /* .members */
    UA_TYPENAME("ServiceFault") /* .typeName */
},
/* PublishResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {827LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {829LU}}, /* .binaryEncodingId */
    sizeof(UA_PublishResponse), /* .memSize */
    UA_TYPES_PUBLISHRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    PublishResponse_members  /* .members */
    UA_TYPENAME("PublishResponse") /* .typeName */
},
/* CreateMonitoredItemsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {749LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {751LU}}, /* .binaryEncodingId */
    sizeof(UA_CreateMonitoredItemsRequest), /* .memSize */
    UA_TYPES_CREATEMONITOREDITEMSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CreateMonitoredItemsRequest_members  /* .members */
    UA_TYPENAME("CreateMonitoredItemsRequest") /* .typeName */
},
/* OpenSecureChannelRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {444LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {446LU}}, /* .binaryEncodingId */
    sizeof(UA_OpenSecureChannelRequest), /* .memSize */
    UA_TYPES_OPENSECURECHANNELREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    OpenSecureChannelRequest_members  /* .members */
    UA_TYPENAME("OpenSecureChannelRequest") /* .typeName */
},
/* CloseSessionRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {471LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {473LU}}, /* .binaryEncodingId */
    sizeof(UA_CloseSessionRequest), /* .memSize */
    UA_TYPES_CLOSESESSIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CloseSessionRequest_members  /* .members */
    UA_TYPENAME("CloseSessionRequest") /* .typeName */
},
/* SetTriggeringRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {773LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {775LU}}, /* .binaryEncodingId */
    sizeof(UA_SetTriggeringRequest), /* .memSize */
    UA_TYPES_SETTRIGGERINGREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetTriggeringRequest_members  /* .members */
    UA_TYPENAME("SetTriggeringRequest") /* .typeName */
},
/* EnumDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15488LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {127LU}}, /* .binaryEncodingId */
    sizeof(UA_EnumDescription), /* .memSize */
    UA_TYPES_ENUMDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    EnumDescription_members  /* .members */
    UA_TYPENAME("EnumDescription") /* .typeName */
},
/* BrowseResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {522LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {524LU}}, /* .binaryEncodingId */
    sizeof(UA_BrowseResult), /* .memSize */
    UA_TYPES_BROWSERESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    BrowseResult_members  /* .members */
    UA_TYPENAME("BrowseResult") /* .typeName */
},
/* AddReferencesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {492LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {494LU}}, /* .binaryEncodingId */
    sizeof(UA_AddReferencesRequest), /* .memSize */
    UA_TYPES_ADDREFERENCESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    AddReferencesRequest_members  /* .members */
    UA_TYPENAME("AddReferencesRequest") /* .typeName */
},
/* AddNodesItem */
{
    {0, UA_NODEIDTYPE_NUMERIC, {376LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {378LU}}, /* .binaryEncodingId */
    sizeof(UA_AddNodesItem), /* .memSize */
    UA_TYPES_ADDNODESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    AddNodesItem_members  /* .members */
    UA_TYPENAME("AddNodesItem") /* .typeName */
},
/* ServerStatusDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {862LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {864LU}}, /* .binaryEncodingId */
    sizeof(UA_ServerStatusDataType), /* .memSize */
    UA_TYPES_SERVERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    ServerStatusDataType_members  /* .members */
    UA_TYPENAME("ServerStatusDataType") /* .typeName */
},
/* BrowseNextResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {534LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {536LU}}, /* .binaryEncodingId */
    sizeof(UA_BrowseNextResponse), /* .memSize */
    UA_TYPES_BROWSENEXTRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    BrowseNextResponse_members  /* .members */
    UA_TYPENAME("BrowseNextResponse") /* .typeName */
},
/* AxisInformation */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12079LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12089LU}}, /* .binaryEncodingId */
    sizeof(UA_AxisInformation), /* .memSize */
    UA_TYPES_AXISINFORMATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    AxisInformation_members  /* .members */
    UA_TYPENAME("AxisInformation") /* .typeName */
},
/* ApplicationDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {308LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {310LU}}, /* .binaryEncodingId */
    sizeof(UA_ApplicationDescription), /* .memSize */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    ApplicationDescription_members  /* .members */
    UA_TYPENAME("ApplicationDescription") /* .typeName */
},
/* StructureDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15487LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {126LU}}, /* .binaryEncodingId */
    sizeof(UA_StructureDescription), /* .memSize */
    UA_TYPES_STRUCTUREDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    StructureDescription_members  /* .members */
    UA_TYPENAME("StructureDescription") /* .typeName */
},
/* ReadRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {629LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {631LU}}, /* .binaryEncodingId */
    sizeof(UA_ReadRequest), /* .memSize */
    UA_TYPES_READREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ReadRequest_members  /* .members */
    UA_TYPENAME("ReadRequest") /* .typeName */
},
/* DataSetWriterDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15597LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15682LU}}, /* .binaryEncodingId */
    sizeof(UA_DataSetWriterDataType), /* .memSize */
    UA_TYPES_DATASETWRITERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    DataSetWriterDataType_members  /* .members */
    UA_TYPENAME("DataSetWriterDataType") /* .typeName */
},
/* ActivateSessionRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {465LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {467LU}}, /* .binaryEncodingId */
    sizeof(UA_ActivateSessionRequest), /* .memSize */
    UA_TYPES_ACTIVATESESSIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    ActivateSessionRequest_members  /* .members */
    UA_TYPENAME("ActivateSessionRequest") /* .typeName */
},
/* BrowsePathResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {549LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {551LU}}, /* .binaryEncodingId */
    sizeof(UA_BrowsePathResult), /* .memSize */
    UA_TYPES_BROWSEPATHRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    BrowsePathResult_members  /* .members */
    UA_TYPENAME("BrowsePathResult") /* .typeName */
},
/* AddNodesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {486LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {488LU}}, /* .binaryEncodingId */
    sizeof(UA_AddNodesRequest), /* .memSize */
    UA_TYPES_ADDNODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    AddNodesRequest_members  /* .members */
    UA_TYPENAME("AddNodesRequest") /* .typeName */
},
/* BrowseRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {525LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {527LU}}, /* .binaryEncodingId */
    sizeof(UA_BrowseRequest), /* .memSize */
    UA_TYPES_BROWSEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    BrowseRequest_members  /* .members */
    UA_TYPENAME("BrowseRequest") /* .typeName */
},
/* WriteRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {671LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {673LU}}, /* .binaryEncodingId */
    sizeof(UA_WriteRequest), /* .memSize */
    UA_TYPES_WRITEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    WriteRequest_members  /* .members */
    UA_TYPENAME("WriteRequest") /* .typeName */
},
/* AddNodesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {489LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {491LU}}, /* .binaryEncodingId */
    sizeof(UA_AddNodesResponse), /* .memSize */
    UA_TYPES_ADDNODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    AddNodesResponse_members  /* .members */
    UA_TYPENAME("AddNodesResponse") /* .typeName */
},
/* AttributeOperand */
{
    {0, UA_NODEIDTYPE_NUMERIC, {598LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {600LU}}, /* .binaryEncodingId */
    sizeof(UA_AttributeOperand), /* .memSize */
    UA_TYPES_ATTRIBUTEOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    AttributeOperand_members  /* .members */
    UA_TYPENAME("AttributeOperand") /* .typeName */
},
/* DataChangeFilter */
{
    {0, UA_NODEIDTYPE_NUMERIC, {722LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {724LU}}, /* .binaryEncodingId */
    sizeof(UA_DataChangeFilter), /* .memSize */
    UA_TYPES_DATACHANGEFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DataChangeFilter_members  /* .members */
    UA_TYPENAME("DataChangeFilter") /* .typeName */
},
/* EndpointDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {312LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {314LU}}, /* .binaryEncodingId */
    sizeof(UA_EndpointDescription), /* .memSize */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    EndpointDescription_members  /* .members */
    UA_TYPENAME("EndpointDescription") /* .typeName */
},
/* DeleteReferencesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {504LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {506LU}}, /* .binaryEncodingId */
    sizeof(UA_DeleteReferencesRequest), /* .memSize */
    UA_TYPES_DELETEREFERENCESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DeleteReferencesRequest_members  /* .members */
    UA_TYPENAME("DeleteReferencesRequest") /* .typeName */
},
/* JsonWriterGroupMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15657LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15719LU}}, /* .binaryEncodingId */
    sizeof(UA_JsonWriterGroupMessageDataType), /* .memSize */
    UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    JsonWriterGroupMessageDataType_members  /* .members */
    UA_TYPENAME("JsonWriterGroupMessageDataType") /* .typeName */
},
/* TranslateBrowsePathsToNodeIdsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {552LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {554LU}}, /* .binaryEncodingId */
    sizeof(UA_TranslateBrowsePathsToNodeIdsRequest), /* .memSize */
    UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    TranslateBrowsePathsToNodeIdsRequest_members  /* .members */
    UA_TYPENAME("TranslateBrowsePathsToNodeIdsRequest") /* .typeName */
},
/* JsonDataSetReaderMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15665LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15725LU}}, /* .binaryEncodingId */
    sizeof(UA_JsonDataSetReaderMessageDataType), /* .memSize */
    UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    JsonDataSetReaderMessageDataType_members  /* .members */
    UA_TYPENAME("JsonDataSetReaderMessageDataType") /* .typeName */
},
/* FindServersResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {423LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {425LU}}, /* .binaryEncodingId */
    sizeof(UA_FindServersResponse), /* .memSize */
    UA_TYPES_FINDSERVERSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    FindServersResponse_members  /* .members */
    UA_TYPENAME("FindServersResponse") /* .typeName */
},
/* CreateSessionRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {459LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {461LU}}, /* .binaryEncodingId */
    sizeof(UA_CreateSessionRequest), /* .memSize */
    UA_TYPES_CREATESESSIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    CreateSessionRequest_members  /* .members */
    UA_TYPENAME("CreateSessionRequest") /* .typeName */
},
/* ContentFilterElement */
{
    {0, UA_NODEIDTYPE_NUMERIC, {583LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {585LU}}, /* .binaryEncodingId */
    sizeof(UA_ContentFilterElement), /* .memSize */
    UA_TYPES_CONTENTFILTERELEMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ContentFilterElement_members  /* .members */
    UA_TYPENAME("ContentFilterElement") /* .typeName */
},
/* UadpWriterGroupMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15645LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15715LU}}, /* .binaryEncodingId */
    sizeof(UA_UadpWriterGroupMessageDataType), /* .memSize */
    UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    UadpWriterGroupMessageDataType_members  /* .members */
    UA_TYPENAME("UadpWriterGroupMessageDataType") /* .typeName */
},
/* UABinaryFileDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15006LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15422LU}}, /* .binaryEncodingId */
    sizeof(UA_UABinaryFileDataType), /* .memSize */
    UA_TYPES_UABINARYFILEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    UABinaryFileDataType_members  /* .members */
    UA_TYPENAME("UABinaryFileDataType") /* .typeName */
},
/* TranslateBrowsePathsToNodeIdsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {555LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {557LU}}, /* .binaryEncodingId */
    sizeof(UA_TranslateBrowsePathsToNodeIdsResponse), /* .memSize */
    UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    TranslateBrowsePathsToNodeIdsResponse_members  /* .members */
    UA_TYPENAME("TranslateBrowsePathsToNodeIdsResponse") /* .typeName */
},
/* BrowseResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {528LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {530LU}}, /* .binaryEncodingId */
    sizeof(UA_BrowseResponse), /* .memSize */
    UA_TYPES_BROWSERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    BrowseResponse_members  /* .members */
    UA_TYPENAME("BrowseResponse") /* .typeName */
},
/* CreateSessionResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {462LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {464LU}}, /* .binaryEncodingId */
    sizeof(UA_CreateSessionResponse), /* .memSize */
    UA_TYPES_CREATESESSIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    CreateSessionResponse_members  /* .members */
    UA_TYPENAME("CreateSessionResponse") /* .typeName */
},
/* DataSetMetaDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14523LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {124LU}}, /* .binaryEncodingId */
    sizeof(UA_DataSetMetaDataType), /* .memSize */
    UA_TYPES_DATASETMETADATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    DataSetMetaDataType_members  /* .members */
    UA_TYPENAME("DataSetMetaDataType") /* .typeName */
},
/* ContentFilter */
{
    {0, UA_NODEIDTYPE_NUMERIC, {586LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {588LU}}, /* .binaryEncodingId */
    sizeof(UA_ContentFilter), /* .memSize */
    UA_TYPES_CONTENTFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    ContentFilter_members  /* .members */
    UA_TYPENAME("ContentFilter") /* .typeName */
},
/* WriterGroupDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15480LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21150LU}}, /* .binaryEncodingId */
    sizeof(UA_WriterGroupDataType), /* .memSize */
    UA_TYPES_WRITERGROUPDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    16, /* .membersSize */
    WriterGroupDataType_members  /* .members */
    UA_TYPENAME("WriterGroupDataType") /* .typeName */
},
/* GetEndpointsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {429LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {431LU}}, /* .binaryEncodingId */
    sizeof(UA_GetEndpointsResponse), /* .memSize */
    UA_TYPES_GETENDPOINTSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    GetEndpointsResponse_members  /* .members */
    UA_TYPENAME("GetEndpointsResponse") /* .typeName */
},
/* PublishedEventsDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15582LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15681LU}}, /* .binaryEncodingId */
    sizeof(UA_PublishedEventsDataType), /* .memSize */
    UA_TYPES_PUBLISHEDEVENTSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    PublishedEventsDataType_members  /* .members */
    UA_TYPENAME("PublishedEventsDataType") /* .typeName */
},
/* EventFilter */
{
    {0, UA_NODEIDTYPE_NUMERIC, {725LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {727LU}}, /* .binaryEncodingId */
    sizeof(UA_EventFilter), /* .memSize */
    UA_TYPES_EVENTFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    EventFilter_members  /* .members */
    UA_TYPENAME("EventFilter") /* .typeName */
},
/* DataSetReaderDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15623LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15703LU}}, /* .binaryEncodingId */
    sizeof(UA_DataSetReaderDataType), /* .memSize */
    UA_TYPES_DATASETREADERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    17, /* .membersSize */
    DataSetReaderDataType_members  /* .members */
    UA_TYPENAME("DataSetReaderDataType") /* .typeName */
},
/* PublishedDataSetDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15578LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15677LU}}, /* .binaryEncodingId */
    sizeof(UA_PublishedDataSetDataType), /* .memSize */
    UA_TYPES_PUBLISHEDDATASETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    PublishedDataSetDataType_members  /* .members */
    UA_TYPENAME("PublishedDataSetDataType") /* .typeName */
},
/* ReaderGroupDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15520LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21153LU}}, /* .binaryEncodingId */
    sizeof(UA_ReaderGroupDataType), /* .memSize */
    UA_TYPES_READERGROUPDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    ReaderGroupDataType_members  /* .members */
    UA_TYPENAME("ReaderGroupDataType") /* .typeName */
},
/* PubSubConnectionDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15617LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15694LU}}, /* .binaryEncodingId */
    sizeof(UA_PubSubConnectionDataType), /* .memSize */
    UA_TYPES_PUBSUBCONNECTIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    PubSubConnectionDataType_members  /* .members */
    UA_TYPENAME("PubSubConnectionDataType") /* .typeName */
},
/* PubSubConfigurationDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15530LU}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21154LU}}, /* .binaryEncodingId */
    sizeof(UA_PubSubConfigurationDataType), /* .memSize */
    UA_TYPES_PUBSUBCONFIGURATIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    PubSubConfigurationDataType_members  /* .members */
    UA_TYPENAME("PubSubConfigurationDataType") /* .typeName */
},
};

