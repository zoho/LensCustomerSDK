#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MeetingClientAudioEnabledDisabledNotifierData, MeetingClientAudioEnabledDisabledNotifierDataStatus, MeetingClientAudioProcessingSpec, MeetingClientAudioSourceType, MeetingClientAudioSourceTypeCompanion, MeetingClientAuthException, MeetingClientBandwidthNotifierData, MeetingClientBandwidthNotifierDataOperation, MeetingClientCameraFace, MeetingClientClientAccessTokenResponseCompanion, MeetingClientClientStatsResponse, MeetingClientClientStatsResponseCompanion, MeetingClientConferenceACL, MeetingClientConferenceACLCompanion, MeetingClientConnectionState, MeetingClientCreatorDetails, MeetingClientCustomMessage, MeetingClientCustomMessageType, MeetingClientDeviceType, MeetingClientDeviceTypeCompanion, MeetingClientEnableAudioRestrictedNotifierData, MeetingClientEnableAudioRestrictedNotifierDataRestrictionScope, MeetingClientEndScope, MeetingClientExpiryDurationRemainsData, MeetingClientGetAssignPrimaryAdminMembersList, MeetingClientGetGlobalPinMembersList, MeetingClientGetLocalPinMembersList, MeetingClientGetMeetingMemberById, MeetingClientGetMeetingMembers, MeetingClientGetMeetingMembersByIdsSortedByAudio, MeetingClientGetMeetingMembersExcludingGuestsWithMemberRoleNone, MeetingClientGetMeetingMembersExcludingStageMembers, MeetingClientGetMeetingMembersExcludingStageMembersAndGuestsWithMemberRoleNone, MeetingClientGetParticipantsDetailsResponse, MeetingClientGetParticipantsDetailsResponseCompanion, MeetingClientGetShareRequestMembersList, MeetingClientGetSingleUserTypeMeetingMember, MeetingClientGetSpeakRequestMembersList, MeetingClientGetSpotLightMembersList, MeetingClientGetStreamIdsForGrid, MeetingClientGetWaitingRequestMembersList, MeetingClientGlobalPinMemberEntity, MeetingClientGlobalPinMemberEntityQueries, MeetingClientGlobalSettings, MeetingClientHandleReactionsResponse, MeetingClientHandleReactionsResponseCompanion, MeetingClientHandleSourceRemovedResponse, MeetingClientHandleSourceRemovedResponseCompanion, MeetingClientHandleUpdateGlobalPinResponse, MeetingClientHandleUpdateGlobalPinResponseCompanion, MeetingClientHandleUserAddedInGlobalPinResponse, MeetingClientHandleUserAddedInGlobalPinResponseCompanion, MeetingClientHandleUserRemovedInGlobalPinResponse, MeetingClientHandleUserRemovedInGlobalPinResponseCompanion, MeetingClientHostDetails, MeetingClientKotlinArray<T>, MeetingClientKotlinByteArray, MeetingClientKotlinByteIterator, MeetingClientKotlinEnum<E>, MeetingClientKotlinEnumCompanion, MeetingClientKotlinException, MeetingClientKotlinIllegalStateException, MeetingClientKotlinNothing, MeetingClientKotlinPair<__covariant A, __covariant B>, MeetingClientKotlinRuntimeException, MeetingClientKotlinThrowable, MeetingClientKotlinUnit, MeetingClientKotlinx_serialization_coreSerialKind, MeetingClientKotlinx_serialization_coreSerializersModule, MeetingClientKotlinx_serialization_jsonJsonElement, MeetingClientKotlinx_serialization_jsonJsonElementCompanion, MeetingClientLocalPinMemberEntity, MeetingClientLocalPinMemberEntityQueries, MeetingClientMediaConnectionState, MeetingClientMediaConnectionType, MeetingClientMediaServerReachabilityReportMediaServerIPState, MeetingClientMediaServerReachabilityReportMediaServerIPStateStatus, MeetingClientMediaServerReachabilityReportStatus, MeetingClientMeetingDetails, MeetingClientMeetingLayout, MeetingClientMeetingLayoutCompanion, MeetingClientMeeting_coreHeaderExtension, MeetingClientMeeting_coreMediaStreamTrack, MeetingClientMeeting_coreMediaStreamTrackCompanion, MeetingClientMeeting_coreMediaStreamTrackKind, MeetingClientMeeting_coreRtcpParameters, MeetingClientMeeting_coreRtpCodecParameters, MeetingClientMeeting_coreRtpEncodingParameters, MeetingClientMeeting_coreRtpParameters, MeetingClientMeeting_coreRtpReceiver, MeetingClientMeeting_coreVideoCaptureSpec, MeetingClientMeeting_coreVideoSink, MeetingClientMeeting_coreVideoSinkDetails, MeetingClientMeeting_coreVideoSinkDimensions, MeetingClientMeeting_coreVideoStreamTrack, MeetingClientMeetingsMemberEntity, MeetingClientMeetingsMemberEntityAdapter, MeetingClientMeetingsMemberEntityQueries, MeetingClientMeetingsMemberRingLogEntity, MeetingClientMeetingsMemberRingLogEntityQueries, MeetingClientMemberNotifierData, MeetingClientMemberRole, MeetingClientMemberRoleCompanion, MeetingClientMemberType, MeetingClientMemberTypeCompanion, MeetingClientMexData, MeetingClientNoAudioSourceNotifierData, MeetingClientPageDetail, MeetingClientPermissionsUtil, MeetingClientPhoneAudioDetails, MeetingClientPhoneAudioDetailsPhoneAudioNumber, MeetingClientPhoneAudioResponse, MeetingClientPhoneAudioResponseCompanion, MeetingClientPhoneAudioResponseDialInNumberResponse, MeetingClientPhoneAudioResponseDialInNumberResponseCompanion, MeetingClientPrimaryAdminAssignedNotifierData, MeetingClientPrimaryAdminAssignedNotifierDataPrimaryAdminDetail, MeetingClientRTCPAudioManagerEvent, MeetingClientRTCPCustomVideoCapturerManager, MeetingClientRTCPMeetingDebugLogging, MeetingClientRTCPMeetingRequest, MeetingClientRTCPMeetingShareRequest, MeetingClientRTCPMeetingState, MeetingClientRTCPMeetingVideo, MeetingClientRTCPMeetingsClient, MeetingClientRTCPMeetingsClientCompanion, MeetingClientRTCPMeetingsClientException, MeetingClientRTCPMeetingsClientResult<ResultType>, MeetingClientRTCPMeetingsClientResultCompanion, MeetingClientRTCPMeetingsClientResultError, MeetingClientRTCPMeetingsConfigurations, MeetingClientRTCPMeetingsDatabaseCompanion, MeetingClientRTCPMeetingsMember, MeetingClientRTCPMeetingsRemoteConfigs, MeetingClientRTCPMeetingsRemoteConfigsAction, MeetingClientRTCPMeetingsState, MeetingClientRTCPMexClient, MeetingClientRTCPMexClientCompanion, MeetingClientRTCPMexClientException, MeetingClientRTCPMexRemoteConfigs, MeetingClientRTCPMexResult<ResultType>, MeetingClientRTCPMexResultCompanion, MeetingClientRTCPMexResultError, MeetingClientRTCPRemoteDebugger, MeetingClientRTCPRemoteDebuggerVideoEffectType, MeetingClientRTCPScreenShareVideoCapturerManager, MeetingClientRTCPWMSConfiguration, MeetingClientReaction, MeetingClientRecordingNotifierData, MeetingClientRecordingNotifierDataRecordingAction, MeetingClientRemovedMemberNotifierData, MeetingClientRequestType, MeetingClientRequestTypeCompanion, MeetingClientRuntimeAfterVersion, MeetingClientRuntimeBaseTransacterImpl, MeetingClientRuntimeExecutableQuery<__covariant RowType>, MeetingClientRuntimeQuery<__covariant RowType>, MeetingClientRuntimeTransacterImpl, MeetingClientRuntimeTransacterTransaction, MeetingClientSecondaryAdminAssignedRemovedNotifierData, MeetingClientSecondaryAdminAssignedRemovedNotifierDataSecondaryAdminDetail, MeetingClientShareRequestApprovedNotifierData, MeetingClientShareRequestDeniedNotifierData, MeetingClientShareRequestMemberEntity, MeetingClientShareRequestMemberEntityAdapter, MeetingClientShareRequestMemberEntityQueries, MeetingClientShareRequestResponse, MeetingClientShareRequestResponseCompanion, MeetingClientShareType, MeetingClientShareTypeCompanion, MeetingClientSpeakRequestMemberEntity, MeetingClientSpeakRequestMemberEntityQueries, MeetingClientSpotLightMemberEntity, MeetingClientSpotLightMemberEntityQueries, MeetingClientStartTranscriptResponse, MeetingClientStartTranscriptResponseCompanion, MeetingClientStreamInfo, MeetingClientTranscript, MeetingClientTranscriptTranscriptType, MeetingClientTranscriptTranscriptTypeCompanion, MeetingClientUIPreference, MeetingClientUserACL, MeetingClientUserACLCompanion, MeetingClientUserRoles, MeetingClientUserRolesUserRoleDetails, MeetingClientVideoCaptureSpec, MeetingClientVideoCaptureSpecBitrate, MeetingClientVideoEnabledDisabledNotifierData, MeetingClientVideoEnabledDisabledNotifierDataStatus, MeetingClientViewType, MeetingClientViewTypeCompanion, MeetingClientWaitingRequestMemberEntity, MeetingClientWaitingRequestMemberEntityAdapter, MeetingClientWaitingRequestMemberEntityQueries, MeetingClientWaitingRoomStatus, NSObject, RTCFileVideoCapturer, RTCMediaStreamTrack, RTCRtcpParameters, RTCRtpCodecParameters, RTCRtpEncodingParameters, RTCRtpHeaderExtension, RTCRtpParameters, RTCRtpReceiver, RTCVideoSource, UIView;

@protocol MeetingClientCameraStateCallbacks, MeetingClientKotlinAnnotation, MeetingClientKotlinComparable, MeetingClientKotlinFunction, MeetingClientKotlinIterator, MeetingClientKotlinKAnnotatedElement, MeetingClientKotlinKClass, MeetingClientKotlinKClassifier, MeetingClientKotlinKDeclarationContainer, MeetingClientKotlinSuspendFunction1, MeetingClientKotlinx_coroutines_coreFlow, MeetingClientKotlinx_coroutines_coreFlowCollector, MeetingClientKotlinx_coroutines_coreSharedFlow, MeetingClientKotlinx_coroutines_coreStateFlow, MeetingClientKotlinx_serialization_coreCompositeDecoder, MeetingClientKotlinx_serialization_coreCompositeEncoder, MeetingClientKotlinx_serialization_coreDecoder, MeetingClientKotlinx_serialization_coreDeserializationStrategy, MeetingClientKotlinx_serialization_coreEncoder, MeetingClientKotlinx_serialization_coreKSerializer, MeetingClientKotlinx_serialization_coreSerialDescriptor, MeetingClientKotlinx_serialization_coreSerializationStrategy, MeetingClientKotlinx_serialization_coreSerializersModuleCollector, MeetingClientMeeting_coreRtpHeaderCallback, MeetingClientPlatform, MeetingClientRTCPMeetingsClientLogger, MeetingClientRTCPMeetingsDatabase, MeetingClientRTCPMeetingsDebugLogger, MeetingClientRuntimeCloseable, MeetingClientRuntimeColumnAdapter, MeetingClientRuntimeQueryListener, MeetingClientRuntimeQueryResult, MeetingClientRuntimeSqlCursor, MeetingClientRuntimeSqlDriver, MeetingClientRuntimeSqlPreparedStatement, MeetingClientRuntimeSqlSchema, MeetingClientRuntimeTransacter, MeetingClientRuntimeTransacterBase, MeetingClientRuntimeTransactionCallbacks, MeetingClientRuntimeTransactionWithReturn, MeetingClientRuntimeTransactionWithoutReturn;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MeetingClientBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MeetingClientBase (MeetingClientBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MeetingClientMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MeetingClientMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMeetingClientKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MeetingClientNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MeetingClientByte : MeetingClientNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MeetingClientUByte : MeetingClientNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MeetingClientShort : MeetingClientNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MeetingClientUShort : MeetingClientNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MeetingClientInt : MeetingClientNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MeetingClientUInt : MeetingClientNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MeetingClientLong : MeetingClientNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MeetingClientULong : MeetingClientNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MeetingClientFloat : MeetingClientNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MeetingClientDouble : MeetingClientNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MeetingClientBoolean : MeetingClientNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAssignPrimaryAdminMembersList")))
@interface MeetingClientGetAssignPrimaryAdminMembersList : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetAssignPrimaryAdminMembersList *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) int64_t audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) BOOL enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) BOOL enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType *memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) BOOL ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole *role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) BOOL speaking __attribute__((swift_name("speaking")));
@property (readonly) int64_t stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString * _Nullable userId_ __attribute__((swift_name("userId_")));
@property (readonly) NSString * _Nullable userId__ __attribute__((swift_name("userId__")));
@property (readonly) NSString * _Nullable userId___ __attribute__((swift_name("userId___")));
@property (readonly) BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType *viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetGlobalPinMembersList")))
@interface MeetingClientGetGlobalPinMembersList : MeetingClientBase
- (instancetype)initWithPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString * _Nullable)confId userId:(NSString * _Nullable)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType * _Nullable)viewType memberType:(MeetingClientMemberType * _Nullable)memberType role:(MeetingClientMemberRole * _Nullable)role audioEnabled:(MeetingClientBoolean * _Nullable)audioEnabled enableAudioRestricted:(MeetingClientBoolean * _Nullable)enableAudioRestricted enableVideoRestricted:(MeetingClientBoolean * _Nullable)enableVideoRestricted videoEnabled:(MeetingClientBoolean * _Nullable)videoEnabled speaking:(MeetingClientBoolean * _Nullable)speaking ringing:(MeetingClientBoolean * _Nullable)ringing addedTime:(MeetingClientLong * _Nullable)addedTime audioWeight:(MeetingClientLong * _Nullable)audioWeight stagePosition:(MeetingClientLong * _Nullable)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType * _Nullable)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString *)userId_ __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetGlobalPinMembersList *)doCopyPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString * _Nullable)confId userId:(NSString * _Nullable)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType * _Nullable)viewType memberType:(MeetingClientMemberType * _Nullable)memberType role:(MeetingClientMemberRole * _Nullable)role audioEnabled:(MeetingClientBoolean * _Nullable)audioEnabled enableAudioRestricted:(MeetingClientBoolean * _Nullable)enableAudioRestricted enableVideoRestricted:(MeetingClientBoolean * _Nullable)enableVideoRestricted videoEnabled:(MeetingClientBoolean * _Nullable)videoEnabled speaking:(MeetingClientBoolean * _Nullable)speaking ringing:(MeetingClientBoolean * _Nullable)ringing addedTime:(MeetingClientLong * _Nullable)addedTime audioWeight:(MeetingClientLong * _Nullable)audioWeight stagePosition:(MeetingClientLong * _Nullable)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType * _Nullable)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString *)userId_ __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) MeetingClientLong * _Nullable addedTime __attribute__((swift_name("addedTime")));
@property (readonly) MeetingClientBoolean * _Nullable audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) MeetingClientLong * _Nullable audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString * _Nullable confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType * _Nullable deviceType __attribute__((swift_name("deviceType")));
@property (readonly) MeetingClientBoolean * _Nullable enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) MeetingClientBoolean * _Nullable enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType * _Nullable memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) MeetingClientLong * _Nullable pkId __attribute__((swift_name("pkId")));
@property (readonly) MeetingClientBoolean * _Nullable ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole * _Nullable role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) MeetingClientBoolean * _Nullable speaking __attribute__((swift_name("speaking")));
@property (readonly) MeetingClientLong * _Nullable stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@property (readonly) NSString *userId_ __attribute__((swift_name("userId_")));
@property (readonly) MeetingClientBoolean * _Nullable videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType * _Nullable viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLocalPinMembersList")))
@interface MeetingClientGetLocalPinMembersList : MeetingClientBase
- (instancetype)initWithPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString * _Nullable)confId userId:(NSString * _Nullable)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType * _Nullable)viewType memberType:(MeetingClientMemberType * _Nullable)memberType role:(MeetingClientMemberRole * _Nullable)role audioEnabled:(MeetingClientBoolean * _Nullable)audioEnabled enableAudioRestricted:(MeetingClientBoolean * _Nullable)enableAudioRestricted enableVideoRestricted:(MeetingClientBoolean * _Nullable)enableVideoRestricted videoEnabled:(MeetingClientBoolean * _Nullable)videoEnabled speaking:(MeetingClientBoolean * _Nullable)speaking ringing:(MeetingClientBoolean * _Nullable)ringing addedTime:(MeetingClientLong * _Nullable)addedTime audioWeight:(MeetingClientLong * _Nullable)audioWeight stagePosition:(MeetingClientLong * _Nullable)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType * _Nullable)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString *)userId_ __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetLocalPinMembersList *)doCopyPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString * _Nullable)confId userId:(NSString * _Nullable)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType * _Nullable)viewType memberType:(MeetingClientMemberType * _Nullable)memberType role:(MeetingClientMemberRole * _Nullable)role audioEnabled:(MeetingClientBoolean * _Nullable)audioEnabled enableAudioRestricted:(MeetingClientBoolean * _Nullable)enableAudioRestricted enableVideoRestricted:(MeetingClientBoolean * _Nullable)enableVideoRestricted videoEnabled:(MeetingClientBoolean * _Nullable)videoEnabled speaking:(MeetingClientBoolean * _Nullable)speaking ringing:(MeetingClientBoolean * _Nullable)ringing addedTime:(MeetingClientLong * _Nullable)addedTime audioWeight:(MeetingClientLong * _Nullable)audioWeight stagePosition:(MeetingClientLong * _Nullable)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType * _Nullable)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString *)userId_ __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) MeetingClientLong * _Nullable addedTime __attribute__((swift_name("addedTime")));
@property (readonly) MeetingClientBoolean * _Nullable audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) MeetingClientLong * _Nullable audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString * _Nullable confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType * _Nullable deviceType __attribute__((swift_name("deviceType")));
@property (readonly) MeetingClientBoolean * _Nullable enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) MeetingClientBoolean * _Nullable enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType * _Nullable memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) MeetingClientLong * _Nullable pkId __attribute__((swift_name("pkId")));
@property (readonly) MeetingClientBoolean * _Nullable ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole * _Nullable role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) MeetingClientBoolean * _Nullable speaking __attribute__((swift_name("speaking")));
@property (readonly) MeetingClientLong * _Nullable stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@property (readonly) NSString *userId_ __attribute__((swift_name("userId_")));
@property (readonly) MeetingClientBoolean * _Nullable videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType * _Nullable viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMeetingMemberById")))
@interface MeetingClientGetMeetingMemberById : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetMeetingMemberById *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) int64_t audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) BOOL enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) BOOL enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType *memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) BOOL ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole *role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) BOOL speaking __attribute__((swift_name("speaking")));
@property (readonly) int64_t stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString * _Nullable userId_ __attribute__((swift_name("userId_")));
@property (readonly) NSString * _Nullable userId__ __attribute__((swift_name("userId__")));
@property (readonly) NSString * _Nullable userId___ __attribute__((swift_name("userId___")));
@property (readonly) BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType *viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMeetingMembers")))
@interface MeetingClientGetMeetingMembers : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetMeetingMembers *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) int64_t audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) BOOL enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) BOOL enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType *memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) BOOL ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole *role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) BOOL speaking __attribute__((swift_name("speaking")));
@property (readonly) int64_t stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString * _Nullable userId_ __attribute__((swift_name("userId_")));
@property (readonly) NSString * _Nullable userId__ __attribute__((swift_name("userId__")));
@property (readonly) NSString * _Nullable userId___ __attribute__((swift_name("userId___")));
@property (readonly) BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType *viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMeetingMembersByIdsSortedByAudio")))
@interface MeetingClientGetMeetingMembersByIdsSortedByAudio : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetMeetingMembersByIdsSortedByAudio *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) int64_t audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) BOOL enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) BOOL enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType *memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) BOOL ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole *role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) BOOL speaking __attribute__((swift_name("speaking")));
@property (readonly) int64_t stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString * _Nullable userId_ __attribute__((swift_name("userId_")));
@property (readonly) NSString * _Nullable userId__ __attribute__((swift_name("userId__")));
@property (readonly) NSString * _Nullable userId___ __attribute__((swift_name("userId___")));
@property (readonly) BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType *viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMeetingMembersExcludingGuestsWithMemberRoleNone")))
@interface MeetingClientGetMeetingMembersExcludingGuestsWithMemberRoleNone : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetMeetingMembersExcludingGuestsWithMemberRoleNone *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) int64_t audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) BOOL enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) BOOL enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType *memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) BOOL ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole *role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) BOOL speaking __attribute__((swift_name("speaking")));
@property (readonly) int64_t stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString * _Nullable userId_ __attribute__((swift_name("userId_")));
@property (readonly) NSString * _Nullable userId__ __attribute__((swift_name("userId__")));
@property (readonly) NSString * _Nullable userId___ __attribute__((swift_name("userId___")));
@property (readonly) BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType *viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMeetingMembersExcludingStageMembers")))
@interface MeetingClientGetMeetingMembersExcludingStageMembers : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetMeetingMembersExcludingStageMembers *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) int64_t audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) BOOL enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) BOOL enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType *memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) BOOL ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole *role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) BOOL speaking __attribute__((swift_name("speaking")));
@property (readonly) int64_t stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString * _Nullable userId_ __attribute__((swift_name("userId_")));
@property (readonly) NSString * _Nullable userId__ __attribute__((swift_name("userId__")));
@property (readonly) NSString * _Nullable userId___ __attribute__((swift_name("userId___")));
@property (readonly) BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType *viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMeetingMembersExcludingStageMembersAndGuestsWithMemberRoleNone")))
@interface MeetingClientGetMeetingMembersExcludingStageMembersAndGuestsWithMemberRoleNone : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetMeetingMembersExcludingStageMembersAndGuestsWithMemberRoleNone *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) int64_t audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) BOOL enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) BOOL enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType *memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) BOOL ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole *role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) BOOL speaking __attribute__((swift_name("speaking")));
@property (readonly) int64_t stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString * _Nullable userId_ __attribute__((swift_name("userId_")));
@property (readonly) NSString * _Nullable userId__ __attribute__((swift_name("userId__")));
@property (readonly) NSString * _Nullable userId___ __attribute__((swift_name("userId___")));
@property (readonly) BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType *viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetShareRequestMembersList")))
@interface MeetingClientGetShareRequestMembersList : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId shareType:(MeetingClientShareType *)shareType addedTime:(int64_t)addedTime name:(NSString * _Nullable)name __attribute__((swift_name("init(pkId:confId:userId:shareType:addedTime:name:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetShareRequestMembersList *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId shareType:(MeetingClientShareType *)shareType addedTime:(int64_t)addedTime name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(pkId:confId:userId:shareType:addedTime:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) MeetingClientShareType *shareType __attribute__((swift_name("shareType")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetSingleUserTypeMeetingMember")))
@interface MeetingClientGetSingleUserTypeMeetingMember : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetSingleUserTypeMeetingMember *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString * _Nullable)userId_ userId__:(NSString * _Nullable)userId__ userId___:(NSString * _Nullable)userId___ __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:userId__:userId___:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) int64_t audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) BOOL enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) BOOL enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType *memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) BOOL ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole *role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) BOOL speaking __attribute__((swift_name("speaking")));
@property (readonly) int64_t stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString * _Nullable userId_ __attribute__((swift_name("userId_")));
@property (readonly) NSString * _Nullable userId__ __attribute__((swift_name("userId__")));
@property (readonly) NSString * _Nullable userId___ __attribute__((swift_name("userId___")));
@property (readonly) BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType *viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetSpeakRequestMembersList")))
@interface MeetingClientGetSpeakRequestMembersList : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime name:(NSString * _Nullable)name __attribute__((swift_name("init(pkId:confId:userId:addedTime:name:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetSpeakRequestMembersList *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(pkId:confId:userId:addedTime:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetSpotLightMembersList")))
@interface MeetingClientGetSpotLightMembersList : MeetingClientBase
- (instancetype)initWithPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString * _Nullable)confId userId:(NSString * _Nullable)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType * _Nullable)viewType memberType:(MeetingClientMemberType * _Nullable)memberType role:(MeetingClientMemberRole * _Nullable)role audioEnabled:(MeetingClientBoolean * _Nullable)audioEnabled enableAudioRestricted:(MeetingClientBoolean * _Nullable)enableAudioRestricted enableVideoRestricted:(MeetingClientBoolean * _Nullable)enableVideoRestricted videoEnabled:(MeetingClientBoolean * _Nullable)videoEnabled speaking:(MeetingClientBoolean * _Nullable)speaking ringing:(MeetingClientBoolean * _Nullable)ringing addedTime:(MeetingClientLong * _Nullable)addedTime audioWeight:(MeetingClientLong * _Nullable)audioWeight stagePosition:(MeetingClientLong * _Nullable)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType * _Nullable)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString *)userId_ __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetSpotLightMembersList *)doCopyPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString * _Nullable)confId userId:(NSString * _Nullable)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType * _Nullable)viewType memberType:(MeetingClientMemberType * _Nullable)memberType role:(MeetingClientMemberRole * _Nullable)role audioEnabled:(MeetingClientBoolean * _Nullable)audioEnabled enableAudioRestricted:(MeetingClientBoolean * _Nullable)enableAudioRestricted enableVideoRestricted:(MeetingClientBoolean * _Nullable)enableVideoRestricted videoEnabled:(MeetingClientBoolean * _Nullable)videoEnabled speaking:(MeetingClientBoolean * _Nullable)speaking ringing:(MeetingClientBoolean * _Nullable)ringing addedTime:(MeetingClientLong * _Nullable)addedTime audioWeight:(MeetingClientLong * _Nullable)audioWeight stagePosition:(MeetingClientLong * _Nullable)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType * _Nullable)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId userId_:(NSString *)userId_ __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:userId_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) MeetingClientLong * _Nullable addedTime __attribute__((swift_name("addedTime")));
@property (readonly) MeetingClientBoolean * _Nullable audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) MeetingClientLong * _Nullable audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString * _Nullable confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType * _Nullable deviceType __attribute__((swift_name("deviceType")));
@property (readonly) MeetingClientBoolean * _Nullable enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) MeetingClientBoolean * _Nullable enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType * _Nullable memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) MeetingClientLong * _Nullable pkId __attribute__((swift_name("pkId")));
@property (readonly) MeetingClientBoolean * _Nullable ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole * _Nullable role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) MeetingClientBoolean * _Nullable speaking __attribute__((swift_name("speaking")));
@property (readonly) MeetingClientLong * _Nullable stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@property (readonly) NSString *userId_ __attribute__((swift_name("userId_")));
@property (readonly) MeetingClientBoolean * _Nullable videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType * _Nullable viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetStreamIdsForGrid")))
@interface MeetingClientGetStreamIdsForGrid : MeetingClientBase
- (instancetype)initWithUserId:(NSString *)userId gridStreamId:(NSString * _Nullable)gridStreamId __attribute__((swift_name("init(userId:gridStreamId:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetStreamIdsForGrid *)doCopyUserId:(NSString *)userId gridStreamId:(NSString * _Nullable)gridStreamId __attribute__((swift_name("doCopy(userId:gridStreamId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetWaitingRequestMembersList")))
@interface MeetingClientGetWaitingRequestMembersList : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId requestType:(MeetingClientRequestType *)requestType addedTime:(int64_t)addedTime name:(NSString * _Nullable)name __attribute__((swift_name("init(pkId:confId:userId:requestType:addedTime:name:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGetWaitingRequestMembersList *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId requestType:(MeetingClientRequestType *)requestType addedTime:(int64_t)addedTime name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(pkId:confId:userId:requestType:addedTime:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) MeetingClientRequestType *requestType __attribute__((swift_name("requestType")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlobalPinMemberEntity")))
@interface MeetingClientGlobalPinMemberEntity : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("init(pkId:confId:userId:addedTime:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGlobalPinMemberEntity *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("doCopy(pkId:confId:userId:addedTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((swift_name("RuntimeBaseTransacterImpl")))
@interface MeetingClientRuntimeBaseTransacterImpl : MeetingClientBase
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)createArgumentsCount:(int32_t)count __attribute__((swift_name("createArguments(count:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyQueriesIdentifier:(int32_t)identifier tableProvider:(void (^)(MeetingClientKotlinUnit *(^)(NSString *)))tableProvider __attribute__((swift_name("notifyQueries(identifier:tableProvider:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)postTransactionCleanupTransaction:(MeetingClientRuntimeTransacterTransaction *)transaction enclosing:(MeetingClientRuntimeTransacterTransaction * _Nullable)enclosing thrownException:(MeetingClientKotlinThrowable * _Nullable)thrownException returnValue:(id _Nullable)returnValue __attribute__((swift_name("postTransactionCleanup(transaction:enclosing:thrownException:returnValue:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MeetingClientRuntimeSqlDriver> driver __attribute__((swift_name("driver")));
@end

__attribute__((swift_name("RuntimeTransacterBase")))
@protocol MeetingClientRuntimeTransacterBase
@required
@end

__attribute__((swift_name("RuntimeTransacter")))
@protocol MeetingClientRuntimeTransacter <MeetingClientRuntimeTransacterBase>
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<MeetingClientRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<MeetingClientRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((swift_name("RuntimeTransacterImpl")))
@interface MeetingClientRuntimeTransacterImpl : MeetingClientRuntimeBaseTransacterImpl <MeetingClientRuntimeTransacter>
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<MeetingClientRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<MeetingClientRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlobalPinMemberEntityQueries")))
@interface MeetingClientGlobalPinMemberEntityQueries : MeetingClientRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver MeetingsMemberEntityAdapter:(MeetingClientMeetingsMemberEntityAdapter *)MeetingsMemberEntityAdapter __attribute__((swift_name("init(driver:MeetingsMemberEntityAdapter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MeetingClientRuntimeQueryResult>)clearGlobalPinMembers __attribute__((swift_name("clearGlobalPinMembers()")));
- (id<MeetingClientRuntimeQueryResult>)deleteGlobalPinMemberConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("deleteGlobalPinMember(confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)deleteGlobalPinMembersConfId:(NSString *)confId excludedUserIds:(id)excludedUserIds __attribute__((swift_name("deleteGlobalPinMembers(confId:excludedUserIds:)")));
- (MeetingClientRuntimeQuery<MeetingClientLong *> *)getGlobalPinMembersCountConfId:(NSString *)confId __attribute__((swift_name("getGlobalPinMembersCount(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetGlobalPinMembersList *> *)getGlobalPinMembersListConfId:(NSString *)confId __attribute__((swift_name("getGlobalPinMembersList(confId:)")));
- (MeetingClientRuntimeQuery<id> *)getGlobalPinMembersListConfId:(NSString *)confId mapper:(id (^)(MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, MeetingClientViewType * _Nullable, MeetingClientMemberType * _Nullable, MeetingClientMemberRole * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString *))mapper __attribute__((swift_name("getGlobalPinMembersList(confId:mapper:)")));
- (id<MeetingClientRuntimeQueryResult>)insertOrReplaceGlobalPinMemberPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("insertOrReplaceGlobalPinMember(pkId:confId:userId:addedTime:)")));
- (MeetingClientRuntimeQuery<MeetingClientBoolean *> *)isGlobalPinMemberAvailableConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("isGlobalPinMemberAvailable(confId:userId:)")));
@end

__attribute__((swift_name("Platform")))
@protocol MeetingClientPlatform
@required
- (NSString *)userAgentAppName:(NSString *)appName __attribute__((swift_name("userAgent(appName:)")));
@property (readonly) NSString *osCode __attribute__((swift_name("osCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface MeetingClientIOSPlatform : MeetingClientBase <MeetingClientPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)userAgentAppName:(NSString *)appName __attribute__((swift_name("userAgent(appName:)")));
@property (readonly) NSString *osCode __attribute__((swift_name("osCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalPinMemberEntity")))
@interface MeetingClientLocalPinMemberEntity : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("init(pkId:confId:userId:addedTime:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientLocalPinMemberEntity *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("doCopy(pkId:confId:userId:addedTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalPinMemberEntityQueries")))
@interface MeetingClientLocalPinMemberEntityQueries : MeetingClientRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver MeetingsMemberEntityAdapter:(MeetingClientMeetingsMemberEntityAdapter *)MeetingsMemberEntityAdapter __attribute__((swift_name("init(driver:MeetingsMemberEntityAdapter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MeetingClientRuntimeQueryResult>)clearLocalPinMembers __attribute__((swift_name("clearLocalPinMembers()")));
- (id<MeetingClientRuntimeQueryResult>)deleteLocalPinMemberConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("deleteLocalPinMember(confId:userId:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetLocalPinMembersList *> *)getLocalPinMembersListConfId:(NSString *)confId __attribute__((swift_name("getLocalPinMembersList(confId:)")));
- (MeetingClientRuntimeQuery<id> *)getLocalPinMembersListConfId:(NSString *)confId mapper:(id (^)(MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, MeetingClientViewType * _Nullable, MeetingClientMemberType * _Nullable, MeetingClientMemberRole * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString *))mapper __attribute__((swift_name("getLocalPinMembersList(confId:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientLong *> *)getLocalPinnedMemberCountConfId:(NSString *)confId __attribute__((swift_name("getLocalPinnedMemberCount(confId:)")));
- (id<MeetingClientRuntimeQueryResult>)insertOrReplaceLocalPinMemberPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("insertOrReplaceLocalPinMember(pkId:confId:userId:addedTime:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingsMemberEntity")))
@interface MeetingClientMeetingsMemberEntity : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId __attribute__((swift_name("init(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientMeetingsMemberEntity *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue sourceId:(NSString * _Nullable)sourceId __attribute__((swift_name("doCopy(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:sourceId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientLong * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) int64_t audioWeight __attribute__((swift_name("audioWeight")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) MeetingClientDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) BOOL enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) BOOL enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) MeetingClientLong * _Nullable gridPageNumber __attribute__((swift_name("gridPageNumber")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientMemberType *memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientLong * _Nullable pinnedSeq __attribute__((swift_name("pinnedSeq")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) BOOL ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole *role __attribute__((swift_name("role")));
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));
@property (readonly) BOOL speaking __attribute__((swift_name("speaking")));
@property (readonly) int64_t stagePosition __attribute__((swift_name("stagePosition")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType *viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingsMemberEntity.Adapter")))
@interface MeetingClientMeetingsMemberEntityAdapter : MeetingClientBase
- (instancetype)initWithViewTypeAdapter:(id<MeetingClientRuntimeColumnAdapter>)viewTypeAdapter memberTypeAdapter:(id<MeetingClientRuntimeColumnAdapter>)memberTypeAdapter roleAdapter:(id<MeetingClientRuntimeColumnAdapter>)roleAdapter deviceTypeAdapter:(id<MeetingClientRuntimeColumnAdapter>)deviceTypeAdapter __attribute__((swift_name("init(viewTypeAdapter:memberTypeAdapter:roleAdapter:deviceTypeAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MeetingClientRuntimeColumnAdapter> deviceTypeAdapter __attribute__((swift_name("deviceTypeAdapter")));
@property (readonly) id<MeetingClientRuntimeColumnAdapter> memberTypeAdapter __attribute__((swift_name("memberTypeAdapter")));
@property (readonly) id<MeetingClientRuntimeColumnAdapter> roleAdapter __attribute__((swift_name("roleAdapter")));
@property (readonly) id<MeetingClientRuntimeColumnAdapter> viewTypeAdapter __attribute__((swift_name("viewTypeAdapter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingsMemberEntityQueries")))
@interface MeetingClientMeetingsMemberEntityQueries : MeetingClientRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver MeetingsMemberEntityAdapter:(MeetingClientMeetingsMemberEntityAdapter *)MeetingsMemberEntityAdapter __attribute__((swift_name("init(driver:MeetingsMemberEntityAdapter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MeetingClientRuntimeQueryResult>)changeInviteeAsParticipantConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("changeInviteeAsParticipant(confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)changeInviteeAsSecondaryAdminConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("changeInviteeAsSecondaryAdmin(confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)changeInviteesAsParticipantsConfId:(NSString *)confId userIds:(id)userIds __attribute__((swift_name("changeInviteesAsParticipants(confId:userIds:)")));
- (id<MeetingClientRuntimeQueryResult>)changeMemberRolesAsSecondaryAdminsConfId:(NSString *)confId userIds:(id)userIds __attribute__((swift_name("changeMemberRolesAsSecondaryAdmins(confId:userIds:)")));
- (id<MeetingClientRuntimeQueryResult>)changeSecondaryAdminsAsParticipantsConfId:(NSString *)confId userIds:(id)userIds __attribute__((swift_name("changeSecondaryAdminsAsParticipants(confId:userIds:)")));
- (id<MeetingClientRuntimeQueryResult>)clearMeetingMembers __attribute__((swift_name("clearMeetingMembers()")));
- (id<MeetingClientRuntimeQueryResult>)deleteMeetingMemberConfId:(NSString *)confId userId:(NSString *)userId viewType:(MeetingClientViewType *)viewType __attribute__((swift_name("deleteMeetingMember(confId:userId:viewType:)")));
- (id<MeetingClientRuntimeQueryResult>)deleteMeetingMemberForViewTypeConfId:(NSString *)confId viewType:(MeetingClientViewType *)viewType __attribute__((swift_name("deleteMeetingMemberForViewType(confId:viewType:)")));
- (id<MeetingClientRuntimeQueryResult>)disableMicStatusForAllConfId:(NSString *)confId excludedUserIds:(id)excludedUserIds __attribute__((swift_name("disableMicStatusForAll(confId:excludedUserIds:)")));
- (MeetingClientRuntimeQuery<NSString *> *)getAdminsUserIdsConfId:(NSString *)confId __attribute__((swift_name("getAdminsUserIds(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetAssignPrimaryAdminMembersList *> *)getAssignPrimaryAdminMembersListConfId:(NSString *)confId __attribute__((swift_name("getAssignPrimaryAdminMembersList(confId:)")));
- (MeetingClientRuntimeQuery<id> *)getAssignPrimaryAdminMembersListConfId:(NSString *)confId mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getAssignPrimaryAdminMembersList(confId:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientBoolean *> *)getAudioStatusByIdConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("getAudioStatusById(confId:userId:)")));
- (MeetingClientRuntimeQuery<NSString *> *)getEnableAudioRestrictedMembersIdsConfId:(NSString *)confId __attribute__((swift_name("getEnableAudioRestrictedMembersIds(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientMeetingsMemberEntity *> *)getGridMembersConfId:(NSString *)confId __attribute__((swift_name("getGridMembers(confId:)")));
- (MeetingClientRuntimeQuery<id> *)getGridMembersConfId:(NSString *)confId mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getGridMembers(confId:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetMeetingMemberById *> *)getMeetingMemberByIdConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("getMeetingMemberById(confId:userId:)")));
- (MeetingClientRuntimeQuery<id> *)getMeetingMemberByIdConfId:(NSString *)confId userId:(NSString *)userId mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getMeetingMemberById(confId:userId:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientMeetingsMemberEntity *> *)getMeetingMemberByIdIfOutOfStageConfId:(NSString *)confId userId:(NSString *)userId speakerCount:(int64_t)speakerCount __attribute__((swift_name("getMeetingMemberByIdIfOutOfStage(confId:userId:speakerCount:)")));
- (MeetingClientRuntimeQuery<id> *)getMeetingMemberByIdIfOutOfStageConfId:(NSString *)confId userId:(NSString *)userId speakerCount:(int64_t)speakerCount mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getMeetingMemberByIdIfOutOfStage(confId:userId:speakerCount:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetMeetingMembers *> *)getMeetingMembersConfId:(NSString *)confId searchQuery:(NSString *)searchQuery __attribute__((swift_name("getMeetingMembers(confId:searchQuery:)")));
- (MeetingClientRuntimeQuery<id> *)getMeetingMembersConfId:(NSString *)confId searchQuery:(NSString *)searchQuery mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getMeetingMembers(confId:searchQuery:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetMeetingMembersByIdsSortedByAudio *> *)getMeetingMembersByIdsSortedByAudioConfId:(NSString *)confId userIds:(id)userIds __attribute__((swift_name("getMeetingMembersByIdsSortedByAudio(confId:userIds:)")));
- (MeetingClientRuntimeQuery<id> *)getMeetingMembersByIdsSortedByAudioConfId:(NSString *)confId userIds:(id)userIds mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getMeetingMembersByIdsSortedByAudio(confId:userIds:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientLong *> *)getMeetingMembersCountConfId:(NSString *)confId __attribute__((swift_name("getMeetingMembersCount(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientLong *> *)getMeetingMembersCountExcludingGuestsWithMemberRoleNoneConfId:(NSString *)confId __attribute__((swift_name("getMeetingMembersCountExcludingGuestsWithMemberRoleNone(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientLong *> *)getMeetingMembersCountExcludingMemberRoleNoneConfId:(NSString *)confId __attribute__((swift_name("getMeetingMembersCountExcludingMemberRoleNone(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetMeetingMembersExcludingGuestsWithMemberRoleNone *> *)getMeetingMembersExcludingGuestsWithMemberRoleNoneConfId:(NSString *)confId searchQuery:(NSString *)searchQuery __attribute__((swift_name("getMeetingMembersExcludingGuestsWithMemberRoleNone(confId:searchQuery:)")));
- (MeetingClientRuntimeQuery<id> *)getMeetingMembersExcludingGuestsWithMemberRoleNoneConfId:(NSString *)confId searchQuery:(NSString *)searchQuery mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getMeetingMembersExcludingGuestsWithMemberRoleNone(confId:searchQuery:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetMeetingMembersExcludingStageMembers *> *)getMeetingMembersExcludingStageMembersConfId:(NSString *)confId speakerCount:(int64_t)speakerCount searchQuery:(NSString *)searchQuery __attribute__((swift_name("getMeetingMembersExcludingStageMembers(confId:speakerCount:searchQuery:)")));
- (MeetingClientRuntimeQuery<id> *)getMeetingMembersExcludingStageMembersConfId:(NSString *)confId speakerCount:(int64_t)speakerCount searchQuery:(NSString *)searchQuery mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getMeetingMembersExcludingStageMembers(confId:speakerCount:searchQuery:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetMeetingMembersExcludingStageMembersAndGuestsWithMemberRoleNone *> *)getMeetingMembersExcludingStageMembersAndGuestsWithMemberRoleNoneConfId:(NSString *)confId speakerCount:(int64_t)speakerCount searchQuery:(NSString *)searchQuery __attribute__((swift_name("getMeetingMembersExcludingStageMembersAndGuestsWithMemberRoleNone(confId:speakerCount:searchQuery:)")));
- (MeetingClientRuntimeQuery<id> *)getMeetingMembersExcludingStageMembersAndGuestsWithMemberRoleNoneConfId:(NSString *)confId speakerCount:(int64_t)speakerCount searchQuery:(NSString *)searchQuery mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getMeetingMembersExcludingStageMembersAndGuestsWithMemberRoleNone(confId:speakerCount:searchQuery:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientMemberType *> *)getMemberTypeByIdConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("getMemberTypeById(confId:userId:)")));
- (MeetingClientRuntimeQuery<MeetingClientBoolean *> *)getMembersAudioStatusExcludingAdminsConfId:(NSString *)confId __attribute__((swift_name("getMembersAudioStatusExcludingAdmins(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientMeetingsMemberEntity *> *)getPageWiseGridMembersConfId:(NSString *)confId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber __attribute__((swift_name("getPageWiseGridMembers(confId:gridPageNumber:)")));
- (MeetingClientRuntimeQuery<id> *)getPageWiseGridMembersConfId:(NSString *)confId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getPageWiseGridMembers(confId:gridPageNumber:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientMeetingsMemberEntity *> *)getScreenShareConfId:(NSString *)confId __attribute__((swift_name("getScreenShare(confId:)")));
- (MeetingClientRuntimeQuery<id> *)getScreenShareConfId:(NSString *)confId mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getScreenShare(confId:mapper:)")));
- (MeetingClientRuntimeQuery<NSString *> *)getSecondaryAdminUserIdsConfId:(NSString *)confId __attribute__((swift_name("getSecondaryAdminUserIds(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetSingleUserTypeMeetingMember *> *)getSingleUserTypeMeetingMemberConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("getSingleUserTypeMeetingMember(confId:userId:)")));
- (MeetingClientRuntimeQuery<id> *)getSingleUserTypeMeetingMemberConfId:(NSString *)confId userId:(NSString *)userId mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getSingleUserTypeMeetingMember(confId:userId:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientMemberRole *> *)getSingleUserTypeMeetingMemberRoleConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("getSingleUserTypeMeetingMemberRole(confId:userId:)")));
- (MeetingClientRuntimeQuery<NSString *> *)getSortedUserIdsForGridConfId:(NSString *)confId __attribute__((swift_name("getSortedUserIdsForGrid(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientMeetingsMemberEntity *> *)getStageMembersConfId:(NSString *)confId speakerCount:(int64_t)speakerCount __attribute__((swift_name("getStageMembers(confId:speakerCount:)")));
- (MeetingClientRuntimeQuery<id> *)getStageMembersConfId:(NSString *)confId speakerCount:(int64_t)speakerCount mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, NSString * _Nullable, MeetingClientViewType *, MeetingClientMemberType *, MeetingClientMemberRole *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientBoolean *, MeetingClientLong *, MeetingClientLong *, MeetingClientLong *, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType *, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getStageMembers(confId:speakerCount:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetStreamIdsForGrid *> *)getStreamIdsForGridConfId:(NSString *)confId userIds:(id)userIds __attribute__((swift_name("getStreamIdsForGrid(confId:userIds:)")));
- (MeetingClientRuntimeQuery<id> *)getStreamIdsForGridConfId:(NSString *)confId userIds:(id)userIds mapper:(id (^)(NSString *, NSString * _Nullable))mapper __attribute__((swift_name("getStreamIdsForGrid(confId:userIds:mapper:)")));
- (MeetingClientRuntimeQuery<MeetingClientBoolean *> *)getVideoStatusByIdConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("getVideoStatusById(confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)insertOrIgnoreMeetingMemberPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue __attribute__((swift_name("insertOrIgnoreMeetingMember(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:)")));
- (id<MeetingClientRuntimeQueryResult>)insertOrReplaceMeetingMemberPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString *)confId userId:(NSString *)userId name:(NSString * _Nullable)name viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking ringing:(BOOL)ringing addedTime:(int64_t)addedTime audioWeight:(int64_t)audioWeight stagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId gridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime pinnedSeq:(MeetingClientLong * _Nullable)pinnedSeq deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue __attribute__((swift_name("insertOrReplaceMeetingMember(pkId:confId:userId:name:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:ringing:addedTime:audioWeight:stagePosition:stageStreamId:gridStreamId:gridPageNumber:firstJoinedTime:joinedTime:pinnedSeq:deviceType:aclName:aclValue:)")));
- (MeetingClientRuntimeQuery<MeetingClientBoolean *> *)isAssignPrimaryAdminMembersAvailableConfId:(NSString *)confId __attribute__((swift_name("isAssignPrimaryAdminMembersAvailable(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientBoolean *> *)isMeetingsMemberRingingConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("isMeetingsMemberRinging(confId:userId:)")));
- (MeetingClientRuntimeQuery<MeetingClientBoolean *> *)isMemberAlreadyParticipantConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("isMemberAlreadyParticipant(confId:userId:)")));
- (MeetingClientRuntimeQuery<MeetingClientBoolean *> *)isMemberUserViewTypeAvailableConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("isMemberUserViewTypeAvailable(confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)resetGridPageDetailsConfId:(NSString *)confId excludedUserIds:(id)excludedUserIds __attribute__((swift_name("resetGridPageDetails(confId:excludedUserIds:)")));
- (id<MeetingClientRuntimeQueryResult>)resetSpeakingConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("resetSpeaking(confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)resetStagePositionConfId:(NSString *)confId excludedUserIds:(id)excludedUserIds __attribute__((swift_name("resetStagePosition(confId:excludedUserIds:)")));
- (id<MeetingClientRuntimeQueryResult>)updateAudioWeightAndSpeakingConfId:(NSString *)confId userIds:(id)userIds __attribute__((swift_name("updateAudioWeightAndSpeaking(confId:userIds:)")));
- (id<MeetingClientRuntimeQueryResult>)updateCameraStatusVideoEnabled:(BOOL)videoEnabled confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateCameraStatus(videoEnabled:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateEnableAudioRestrictedStatusEnableAudioRestricted:(BOOL)enableAudioRestricted confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateEnableAudioRestrictedStatus(enableAudioRestricted:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateEnableAudioRestrictedStatusForAllEnableAudioRestricted:(BOOL)enableAudioRestricted confId:(NSString *)confId excludedUserIds:(id)excludedUserIds __attribute__((swift_name("updateEnableAudioRestrictedStatusForAll(enableAudioRestricted:confId:excludedUserIds:)")));
- (id<MeetingClientRuntimeQueryResult>)updateEnableVideoRestrictedStatusEnableVideoRestricted:(BOOL)enableVideoRestricted confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateEnableVideoRestrictedStatus(enableVideoRestricted:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateEnableVideoRestrictedStatusExclusiveEnableVideoRestricted:(BOOL)enableVideoRestricted confId:(NSString *)confId userIds:(id)userIds __attribute__((swift_name("updateEnableVideoRestrictedStatusExclusive(enableVideoRestricted:confId:userIds:)")));
- (id<MeetingClientRuntimeQueryResult>)updateEnableVideoRestrictedStatusInclusiveEnableVideoRestricted:(BOOL)enableVideoRestricted confId:(NSString *)confId userIds:(id)userIds __attribute__((swift_name("updateEnableVideoRestrictedStatusInclusive(enableVideoRestricted:confId:userIds:)")));
- (id<MeetingClientRuntimeQueryResult>)updateGridPageDetailsGridPageNumber:(MeetingClientLong * _Nullable)gridPageNumber gridStreamId:(NSString * _Nullable)gridStreamId confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateGridPageDetails(gridPageNumber:gridStreamId:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateMemberRoleRole:(MeetingClientMemberRole *)role confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateMemberRole(role:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateMemberTypeMemberType:(MeetingClientMemberType *)memberType confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateMemberType(memberType:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateMemberTypeAndDeviceTypeMemberType:(MeetingClientMemberType *)memberType deviceType:(MeetingClientDeviceType *)deviceType confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateMemberTypeAndDeviceType(memberType:deviceType:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateMemberTypeMemberRoleAndJoinedTimesMemberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role enableVideoRestricted:(BOOL)enableVideoRestricted firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateMemberTypeMemberRoleAndJoinedTimes(memberType:role:enableVideoRestricted:firstJoinedTime:joinedTime:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateMemberTypeMicCamStatusRoleAndJoinedTimesMemberType:(MeetingClientMemberType *)memberType audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled role:(MeetingClientMemberRole *)role firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateMemberTypeMicCamStatusRoleAndJoinedTimes(memberType:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:role:firstJoinedTime:joinedTime:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateMemberTypeMicCamStatusRoleDeviceTypeAndJoinedTimesMemberType:(MeetingClientMemberType *)memberType audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled role:(MeetingClientMemberRole *)role deviceType:(MeetingClientDeviceType *)deviceType firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateMemberTypeMicCamStatusRoleDeviceTypeAndJoinedTimes(memberType:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:role:deviceType:firstJoinedTime:joinedTime:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateMicStatusAudioEnabled:(BOOL)audioEnabled confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateMicStatus(audioEnabled:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateNameAndMemberTypeMemberType:(MeetingClientMemberType *)memberType name:(NSString * _Nullable)name confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateNameAndMemberType(memberType:name:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateNameMemberTypeAndDeviceTypeMemberType:(MeetingClientMemberType *)memberType name:(NSString * _Nullable)name deviceType:(MeetingClientDeviceType *)deviceType confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateNameMemberTypeAndDeviceType(memberType:name:deviceType:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateNameMemberTypeDeviceTypeAndAclMemberType:(MeetingClientMemberType *)memberType name:(NSString * _Nullable)name deviceType:(MeetingClientDeviceType *)deviceType aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateNameMemberTypeDeviceTypeAndAcl(memberType:name:deviceType:aclName:aclValue:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateNameMemberTypeMemberRoleAndJoinedTimesMemberType:(MeetingClientMemberType *)memberType name:(NSString * _Nullable)name role:(MeetingClientMemberRole *)role enableVideoRestricted:(BOOL)enableVideoRestricted firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateNameMemberTypeMemberRoleAndJoinedTimes(memberType:name:role:enableVideoRestricted:firstJoinedTime:joinedTime:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateNameMemberTypeMicCamStatusRoleAndJoinedTimesName:(NSString * _Nullable)name memberType:(MeetingClientMemberType *)memberType audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled role:(MeetingClientMemberRole *)role firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateNameMemberTypeMicCamStatusRoleAndJoinedTimes(name:memberType:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:role:firstJoinedTime:joinedTime:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateNameMemberTypeMicCamStatusRoleDeviceTypeAndJoinedTimesName:(NSString * _Nullable)name memberType:(MeetingClientMemberType *)memberType audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled role:(MeetingClientMemberRole *)role deviceType:(MeetingClientDeviceType *)deviceType firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateNameMemberTypeMicCamStatusRoleDeviceTypeAndJoinedTimes(name:memberType:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:role:deviceType:firstJoinedTime:joinedTime:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateNameMemberTypeMicCamStatusRoleDeviceTypeJoinedTimesAndAclName:(NSString * _Nullable)name memberType:(MeetingClientMemberType *)memberType audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled role:(MeetingClientMemberRole *)role deviceType:(MeetingClientDeviceType *)deviceType firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientLong * _Nullable)aclValue confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateNameMemberTypeMicCamStatusRoleDeviceTypeJoinedTimesAndAcl(name:memberType:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:role:deviceType:firstJoinedTime:joinedTime:aclName:aclValue:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateRingingAllStatusIsRinging:(BOOL)isRinging confId:(NSString *)confId excludedUserIds:(id)excludedUserIds __attribute__((swift_name("updateRingingAllStatus(isRinging:confId:excludedUserIds:)")));
- (id<MeetingClientRuntimeQueryResult>)updateRingingStatusIsRinging:(BOOL)isRinging confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateRingingStatus(isRinging:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateScreenShareStreamIdStreamId:(NSString * _Nullable)streamId confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateScreenShareStreamId(streamId:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateSourceIdSourceId:(NSString * _Nullable)sourceId confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateSourceId(sourceId:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateSourceIdRoleJoinedTimeRole:(MeetingClientMemberRole *)role joinedTime:(MeetingClientLong * _Nullable)joinedTime sourceId:(NSString * _Nullable)sourceId confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateSourceIdRoleJoinedTime(role:joinedTime:sourceId:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateStageStreamIdsPositionStagePosition:(int64_t)stagePosition stageStreamId:(NSString * _Nullable)stageStreamId confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("updateStageStreamIdsPosition(stagePosition:stageStreamId:confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)updateStopRingingAllStatusConfId:(NSString *)confId __attribute__((swift_name("updateStopRingingAllStatus(confId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingsMemberRingLogEntity")))
@interface MeetingClientMeetingsMemberRingLogEntity : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId ringing:(BOOL)ringing messageTime:(int64_t)messageTime __attribute__((swift_name("init(pkId:confId:userId:ringing:messageTime:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientMeetingsMemberRingLogEntity *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId ringing:(BOOL)ringing messageTime:(int64_t)messageTime __attribute__((swift_name("doCopy(pkId:confId:userId:ringing:messageTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) int64_t messageTime __attribute__((swift_name("messageTime")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) BOOL ringing __attribute__((swift_name("ringing")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingsMemberRingLogEntityQueries")))
@interface MeetingClientMeetingsMemberRingLogEntityQueries : MeetingClientRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (id<MeetingClientRuntimeQueryResult>)clearMeetingsMemberRingLogs __attribute__((swift_name("clearMeetingsMemberRingLogs()")));
- (id<MeetingClientRuntimeQueryResult>)insertOrIgnoreMeetingMemberRingLogPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString *)confId userId:(NSString *)userId ringing:(BOOL)ringing messageTime:(int64_t)messageTime __attribute__((swift_name("insertOrIgnoreMeetingMemberRingLog(pkId:confId:userId:ringing:messageTime:)")));
- (MeetingClientRuntimeQuery<MeetingClientLong *> *)isValidRingLogEntryMessageTime:(int64_t)messageTime confId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("isValidRingLogEntry(messageTime:confId:userId:)")));
@end

__attribute__((swift_name("RTCPMeetingsDatabase")))
@protocol MeetingClientRTCPMeetingsDatabase <MeetingClientRuntimeTransacter>
@required
@property (readonly) MeetingClientGlobalPinMemberEntityQueries *globalPinMemberEntityQueries __attribute__((swift_name("globalPinMemberEntityQueries")));
@property (readonly) MeetingClientLocalPinMemberEntityQueries *localPinMemberEntityQueries __attribute__((swift_name("localPinMemberEntityQueries")));
@property (readonly) MeetingClientMeetingsMemberEntityQueries *meetingsMemberEntityQueries __attribute__((swift_name("meetingsMemberEntityQueries")));
@property (readonly) MeetingClientMeetingsMemberRingLogEntityQueries *meetingsMemberRingLogEntityQueries __attribute__((swift_name("meetingsMemberRingLogEntityQueries")));
@property (readonly) MeetingClientShareRequestMemberEntityQueries *shareRequestMemberEntityQueries __attribute__((swift_name("shareRequestMemberEntityQueries")));
@property (readonly) MeetingClientSpeakRequestMemberEntityQueries *speakRequestMemberEntityQueries __attribute__((swift_name("speakRequestMemberEntityQueries")));
@property (readonly) MeetingClientSpotLightMemberEntityQueries *spotLightMemberEntityQueries __attribute__((swift_name("spotLightMemberEntityQueries")));
@property (readonly) MeetingClientWaitingRequestMemberEntityQueries *waitingRequestMemberEntityQueries __attribute__((swift_name("waitingRequestMemberEntityQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsDatabaseCompanion")))
@interface MeetingClientRTCPMeetingsDatabaseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientRTCPMeetingsDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientRTCPMeetingsDatabase>)invokeDriver:(id<MeetingClientRuntimeSqlDriver>)driver MeetingsMemberEntityAdapter:(MeetingClientMeetingsMemberEntityAdapter *)MeetingsMemberEntityAdapter ShareRequestMemberEntityAdapter:(MeetingClientShareRequestMemberEntityAdapter *)ShareRequestMemberEntityAdapter WaitingRequestMemberEntityAdapter:(MeetingClientWaitingRequestMemberEntityAdapter *)WaitingRequestMemberEntityAdapter __attribute__((swift_name("invoke(driver:MeetingsMemberEntityAdapter:ShareRequestMemberEntityAdapter:WaitingRequestMemberEntityAdapter:)")));
@property (readonly) id<MeetingClientRuntimeSqlSchema> Schema __attribute__((swift_name("Schema")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareRequestMemberEntity")))
@interface MeetingClientShareRequestMemberEntity : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId shareType:(MeetingClientShareType *)shareType addedTime:(int64_t)addedTime __attribute__((swift_name("init(pkId:confId:userId:shareType:addedTime:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientShareRequestMemberEntity *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId shareType:(MeetingClientShareType *)shareType addedTime:(int64_t)addedTime __attribute__((swift_name("doCopy(pkId:confId:userId:shareType:addedTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) MeetingClientShareType *shareType __attribute__((swift_name("shareType")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareRequestMemberEntity.Adapter")))
@interface MeetingClientShareRequestMemberEntityAdapter : MeetingClientBase
- (instancetype)initWithShareTypeAdapter:(id<MeetingClientRuntimeColumnAdapter>)shareTypeAdapter __attribute__((swift_name("init(shareTypeAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MeetingClientRuntimeColumnAdapter> shareTypeAdapter __attribute__((swift_name("shareTypeAdapter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareRequestMemberEntityQueries")))
@interface MeetingClientShareRequestMemberEntityQueries : MeetingClientRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver ShareRequestMemberEntityAdapter:(MeetingClientShareRequestMemberEntityAdapter *)ShareRequestMemberEntityAdapter __attribute__((swift_name("init(driver:ShareRequestMemberEntityAdapter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MeetingClientRuntimeQueryResult>)clearShareRequestMembers __attribute__((swift_name("clearShareRequestMembers()")));
- (id<MeetingClientRuntimeQueryResult>)deleteShareRequestConfId:(NSString *)confId userId:(NSString *)userId shareType:(MeetingClientShareType *)shareType __attribute__((swift_name("deleteShareRequest(confId:userId:shareType:)")));
- (MeetingClientRuntimeQuery<MeetingClientLong *> *)getShareRequestMembersCountConfId:(NSString *)confId shareType:(MeetingClientShareType *)shareType __attribute__((swift_name("getShareRequestMembersCount(confId:shareType:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetShareRequestMembersList *> *)getShareRequestMembersListConfId:(NSString *)confId shareType:(MeetingClientShareType *)shareType __attribute__((swift_name("getShareRequestMembersList(confId:shareType:)")));
- (MeetingClientRuntimeQuery<id> *)getShareRequestMembersListConfId:(NSString *)confId shareType:(MeetingClientShareType *)shareType mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, MeetingClientShareType *, MeetingClientLong *, NSString * _Nullable))mapper __attribute__((swift_name("getShareRequestMembersList(confId:shareType:mapper:)")));
- (id<MeetingClientRuntimeQueryResult>)insertOrReplaceShareRequestMemberPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString *)confId userId:(NSString *)userId shareType:(MeetingClientShareType *)shareType addedTime:(int64_t)addedTime __attribute__((swift_name("insertOrReplaceShareRequestMember(pkId:confId:userId:shareType:addedTime:)")));
- (MeetingClientRuntimeQuery<MeetingClientBoolean *> *)isMemberRequestedToShareConfId:(NSString *)confId userId:(NSString *)userId shareType:(MeetingClientShareType *)shareType __attribute__((swift_name("isMemberRequestedToShare(confId:userId:shareType:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpeakRequestMemberEntity")))
@interface MeetingClientSpeakRequestMemberEntity : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("init(pkId:confId:userId:addedTime:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientSpeakRequestMemberEntity *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("doCopy(pkId:confId:userId:addedTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpeakRequestMemberEntityQueries")))
@interface MeetingClientSpeakRequestMemberEntityQueries : MeetingClientRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (id<MeetingClientRuntimeQueryResult>)clearSpeakRequestMembers __attribute__((swift_name("clearSpeakRequestMembers()")));
- (id<MeetingClientRuntimeQueryResult>)deleteSpeakRequestConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("deleteSpeakRequest(confId:userId:)")));
- (MeetingClientRuntimeQuery<MeetingClientLong *> *)getSpeakRequestMembersCountConfId:(NSString *)confId __attribute__((swift_name("getSpeakRequestMembersCount(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetSpeakRequestMembersList *> *)getSpeakRequestMembersListConfId:(NSString *)confId __attribute__((swift_name("getSpeakRequestMembersList(confId:)")));
- (MeetingClientRuntimeQuery<id> *)getSpeakRequestMembersListConfId:(NSString *)confId mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, MeetingClientLong *, NSString * _Nullable))mapper __attribute__((swift_name("getSpeakRequestMembersList(confId:mapper:)")));
- (id<MeetingClientRuntimeQueryResult>)insertOrReplaceSpeakRequestMemberPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("insertOrReplaceSpeakRequestMember(pkId:confId:userId:addedTime:)")));
- (MeetingClientRuntimeQuery<MeetingClientBoolean *> *)isMemberRequestedToSpeakConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("isMemberRequestedToSpeak(confId:userId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotLightMemberEntity")))
@interface MeetingClientSpotLightMemberEntity : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("init(pkId:confId:userId:addedTime:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientSpotLightMemberEntity *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("doCopy(pkId:confId:userId:addedTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotLightMemberEntityQueries")))
@interface MeetingClientSpotLightMemberEntityQueries : MeetingClientRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver MeetingsMemberEntityAdapter:(MeetingClientMeetingsMemberEntityAdapter *)MeetingsMemberEntityAdapter __attribute__((swift_name("init(driver:MeetingsMemberEntityAdapter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MeetingClientRuntimeQueryResult>)clearSpotLightMembers __attribute__((swift_name("clearSpotLightMembers()")));
- (id<MeetingClientRuntimeQueryResult>)deleteAllSpotLightMembersConfId:(NSString *)confId __attribute__((swift_name("deleteAllSpotLightMembers(confId:)")));
- (id<MeetingClientRuntimeQueryResult>)deleteSpotLightMemberConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("deleteSpotLightMember(confId:userId:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetSpotLightMembersList *> *)getSpotLightMembersListConfId:(NSString *)confId __attribute__((swift_name("getSpotLightMembersList(confId:)")));
- (MeetingClientRuntimeQuery<id> *)getSpotLightMembersListConfId:(NSString *)confId mapper:(id (^)(MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, MeetingClientViewType * _Nullable, MeetingClientMemberType * _Nullable, MeetingClientMemberRole * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientBoolean * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientLong * _Nullable, MeetingClientDeviceType * _Nullable, NSString * _Nullable, MeetingClientLong * _Nullable, NSString * _Nullable, NSString *))mapper __attribute__((swift_name("getSpotLightMembersList(confId:mapper:)")));
- (MeetingClientRuntimeQuery<NSString *> *)getSpotLightMembersUserIdListConfId:(NSString *)confId __attribute__((swift_name("getSpotLightMembersUserIdList(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientLong *> *)getSpotlightMembersCountConfId:(NSString *)confId __attribute__((swift_name("getSpotlightMembersCount(confId:)")));
- (id<MeetingClientRuntimeQueryResult>)insertOrReplaceSpotlightMemberPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString *)confId userId:(NSString *)userId addedTime:(int64_t)addedTime __attribute__((swift_name("insertOrReplaceSpotlightMember(pkId:confId:userId:addedTime:)")));
- (MeetingClientRuntimeQuery<MeetingClientBoolean *> *)isSpotLightMembersAvailableConfId:(NSString *)confId __attribute__((swift_name("isSpotLightMembersAvailable(confId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitingRequestMemberEntity")))
@interface MeetingClientWaitingRequestMemberEntity : MeetingClientBase
- (instancetype)initWithPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId requestType:(MeetingClientRequestType *)requestType addedTime:(int64_t)addedTime __attribute__((swift_name("init(pkId:confId:userId:requestType:addedTime:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientWaitingRequestMemberEntity *)doCopyPkId:(int64_t)pkId confId:(NSString *)confId userId:(NSString *)userId requestType:(MeetingClientRequestType *)requestType addedTime:(int64_t)addedTime __attribute__((swift_name("doCopy(pkId:confId:userId:requestType:addedTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t addedTime __attribute__((swift_name("addedTime")));
@property (readonly) NSString *confId __attribute__((swift_name("confId")));
@property (readonly) int64_t pkId __attribute__((swift_name("pkId")));
@property (readonly) MeetingClientRequestType *requestType __attribute__((swift_name("requestType")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitingRequestMemberEntity.Adapter")))
@interface MeetingClientWaitingRequestMemberEntityAdapter : MeetingClientBase
- (instancetype)initWithRequestTypeAdapter:(id<MeetingClientRuntimeColumnAdapter>)requestTypeAdapter __attribute__((swift_name("init(requestTypeAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MeetingClientRuntimeColumnAdapter> requestTypeAdapter __attribute__((swift_name("requestTypeAdapter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitingRequestMemberEntityQueries")))
@interface MeetingClientWaitingRequestMemberEntityQueries : MeetingClientRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver WaitingRequestMemberEntityAdapter:(MeetingClientWaitingRequestMemberEntityAdapter *)WaitingRequestMemberEntityAdapter __attribute__((swift_name("init(driver:WaitingRequestMemberEntityAdapter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDriver:(id<MeetingClientRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MeetingClientRuntimeQueryResult>)changeAllWaitingRequestAsApprovedConfId:(NSString *)confId __attribute__((swift_name("changeAllWaitingRequestAsApproved(confId:)")));
- (id<MeetingClientRuntimeQueryResult>)changeAllWaitingRequestAsRejectedConfId:(NSString *)confId __attribute__((swift_name("changeAllWaitingRequestAsRejected(confId:)")));
- (id<MeetingClientRuntimeQueryResult>)changeRequestAsApprovedConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("changeRequestAsApproved(confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)changeRequestAsRejectedConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("changeRequestAsRejected(confId:userId:)")));
- (id<MeetingClientRuntimeQueryResult>)changeRequestsAsApprovedConfId:(NSString *)confId userIds:(id)userIds __attribute__((swift_name("changeRequestsAsApproved(confId:userIds:)")));
- (id<MeetingClientRuntimeQueryResult>)changeRequestsAsRejectedConfId:(NSString *)confId userIds:(id)userIds __attribute__((swift_name("changeRequestsAsRejected(confId:userIds:)")));
- (id<MeetingClientRuntimeQueryResult>)clearWaitingRequestMembers __attribute__((swift_name("clearWaitingRequestMembers()")));
- (id<MeetingClientRuntimeQueryResult>)deleteWaitingRequestsConfId:(NSString *)confId userId:(NSString *)userId __attribute__((swift_name("deleteWaitingRequests(confId:userId:)")));
- (MeetingClientRuntimeQuery<NSString *> *)getRequestMemberAlreadyApprovedOrInWaitingRoomUserIdListConfId:(NSString *)confId __attribute__((swift_name("getRequestMemberAlreadyApprovedOrInWaitingRoomUserIdList(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientLong *> *)getWaitingRequestMembersCountConfId:(NSString *)confId __attribute__((swift_name("getWaitingRequestMembersCount(confId:)")));
- (MeetingClientRuntimeQuery<MeetingClientGetWaitingRequestMembersList *> *)getWaitingRequestMembersListConfId:(NSString *)confId __attribute__((swift_name("getWaitingRequestMembersList(confId:)")));
- (MeetingClientRuntimeQuery<id> *)getWaitingRequestMembersListConfId:(NSString *)confId mapper:(id (^)(MeetingClientLong *, NSString *, NSString *, MeetingClientRequestType *, MeetingClientLong *, NSString * _Nullable))mapper __attribute__((swift_name("getWaitingRequestMembersList(confId:mapper:)")));
- (MeetingClientRuntimeQuery<NSString *> *)getWaitingRequestMembersUserIdListConfId:(NSString *)confId __attribute__((swift_name("getWaitingRequestMembersUserIdList(confId:)")));
- (id<MeetingClientRuntimeQueryResult>)insertOrReplaceWaitingRequestMemberPkId:(MeetingClientLong * _Nullable)pkId confId:(NSString *)confId userId:(NSString *)userId requestType:(MeetingClientRequestType *)requestType addedTime:(int64_t)addedTime __attribute__((swift_name("insertOrReplaceWaitingRequestMember(pkId:confId:userId:requestType:addedTime:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MeetingClientKotlinThrowable : MeetingClientBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (MeetingClientKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MeetingClientKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MeetingClientKotlinException : MeetingClientKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthException")))
@interface MeetingClientAuthException : MeetingClientKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message t:(MeetingClientKotlinThrowable * _Nullable)t __attribute__((swift_name("init(message:t:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("ClientAccessToken")))
@protocol MeetingClientClientAccessToken
@required
- (void)forceUpdateUserId:(NSString * _Nullable)userId __attribute__((swift_name("forceUpdate(userId:)")));
- (NSString *)getUserId:(NSString * _Nullable)userId __attribute__((swift_name("get(userId:)")));
- (void)invalidateUserId:(NSString * _Nullable)userId __attribute__((swift_name("invalidate(userId:)")));
- (BOOL)isAvailableUserId:(NSString * _Nullable)userId __attribute__((swift_name("isAvailable(userId:)")));
- (void)setUserId:(NSString *)userId accessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken expiresIn:(MeetingClientLong * _Nullable)expiresIn callKey:(NSString *)callKey clientId:(NSString *)clientId clientSecret:(NSString *)clientSecret redirectUri:(NSString *)redirectUri grantType:(NSString *)grantType onFetchTokenFailed:(void (^ _Nullable)(MeetingClientAuthException *))onFetchTokenFailed refreshTokenAPI:(id<MeetingClientKotlinSuspendFunction1>)refreshTokenAPI __attribute__((swift_name("set(userId:accessToken:refreshToken:expiresIn:callKey:clientId:clientSecret:redirectUri:grantType:onFetchTokenFailed:refreshTokenAPI:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("ClientAccessTokenResponse")))
@interface MeetingClientClientAccessTokenResponse : MeetingClientBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 clientAccessToken:(NSString * _Nullable)clientAccessToken refreshToken:(NSString * _Nullable)refreshToken expiresIn:(MeetingClientLong * _Nullable)expiresIn serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:clientAccessToken:refreshToken:expiresIn:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientClientAccessTokenResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable clientAccessToken __attribute__((swift_name("clientAccessToken")));
@property (readonly) MeetingClientLong * _Nullable expiresIn __attribute__((swift_name("expiresIn")));
@property (readonly) NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientAccessTokenResponse.Companion")))
@interface MeetingClientClientAccessTokenResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientClientAccessTokenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MeetingClientKotlinArray<id<MeetingClientKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingDebugLogging")))
@interface MeetingClientRTCPMeetingDebugLogging : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)rTCPMeetingDebugLogging __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientRTCPMeetingDebugLogging *shared __attribute__((swift_name("shared")));
- (void)logDTag:(NSString *)tag message:(id)message __attribute__((swift_name("logD(tag:message:)")));
- (void)logETag:(NSString *)tag message:(id)message __attribute__((swift_name("logE(tag:message:)")));
- (void)logITag:(NSString *)tag message:(id)message __attribute__((swift_name("logI(tag:message:)")));
- (void)setLoggerLogger:(id<MeetingClientRTCPMeetingsDebugLogger>)logger __attribute__((swift_name("setLogger(logger:)")));
@end

__attribute__((swift_name("RTCPMeetingsClientLogger")))
@protocol MeetingClientRTCPMeetingsClientLogger
@required
- (void)logDTag:(NSString *)tag message:(id)message __attribute__((swift_name("logD(tag:message:)")));
- (void)logETag:(NSString *)tag message:(id)message __attribute__((swift_name("logE(tag:message:)")));
@end

__attribute__((swift_name("RTCPMeetingsDebugLogger")))
@protocol MeetingClientRTCPMeetingsDebugLogger
@required
- (void)logDTag:(NSString *)tag message:(id)message __attribute__((swift_name("logD(tag:message:)")));
- (void)logETag:(NSString *)tag message:(id)message __attribute__((swift_name("logE(tag:message:)")));
- (void)logITag:(NSString *)tag message:(id)message __attribute__((swift_name("logI(tag:message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPRemoteDebugger")))
@interface MeetingClientRTCPRemoteDebugger : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)rTCPRemoteDebugger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientRTCPRemoteDebugger *shared __attribute__((swift_name("shared")));
- (void)logAudioDeviceChangedUserTriggered:(BOOL)userTriggered audioSourceName:(NSString *)audioSourceName __attribute__((swift_name("logAudioDeviceChanged(userTriggered:audioSourceName:)")));
- (void)logBluetoothPermissionDenied __attribute__((swift_name("logBluetoothPermissionDenied()")));
- (void)logBluetoothPermissionGrantedAudioSourceName:(NSString *)audioSourceName __attribute__((swift_name("logBluetoothPermissionGranted(audioSourceName:)")));
- (void)logBluetoothPermissionRequested __attribute__((swift_name("logBluetoothPermissionRequested()")));
- (void)logCamPermissionDenied __attribute__((swift_name("logCamPermissionDenied()")));
- (void)logCamPermissionGranted __attribute__((swift_name("logCamPermissionGranted()")));
- (void)logCamPermissionRequested __attribute__((swift_name("logCamPermissionRequested()")));
- (void)logDevicePermissionGranted:(BOOL)granted permissionType:(NSString * _Nullable)permissionType __attribute__((swift_name("logDevicePermission(granted:permissionType:)")));
- (void)logMicPermissionDenied __attribute__((swift_name("logMicPermissionDenied()")));
- (void)logMicPermissionGrantedAudioSourceName:(NSString *)audioSourceName __attribute__((swift_name("logMicPermissionGranted(audioSourceName:)")));
- (void)logMicPermissionRequested __attribute__((swift_name("logMicPermissionRequested()")));
- (void)logVideoEffectType:(MeetingClientRTCPRemoteDebuggerVideoEffectType *)type name:(NSString *)name __attribute__((swift_name("logVideoEffect(type:name:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MeetingClientKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MeetingClientKotlinEnum<E> : MeetingClientBase <MeetingClientKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPRemoteDebugger.VideoEffectType")))
@interface MeetingClientRTCPRemoteDebuggerVideoEffectType : MeetingClientKotlinEnum<MeetingClientRTCPRemoteDebuggerVideoEffectType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientRTCPRemoteDebuggerVideoEffectType *virtualfilter __attribute__((swift_name("virtualfilter")));
@property (class, readonly) MeetingClientRTCPRemoteDebuggerVideoEffectType *virtualbackground __attribute__((swift_name("virtualbackground")));
+ (MeetingClientKotlinArray<MeetingClientRTCPRemoteDebuggerVideoEffectType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientRTCPRemoteDebuggerVideoEffectType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPCustomVideoCapturerManager")))
@interface MeetingClientRTCPCustomVideoCapturerManager : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)rTCPCustomVideoCapturerManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientRTCPCustomVideoCapturerManager *shared __attribute__((swift_name("shared")));
- (void)destroyCustomVideoSource __attribute__((swift_name("destroyCustomVideoSource()")));
- (RTCVideoSource *)doInitCustomVideoSource __attribute__((swift_name("doInitCustomVideoSource()")));
@end

__attribute__((swift_name("RTCPMeetingsClient")))
@interface MeetingClientRTCPMeetingsClient : MeetingClientBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MeetingClientRTCPMeetingsClientCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addToGlobalPinUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addToGlobalPin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addToLocalPinUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addToLocalPin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)approveAllJoinRequestWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("approveAllJoinRequest(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)approveJoinRequestUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("approveJoinRequest(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)approveShareRequestUserId:(NSString *)userId shareType:(MeetingClientShareType *)shareType completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("approveShareRequest(userId:shareType:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)approveSpeakRequestUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("approveSpeakRequest(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)askEnableAudioAllWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("askEnableAudioAll(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)askEnableUserAudioUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("askEnableUserAudio(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)assignPrimaryAdminUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("assignPrimaryAdmin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)assignSecondaryAdminUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("assignSecondaryAdmin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bringToSpotlightUserIds:(NSArray<NSString *> *)userIds completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bringToSpotlight(userIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelMemberScreenShareWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelMemberScreenShare(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelRequestToSpeakWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelRequestToSpeak(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelRingAllWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelRingAll(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelRingUserUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelRingUser(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)closeMeetingSessionWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("closeMeetingSession(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)configureOtherSpeakersVisibilityInSpotlightShowOtherSpeakers:(BOOL)showOtherSpeakers completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("configureOtherSpeakersVisibilityInSpotlight(showOtherSpeakers:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectToInternetAudioWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("connectToInternetAudio(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createAudioInputAudioProcessingSpec:(MeetingClientAudioProcessingSpec *)audioProcessingSpec completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createAudioInput(audioProcessingSpec:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createVideoInputVideoCaptureSpec:(MeetingClientVideoCaptureSpec *)videoCaptureSpec callbacks:(id<MeetingClientCameraStateCallbacks>)callbacks completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientRTCPMeetingVideo *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createVideoInput(videoCaptureSpec:callbacks:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disableAudioAllRestrictEnableAudio:(MeetingClientBoolean * _Nullable)restrictEnableAudio completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("disableAudioAll(restrictEnableAudio:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disableSpotlightWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("disableSpotlight(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disableUserAudioUserId:(NSString *)userId restrictEnableAudio:(MeetingClientBoolean * _Nullable)restrictEnableAudio completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("disableUserAudio(userId:restrictEnableAudio:completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissAssignedAsPrimaryAdminNotifierState __attribute__((swift_name("dismissAssignedAsPrimaryAdminNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissAudioEnabledDisabledNotifierState __attribute__((swift_name("dismissAudioEnabledDisabledNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissEnableAudioRestrictedNotifierState __attribute__((swift_name("dismissEnableAudioRestrictedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissEnableVideoRestrictedNotifierState __attribute__((swift_name("dismissEnableVideoRestrictedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissExpiryBannerNotifierState __attribute__((swift_name("dismissExpiryBannerNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissRecordingNotifierState __attribute__((swift_name("dismissRecordingNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissRemovedMemberNotifierState __attribute__((swift_name("dismissRemovedMemberNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissSecondaryAdminAssignedRemovedNotifierState __attribute__((swift_name("dismissSecondaryAdminAssignedRemovedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissShareRequestApprovedNotifierStateShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("dismissShareRequestApprovedNotifierState(shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissShareRequestDeniedNotifierStateShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("dismissShareRequestDeniedNotifierState(shareType:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)endMeetingWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("endMeeting(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flipCameraWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientCameraFace *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("flipCamera(completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getActiveSpeakingMembers __attribute__((swift_name("getActiveSpeakingMembers()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllAudioDisabledStatus __attribute__((swift_name("getAllAudioDisabledStatus()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllJoinRequest __attribute__((swift_name("getAllJoinRequest()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllJoinRequestCount __attribute__((swift_name("getAllJoinRequestCount()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllShareRequestShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("getAllShareRequest(shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllShareRequestCountShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("getAllShareRequestCount(shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllSpeakRequest __attribute__((swift_name("getAllSpeakRequest()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllSpeakRequestCount __attribute__((swift_name("getAllSpeakRequestCount()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAssignPrimaryAdminMembersList __attribute__((swift_name("getAssignPrimaryAdminMembersList()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAudioSourceType __attribute__((swift_name("getAudioSourceType()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAudioStatus __attribute__((swift_name("getAudioStatus()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentMemberWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientRTCPMeetingsMember *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentMember(completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getCurrentMemberObservable __attribute__((swift_name("getCurrentMemberObservable()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getCurrentMemberRoleObservable __attribute__((swift_name("getCurrentMemberRoleObservable()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getCustomMessage __attribute__((swift_name("getCustomMessage()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getEnableAudioRestrictedAllStatus __attribute__((swift_name("getEnableAudioRestrictedAllStatus()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getEnableAudioRestrictedMemberIds __attribute__((swift_name("getEnableAudioRestrictedMemberIds()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getEnableAudioRestrictedStatus __attribute__((swift_name("getEnableAudioRestrictedStatus()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getEnableVideoRestrictedStatus __attribute__((swift_name("getEnableVideoRestrictedStatus()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getGridMembers __attribute__((swift_name("getGridMembers()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getIsMeetingEndedState __attribute__((swift_name("getIsMeetingEndedState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getIsNetworkAvailableState __attribute__((swift_name("getIsNetworkAvailableState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getIsRecordingState __attribute__((swift_name("getIsRecordingState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getIsRingingAllState __attribute__((swift_name("getIsRingingAllState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getJoinedMemberNotifierState __attribute__((swift_name("getJoinedMemberNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getLeftMemberNotifierState __attribute__((swift_name("getLeftMemberNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getLiveTranscriptMessage __attribute__((swift_name("getLiveTranscriptMessage()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLocalPinnedMemberCountWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLocalPinnedMemberCount(completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMediaConnectionStateMediaConnectionType:(MeetingClientMediaConnectionType *)mediaConnectionType __attribute__((swift_name("getMediaConnectionState(mediaConnectionType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMediaServerReachabilityReport __attribute__((swift_name("getMediaServerReachabilityReport()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMeetingLayout __attribute__((swift_name("getMeetingLayout()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMeetingMembersSearchQuery:(NSString *)searchQuery excludingStageMembers:(BOOL)excludingStageMembers __attribute__((swift_name("getMeetingMembers(searchQuery:excludingStageMembers:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMeetingStartTime __attribute__((swift_name("getMeetingStartTime()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMeetingStateWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientRTCPMeetingState *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMeetingState(completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMeetingTitle __attribute__((swift_name("getMeetingTitle()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMeetingsMemberCountExcludingMemberRoleNone:(BOOL)excludingMemberRoleNone __attribute__((swift_name("getMeetingsMemberCount(excludingMemberRoleNone:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getNoAudioSourceNotifierState __attribute__((swift_name("getNoAudioSourceNotifierState()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPhoneAudioDetailsWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientPhoneAudioDetails *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPhoneAudioDetails(completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getPrimaryAdminNameObservable __attribute__((swift_name("getPrimaryAdminNameObservable()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getRTCPAudioManagerEvents __attribute__((swift_name("getRTCPAudioManagerEvents()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientRTCPMeetingsConfigurations *> *)getRTCPMeetingsConfigurations __attribute__((swift_name("getRTCPMeetingsConfigurations()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getReactions __attribute__((swift_name("getReactions()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getRecordingNotifierState __attribute__((swift_name("getRecordingNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getRemovedMemberNotifierState __attribute__((swift_name("getRemovedMemberNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getScreenShare __attribute__((swift_name("getScreenShare()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowAssignedAsPrimaryAdminNotifierState __attribute__((swift_name("getShowAssignedAsPrimaryAdminNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowAudioEnabledDisabledNotifierState __attribute__((swift_name("getShowAudioEnabledDisabledNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowBandwidthNotifierState __attribute__((swift_name("getShowBandwidthNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowEnableAudioRestrictedNotifierState __attribute__((swift_name("getShowEnableAudioRestrictedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowEnableVideoRestrictedNotifierState __attribute__((swift_name("getShowEnableVideoRestrictedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowLimitExpiryBannerNotifierState __attribute__((swift_name("getShowLimitExpiryBannerNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowSecondaryAdminAssignedRemovedNotifierState __attribute__((swift_name("getShowSecondaryAdminAssignedRemovedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowShareRequestApprovedNotifierStateShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("getShowShareRequestApprovedNotifierState(shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowShareRequestDeniedNotifierStateShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("getShowShareRequestDeniedNotifierState(shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getSpotLightEnabledState __attribute__((swift_name("getSpotLightEnabledState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getSpotlightMemberCount __attribute__((swift_name("getSpotlightMemberCount()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getStageMembers __attribute__((swift_name("getStageMembers()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getStreamingInfoOnOverspill __attribute__((swift_name("getStreamingInfoOnOverspill()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getVideoStatus __attribute__((swift_name("getVideoStatus()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getWaitingRoomRequestStatus __attribute__((swift_name("getWaitingRoomRequestStatus()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doInitMeetingSessionClientOtp:(NSString *)clientOtp callKey:(NSString *)callKey rtcpUserId:(NSString *)rtcpUserId authorization:(NSString *)authorization rtcpMeetingsRemoteConfigs:(MeetingClientRTCPMeetingsRemoteConfigs *)rtcpMeetingsRemoteConfigs rtcpWMSConfiguration:(MeetingClientRTCPWMSConfiguration * _Nullable)rtcpWMSConfiguration completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doInitMeetingSession(clientOtp:callKey:rtcpUserId:authorization:rtcpMeetingsRemoteConfigs:rtcpWMSConfiguration:completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isAllMeetingParticipantsAudioDisabled __attribute__((swift_name("isAllMeetingParticipantsAudioDisabled()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isAllMeetingParticipantsAudioEnabled __attribute__((swift_name("isAllMeetingParticipantsAudioEnabled()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isAssignPrimaryAdminMembersAvailable __attribute__((swift_name("isAssignPrimaryAdminMembersAvailable()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isIncomingVideoEnabled __attribute__((swift_name("isIncomingVideoEnabled()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isLiveTranscriptionInProgress __attribute__((swift_name("isLiveTranscriptionInProgress()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isMeetingConnectionEstablished __attribute__((swift_name("isMeetingConnectionEstablished()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isMemberRequestedToShareUserId:(NSString *)userId shareType:(MeetingClientShareType *)shareType __attribute__((swift_name("isMemberRequestedToShare(userId:shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isMemberRequestedToSpeakUserId:(NSString *)userId __attribute__((swift_name("isMemberRequestedToSpeak(userId:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientBoolean *> *)isOutputAudioEnabled __attribute__((swift_name("isOutputAudioEnabled()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isScreenSharingInProgress __attribute__((swift_name("isScreenSharingInProgress()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinMeetingUserDisplayName:(NSString * _Nullable)userDisplayName isGlobalPin:(BOOL)isGlobalPin completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("joinMeeting(userDisplayName:isGlobalPin:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)kickoutUserUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("kickoutUser(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)leaveMeetingAssignPrimaryAdminId:(NSString * _Nullable)assignPrimaryAdminId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("leaveMeeting(assignPrimaryAdminId:completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)otherSpeakersVisibilityRestrictedInSpotlight __attribute__((swift_name("otherSpeakersVisibilityRestrictedInSpotlight()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rejectAllJoinRequestWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rejectAllJoinRequest(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rejectJoinRequestUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rejectJoinRequest(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rejectShareRequestUserId:(NSString *)userId shareType:(MeetingClientShareType *)shareType completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rejectShareRequest(userId:shareType:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rejectSpeakRequestUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rejectSpeakRequest(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFromGlobalPinUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFromGlobalPin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFromLocalPinUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFromLocalPin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFromSpotlightUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFromSpotlight(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeSecondaryAdminUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeSecondaryAdmin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)replaceAudioInputAudioProcessingSpec:(MeetingClientAudioProcessingSpec *)audioProcessingSpec completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("replaceAudioInput(audioProcessingSpec:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)replaceVideoInputVideoCaptureSpec:(MeetingClientVideoCaptureSpec *)videoCaptureSpec callbacks:(id<MeetingClientCameraStateCallbacks>)callbacks completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("replaceVideoInput(videoCaptureSpec:callbacks:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestToJoinMeetingUserDisplayName:(NSString * _Nullable)userDisplayName completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestToJoinMeeting(userDisplayName:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestToShareShareType:(MeetingClientShareType *)shareType completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestToShare(shareType:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestToSpeakWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestToSpeak(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resizeScreenShareContentVideoCaptureSpec:(MeetingClientVideoCaptureSpec *)videoCaptureSpec completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resizeScreenShareContent(videoCaptureSpec:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)restrictEnableAudioWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("restrictEnableAudio(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ringAllWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ringAll(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ringUserUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ringUser(userId:completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)sendCustomMessageMessage:(MeetingClientCustomMessage *)message userIds:(NSArray<NSString *> *)userIds __attribute__((swift_name("sendCustomMessage(message:userIds:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendReactionReactionCode:(NSString *)reactionCode userId:(NSString * _Nullable)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendReaction(reactionCode:userId:completionHandler:)")));
- (void)setOnGetDisplayNameListenerGetUserDisplayNames:(id<MeetingClientKotlinSuspendFunction1>)getUserDisplayNames __attribute__((swift_name("setOnGetDisplayNameListener(getUserDisplayNames:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)setUpStreamAudioLevelListenerListener:(void (^)(MeetingClientDouble * _Nullable))listener __attribute__((swift_name("setUpStreamAudioLevelListener(listener:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startLiveTranscriptWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startLiveTranscript(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startMeetingMeetingTitle:(NSString *)meetingTitle primaryAdminId:(NSString * _Nullable)primaryAdminId userDisplayName:(NSString * _Nullable)userDisplayName isGlobalPin:(BOOL)isGlobalPin completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startMeeting(meetingTitle:primaryAdminId:userDisplayName:isGlobalPin:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startScreenShareVideoCaptureSpec:(MeetingClientVideoCaptureSpec *)videoCaptureSpec restrictDownstream:(BOOL)restrictDownstream completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startScreenShare(videoCaptureSpec:restrictDownstream:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopLiveTranscriptWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stopLiveTranscript(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopScreenShareWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stopScreenShare(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)subscribeVideosUserIds:(NSArray<NSString *> *)userIds completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("subscribeVideos(userIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)switchFromPhoneToInternetAudioWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("switchFromPhoneToInternetAudio(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)switchLayoutWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("switchLayout(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unRestrictEnableAudioWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unRestrictEnableAudio(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateAudioStatusEnable:(BOOL)enable completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateAudioStatus(enable:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateGlobalPinnedUsersUserIds:(NSArray<NSString *> *)userIds completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateGlobalPinnedUsers(userIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateIncomingVideoStateIsEnabled:(BOOL)isEnabled completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateIncomingVideoState(isEnabled:completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)updateOutputAudioStatusEnable:(BOOL)enable __attribute__((swift_name("updateOutputAudioStatus(enable:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateVideoStatusEnable:(BOOL)enable completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateVideoStatus(enable:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsClient.Companion")))
@interface MeetingClientRTCPMeetingsClientCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientRTCPMeetingsClientCompanion *shared __attribute__((swift_name("shared")));
- (void)disableSystemAudioForScreenShare __attribute__((swift_name("disableSystemAudioForScreenShare()"))) __attribute__((deprecated("Used for development purpose. Use RTCP Admin page to enable/disable system audio for screen share.")));
- (MeetingClientRTCPMeetingsClient *)instance __attribute__((swift_name("instance()")));
- (void)setDefaultGridStatusEnabled:(MeetingClientBoolean * _Nullable)enabled gridSubscriberEnabled:(MeetingClientBoolean * _Nullable)gridSubscriberEnabled csrcProfilePicEnabled:(MeetingClientBoolean * _Nullable)csrcProfilePicEnabled __attribute__((swift_name("setDefaultGridStatus(enabled:gridSubscriberEnabled:csrcProfilePicEnabled:)"))) __attribute__((deprecated("Used for development purpose. Use RTCP Admin page to enable/disable grid as default.")));
- (void)setDefaultReactionStatusEnabled:(MeetingClientBoolean * _Nullable)enabled __attribute__((swift_name("setDefaultReactionStatus(enabled:)"))) __attribute__((deprecated("Used for development purpose.")));
- (void)setRTCPMeetingsClientLoggerRtcpMeetingsClientLogger:(id<MeetingClientRTCPMeetingsClientLogger>)rtcpMeetingsClientLogger __attribute__((swift_name("setRTCPMeetingsClientLogger(rtcpMeetingsClientLogger:)")));
- (void)setScreenShareInsertionCallbackEvent:(void (^)(MeetingClientRTCPMeetingsMember *, MeetingClientRTCPMeetingsMember *))event __attribute__((swift_name("setScreenShareInsertionCallback(event:)"))) __attribute__((deprecated("Used for development purpose.")));
- (void)updateRemoteRTCPLoggerEnable:(BOOL)enable __attribute__((swift_name("updateRemoteRTCPLogger(enable:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsClientImpl")))
@interface MeetingClientRTCPMeetingsClientImpl : MeetingClientRTCPMeetingsClient
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addToGlobalPinUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addToGlobalPin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addToLocalPinUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addToLocalPin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)approveAllJoinRequestWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("approveAllJoinRequest(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)approveJoinRequestUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("approveJoinRequest(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)approveShareRequestUserId:(NSString *)userId shareType:(MeetingClientShareType *)shareType completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("approveShareRequest(userId:shareType:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)approveSpeakRequestUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("approveSpeakRequest(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)askEnableAudioAllWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("askEnableAudioAll(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)askEnableUserAudioUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("askEnableUserAudio(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)assignPrimaryAdminUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("assignPrimaryAdmin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)assignSecondaryAdminUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("assignSecondaryAdmin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bringToSpotlightUserIds:(NSArray<NSString *> *)userIds completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bringToSpotlight(userIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelMemberScreenShareWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelMemberScreenShare(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelRequestToSpeakWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelRequestToSpeak(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelRingAllWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelRingAll(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelRingUserUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelRingUser(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)closeMeetingSessionWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("closeMeetingSession(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)configureOtherSpeakersVisibilityInSpotlightShowOtherSpeakers:(BOOL)showOtherSpeakers completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("configureOtherSpeakersVisibilityInSpotlight(showOtherSpeakers:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectToInternetAudioWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("connectToInternetAudio(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createAudioInputAudioProcessingSpec:(MeetingClientAudioProcessingSpec *)audioProcessingSpec completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createAudioInput(audioProcessingSpec:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createVideoInputVideoCaptureSpec:(MeetingClientVideoCaptureSpec *)videoCaptureSpec callbacks:(id<MeetingClientCameraStateCallbacks>)callbacks completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientRTCPMeetingVideo *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createVideoInput(videoCaptureSpec:callbacks:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disableAudioAllRestrictEnableAudio:(MeetingClientBoolean * _Nullable)restrictEnableAudio completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("disableAudioAll(restrictEnableAudio:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disableSpotlightWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("disableSpotlight(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disableUserAudioUserId:(NSString *)userId restrictEnableAudio:(MeetingClientBoolean * _Nullable)restrictEnableAudio completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("disableUserAudio(userId:restrictEnableAudio:completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissAssignedAsPrimaryAdminNotifierState __attribute__((swift_name("dismissAssignedAsPrimaryAdminNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissAudioEnabledDisabledNotifierState __attribute__((swift_name("dismissAudioEnabledDisabledNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissEnableAudioRestrictedNotifierState __attribute__((swift_name("dismissEnableAudioRestrictedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissEnableVideoRestrictedNotifierState __attribute__((swift_name("dismissEnableVideoRestrictedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissExpiryBannerNotifierState __attribute__((swift_name("dismissExpiryBannerNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissRecordingNotifierState __attribute__((swift_name("dismissRecordingNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissRemovedMemberNotifierState __attribute__((swift_name("dismissRemovedMemberNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissSecondaryAdminAssignedRemovedNotifierState __attribute__((swift_name("dismissSecondaryAdminAssignedRemovedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissShareRequestApprovedNotifierStateShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("dismissShareRequestApprovedNotifierState(shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)dismissShareRequestDeniedNotifierStateShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("dismissShareRequestDeniedNotifierState(shareType:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)endMeetingWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("endMeeting(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flipCameraWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientCameraFace *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("flipCamera(completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getActiveSpeakingMembers __attribute__((swift_name("getActiveSpeakingMembers()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllAudioDisabledStatus __attribute__((swift_name("getAllAudioDisabledStatus()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllJoinRequest __attribute__((swift_name("getAllJoinRequest()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllJoinRequestCount __attribute__((swift_name("getAllJoinRequestCount()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllShareRequestShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("getAllShareRequest(shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllShareRequestCountShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("getAllShareRequestCount(shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllSpeakRequest __attribute__((swift_name("getAllSpeakRequest()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAllSpeakRequestCount __attribute__((swift_name("getAllSpeakRequestCount()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAssignPrimaryAdminMembersList __attribute__((swift_name("getAssignPrimaryAdminMembersList()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAudioSourceType __attribute__((swift_name("getAudioSourceType()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getAudioStatus __attribute__((swift_name("getAudioStatus()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentMemberWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientRTCPMeetingsMember *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentMember(completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getCurrentMemberObservable __attribute__((swift_name("getCurrentMemberObservable()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getCurrentMemberRoleObservable __attribute__((swift_name("getCurrentMemberRoleObservable()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getCustomMessage __attribute__((swift_name("getCustomMessage()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getEnableAudioRestrictedAllStatus __attribute__((swift_name("getEnableAudioRestrictedAllStatus()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getEnableAudioRestrictedMemberIds __attribute__((swift_name("getEnableAudioRestrictedMemberIds()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getEnableAudioRestrictedStatus __attribute__((swift_name("getEnableAudioRestrictedStatus()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getEnableVideoRestrictedStatus __attribute__((swift_name("getEnableVideoRestrictedStatus()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getGridMembers __attribute__((swift_name("getGridMembers()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getIsMeetingEndedState __attribute__((swift_name("getIsMeetingEndedState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getIsNetworkAvailableState __attribute__((swift_name("getIsNetworkAvailableState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getIsRecordingState __attribute__((swift_name("getIsRecordingState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getIsRingingAllState __attribute__((swift_name("getIsRingingAllState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getJoinedMemberNotifierState __attribute__((swift_name("getJoinedMemberNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getLeftMemberNotifierState __attribute__((swift_name("getLeftMemberNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getLiveTranscriptMessage __attribute__((swift_name("getLiveTranscriptMessage()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLocalPinnedMemberCountWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLocalPinnedMemberCount(completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMediaConnectionStateMediaConnectionType:(MeetingClientMediaConnectionType *)mediaConnectionType __attribute__((swift_name("getMediaConnectionState(mediaConnectionType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMediaServerReachabilityReport __attribute__((swift_name("getMediaServerReachabilityReport()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMeetingLayout __attribute__((swift_name("getMeetingLayout()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMeetingMembersSearchQuery:(NSString *)searchQuery excludingStageMembers:(BOOL)excludingStageMembers __attribute__((swift_name("getMeetingMembers(searchQuery:excludingStageMembers:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMeetingStartTime __attribute__((swift_name("getMeetingStartTime()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMeetingStateWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientRTCPMeetingState *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMeetingState(completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMeetingTitle __attribute__((swift_name("getMeetingTitle()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMeetingsMemberCountExcludingMemberRoleNone:(BOOL)excludingMemberRoleNone __attribute__((swift_name("getMeetingsMemberCount(excludingMemberRoleNone:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getNoAudioSourceNotifierState __attribute__((swift_name("getNoAudioSourceNotifierState()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPhoneAudioDetailsWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientPhoneAudioDetails *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPhoneAudioDetails(completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getPrimaryAdminNameObservable __attribute__((swift_name("getPrimaryAdminNameObservable()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getRTCPAudioManagerEvents __attribute__((swift_name("getRTCPAudioManagerEvents()")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientRTCPMeetingsConfigurations *> *)getRTCPMeetingsConfigurations __attribute__((swift_name("getRTCPMeetingsConfigurations()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getReactions __attribute__((swift_name("getReactions()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getRecordingNotifierState __attribute__((swift_name("getRecordingNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getRemovedMemberNotifierState __attribute__((swift_name("getRemovedMemberNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getScreenShare __attribute__((swift_name("getScreenShare()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowAssignedAsPrimaryAdminNotifierState __attribute__((swift_name("getShowAssignedAsPrimaryAdminNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowAudioEnabledDisabledNotifierState __attribute__((swift_name("getShowAudioEnabledDisabledNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowBandwidthNotifierState __attribute__((swift_name("getShowBandwidthNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowEnableAudioRestrictedNotifierState __attribute__((swift_name("getShowEnableAudioRestrictedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowEnableVideoRestrictedNotifierState __attribute__((swift_name("getShowEnableVideoRestrictedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowLimitExpiryBannerNotifierState __attribute__((swift_name("getShowLimitExpiryBannerNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowSecondaryAdminAssignedRemovedNotifierState __attribute__((swift_name("getShowSecondaryAdminAssignedRemovedNotifierState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowShareRequestApprovedNotifierStateShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("getShowShareRequestApprovedNotifierState(shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getShowShareRequestDeniedNotifierStateShareType:(MeetingClientShareType *)shareType __attribute__((swift_name("getShowShareRequestDeniedNotifierState(shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getSpotLightEnabledState __attribute__((swift_name("getSpotLightEnabledState()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getSpotlightMemberCount __attribute__((swift_name("getSpotlightMemberCount()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getStageMembers __attribute__((swift_name("getStageMembers()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getStreamingInfoOnOverspill __attribute__((swift_name("getStreamingInfoOnOverspill()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getVideoStatus __attribute__((swift_name("getVideoStatus()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getWaitingRoomRequestStatus __attribute__((swift_name("getWaitingRoomRequestStatus()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doInitMeetingSessionClientOtp:(NSString *)clientOtp callKey:(NSString *)callKey rtcpUserId:(NSString *)rtcpUserId authorization:(NSString *)authorization rtcpMeetingsRemoteConfigs:(MeetingClientRTCPMeetingsRemoteConfigs *)rtcpMeetingsRemoteConfigs rtcpWMSConfiguration:(MeetingClientRTCPWMSConfiguration * _Nullable)rtcpWMSConfiguration completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doInitMeetingSession(clientOtp:callKey:rtcpUserId:authorization:rtcpMeetingsRemoteConfigs:rtcpWMSConfiguration:completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isAllMeetingParticipantsAudioDisabled __attribute__((swift_name("isAllMeetingParticipantsAudioDisabled()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isAllMeetingParticipantsAudioEnabled __attribute__((swift_name("isAllMeetingParticipantsAudioEnabled()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isAssignPrimaryAdminMembersAvailable __attribute__((swift_name("isAssignPrimaryAdminMembersAvailable()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isIncomingVideoEnabled __attribute__((swift_name("isIncomingVideoEnabled()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isLiveTranscriptionInProgress __attribute__((swift_name("isLiveTranscriptionInProgress()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isMeetingConnectionEstablished __attribute__((swift_name("isMeetingConnectionEstablished()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isMemberRequestedToShareUserId:(NSString *)userId shareType:(MeetingClientShareType *)shareType __attribute__((swift_name("isMemberRequestedToShare(userId:shareType:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isMemberRequestedToSpeakUserId:(NSString *)userId __attribute__((swift_name("isMemberRequestedToSpeak(userId:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientBoolean *> *)isOutputAudioEnabled __attribute__((swift_name("isOutputAudioEnabled()")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)isScreenSharingInProgress __attribute__((swift_name("isScreenSharingInProgress()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinMeetingUserDisplayName:(NSString * _Nullable)userDisplayName isGlobalPin:(BOOL)isGlobalPin completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("joinMeeting(userDisplayName:isGlobalPin:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)kickoutUserUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("kickoutUser(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)leaveMeetingAssignPrimaryAdminId:(NSString * _Nullable)assignPrimaryAdminId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("leaveMeeting(assignPrimaryAdminId:completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)otherSpeakersVisibilityRestrictedInSpotlight __attribute__((swift_name("otherSpeakersVisibilityRestrictedInSpotlight()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rejectAllJoinRequestWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rejectAllJoinRequest(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rejectJoinRequestUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rejectJoinRequest(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rejectShareRequestUserId:(NSString *)userId shareType:(MeetingClientShareType *)shareType completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rejectShareRequest(userId:shareType:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rejectSpeakRequestUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rejectSpeakRequest(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFromGlobalPinUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFromGlobalPin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFromLocalPinUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFromLocalPin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFromSpotlightUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFromSpotlight(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeSecondaryAdminUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeSecondaryAdmin(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)replaceAudioInputAudioProcessingSpec:(MeetingClientAudioProcessingSpec *)audioProcessingSpec completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("replaceAudioInput(audioProcessingSpec:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)replaceVideoInputVideoCaptureSpec:(MeetingClientVideoCaptureSpec *)videoCaptureSpec callbacks:(id<MeetingClientCameraStateCallbacks>)callbacks completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("replaceVideoInput(videoCaptureSpec:callbacks:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestToJoinMeetingUserDisplayName:(NSString * _Nullable)userDisplayName completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestToJoinMeeting(userDisplayName:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestToShareShareType:(MeetingClientShareType *)shareType completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestToShare(shareType:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestToSpeakWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestToSpeak(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resizeScreenShareContentVideoCaptureSpec:(MeetingClientVideoCaptureSpec *)videoCaptureSpec completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resizeScreenShareContent(videoCaptureSpec:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)restrictEnableAudioWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("restrictEnableAudio(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ringAllWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ringAll(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ringUserUserId:(NSString *)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ringUser(userId:completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)sendCustomMessageMessage:(MeetingClientCustomMessage *)message userIds:(NSArray<NSString *> *)userIds __attribute__((swift_name("sendCustomMessage(message:userIds:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendReactionReactionCode:(NSString *)reactionCode userId:(NSString * _Nullable)userId completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendReaction(reactionCode:userId:completionHandler:)")));
- (void)setOnGetDisplayNameListenerGetUserDisplayNames:(id<MeetingClientKotlinSuspendFunction1>)getUserDisplayNames __attribute__((swift_name("setOnGetDisplayNameListener(getUserDisplayNames:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)setUpStreamAudioLevelListenerListener:(void (^)(MeetingClientDouble * _Nullable))listener __attribute__((swift_name("setUpStreamAudioLevelListener(listener:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startLiveTranscriptWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startLiveTranscript(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startMeetingMeetingTitle:(NSString *)meetingTitle primaryAdminId:(NSString * _Nullable)primaryAdminId userDisplayName:(NSString * _Nullable)userDisplayName isGlobalPin:(BOOL)isGlobalPin completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startMeeting(meetingTitle:primaryAdminId:userDisplayName:isGlobalPin:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startScreenShareVideoCaptureSpec:(MeetingClientVideoCaptureSpec *)videoCaptureSpec restrictDownstream:(BOOL)restrictDownstream completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startScreenShare(videoCaptureSpec:restrictDownstream:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopLiveTranscriptWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stopLiveTranscript(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopScreenShareWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stopScreenShare(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)subscribeVideosUserIds:(NSArray<NSString *> *)userIds completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("subscribeVideos(userIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)switchFromPhoneToInternetAudioWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("switchFromPhoneToInternetAudio(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)switchLayoutWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("switchLayout(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unRestrictEnableAudioWithCompletionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unRestrictEnableAudio(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateAudioStatusEnable:(BOOL)enable completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateAudioStatus(enable:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateGlobalPinnedUsersUserIds:(NSArray<NSString *> *)userIds completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateGlobalPinnedUsers(userIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateIncomingVideoStateIsEnabled:(BOOL)isEnabled completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateIncomingVideoState(isEnabled:completionHandler:)")));
- (MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> *)updateOutputAudioStatusEnable:(BOOL)enable __attribute__((swift_name("updateOutputAudioStatus(enable:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateVideoStatusEnable:(BOOL)enable completionHandler:(void (^)(MeetingClientRTCPMeetingsClientResult<MeetingClientKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateVideoStatus(enable:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPScreenShareVideoCapturerManager")))
@interface MeetingClientRTCPScreenShareVideoCapturerManager : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)rTCPScreenShareVideoCapturerManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientRTCPScreenShareVideoCapturerManager *shared __attribute__((swift_name("shared")));
- (MeetingClientKotlinPair<RTCVideoSource *, RTCFileVideoCapturer *> *)getVideoCapturerDetails __attribute__((swift_name("getVideoCapturerDetails()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionsUtil")))
@interface MeetingClientPermissionsUtil : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)permissionsUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientPermissionsUtil *shared __attribute__((swift_name("shared")));
- (BOOL)needAudioPermission __attribute__((swift_name("needAudioPermission()")));
- (BOOL)needVideoPermission __attribute__((swift_name("needVideoPermission()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientStatsResponse")))
@interface MeetingClientClientStatsResponse : MeetingClientBase
- (instancetype)initWithStatsMaxSize:(MeetingClientInt * _Nullable)statsMaxSize statsInterval:(MeetingClientLong * _Nullable)statsInterval __attribute__((swift_name("init(statsMaxSize:statsInterval:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientClientStatsResponseCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientClientStatsResponse *)doCopyStatsMaxSize:(MeetingClientInt * _Nullable)statsMaxSize statsInterval:(MeetingClientLong * _Nullable)statsInterval __attribute__((swift_name("doCopy(statsMaxSize:statsInterval:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statsinterval")
*/
@property (readonly) MeetingClientLong * _Nullable statsInterval __attribute__((swift_name("statsInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statsmaxsize")
*/
@property (readonly) MeetingClientInt * _Nullable statsMaxSize __attribute__((swift_name("statsMaxSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientStatsResponse.Companion")))
@interface MeetingClientClientStatsResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientClientStatsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetParticipantsDetailsResponse")))
@interface MeetingClientGetParticipantsDetailsResponse : MeetingClientBase
- (instancetype)initWithParticipantList:(NSArray<MeetingClientKotlinx_serialization_jsonJsonElement *> * _Nullable)participantList __attribute__((swift_name("init(participantList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientGetParticipantsDetailsResponseCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientGetParticipantsDetailsResponse *)doCopyParticipantList:(NSArray<MeetingClientKotlinx_serialization_jsonJsonElement *> * _Nullable)participantList __attribute__((swift_name("doCopy(participantList:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="participantlist")
*/
@property (readonly) NSArray<MeetingClientKotlinx_serialization_jsonJsonElement *> * _Nullable participantList __attribute__((swift_name("participantList")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetParticipantsDetailsResponse.Companion")))
@interface MeetingClientGetParticipantsDetailsResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientGetParticipantsDetailsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneAudioResponse")))
@interface MeetingClientPhoneAudioResponse : MeetingClientBase
- (instancetype)initWithPin:(NSString * _Nullable)pin countryCode:(NSString * _Nullable)countryCode accessCode:(NSString * _Nullable)accessCode countryName:(NSString * _Nullable)countryName countryList:(NSArray<NSString *> * _Nullable)countryList numbers:(NSArray<MeetingClientPhoneAudioResponseDialInNumberResponse *> * _Nullable)numbers numberTypes:(NSDictionary<NSString *, NSString *> *)numberTypes __attribute__((swift_name("init(pin:countryCode:accessCode:countryName:countryList:numbers:numberTypes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientPhoneAudioResponseCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientPhoneAudioResponse *)doCopyPin:(NSString * _Nullable)pin countryCode:(NSString * _Nullable)countryCode accessCode:(NSString * _Nullable)accessCode countryName:(NSString * _Nullable)countryName countryList:(NSArray<NSString *> * _Nullable)countryList numbers:(NSArray<MeetingClientPhoneAudioResponseDialInNumberResponse *> * _Nullable)numbers numberTypes:(NSDictionary<NSString *, NSString *> *)numberTypes __attribute__((swift_name("doCopy(pin:countryCode:accessCode:countryName:countryList:numbers:numberTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accesscode")
*/
@property (readonly) NSString * _Nullable accessCode __attribute__((swift_name("accessCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="countrycode")
*/
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="countryList")
*/
@property (readonly) NSArray<NSString *> * _Nullable countryList __attribute__((swift_name("countryList")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="countryname")
*/
@property (readonly) NSString * _Nullable countryName __attribute__((swift_name("countryName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="types")
*/
@property (readonly) NSDictionary<NSString *, NSString *> *numberTypes __attribute__((swift_name("numberTypes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="numbers")
*/
@property (readonly) NSArray<MeetingClientPhoneAudioResponseDialInNumberResponse *> * _Nullable numbers __attribute__((swift_name("numbers")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pin")
*/
@property (readonly) NSString * _Nullable pin __attribute__((swift_name("pin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneAudioResponse.Companion")))
@interface MeetingClientPhoneAudioResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientPhoneAudioResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneAudioResponse.DialInNumberResponse")))
@interface MeetingClientPhoneAudioResponseDialInNumberResponse : MeetingClientBase
- (instancetype)initWithCountryCode:(NSString * _Nullable)countryCode country:(NSString * _Nullable)country number:(NSString * _Nullable)number type:(MeetingClientInt * _Nullable)type region:(NSString * _Nullable)region status:(MeetingClientInt * _Nullable)status __attribute__((swift_name("init(countryCode:country:number:type:region:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientPhoneAudioResponseDialInNumberResponseCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientPhoneAudioResponseDialInNumberResponse *)doCopyCountryCode:(NSString * _Nullable)countryCode country:(NSString * _Nullable)country number:(NSString * _Nullable)number type:(MeetingClientInt * _Nullable)type region:(NSString * _Nullable)region status:(MeetingClientInt * _Nullable)status __attribute__((swift_name("doCopy(countryCode:country:number:type:region:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="country")
*/
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="countrycode")
*/
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="number")
*/
@property (readonly) NSString * _Nullable number __attribute__((swift_name("number")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="region")
*/
@property (readonly) NSString * _Nullable region __attribute__((swift_name("region")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) MeetingClientInt * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) MeetingClientInt * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneAudioResponse.DialInNumberResponseCompanion")))
@interface MeetingClientPhoneAudioResponseDialInNumberResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientPhoneAudioResponseDialInNumberResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTranscriptResponse")))
@interface MeetingClientStartTranscriptResponse : MeetingClientBase
- (instancetype)initWithDomain:(NSString *)domain __attribute__((swift_name("init(domain:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientStartTranscriptResponseCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientStartTranscriptResponse *)doCopyDomain:(NSString *)domain __attribute__((swift_name("doCopy(domain:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="domain")
*/
@property (readonly) NSString *domain __attribute__((swift_name("domain")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTranscriptResponse.Companion")))
@interface MeetingClientStartTranscriptResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientStartTranscriptResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandleReactionsResponse")))
@interface MeetingClientHandleReactionsResponse : MeetingClientBase
- (instancetype)initWithPCount:(NSString * _Nullable)pCount sender:(NSString * _Nullable)sender uname:(NSString * _Nullable)uname type:(NSString * _Nullable)type msg:(NSString * _Nullable)msg ctype:(NSString * _Nullable)ctype time:(NSString * _Nullable)time addInfo:(NSString * _Nullable)addInfo zuid:(NSString * _Nullable)zuid prd:(NSString * _Nullable)prd dName:(NSString * _Nullable)dName customGroup:(NSString * _Nullable)customGroup nName:(NSString * _Nullable)nName chId:(NSString * _Nullable)chId wmsId:(NSString * _Nullable)wmsId config:(NSString * _Nullable)config title:(NSString * _Nullable)title msgUid:(NSString * _Nullable)msgUid __attribute__((swift_name("init(pCount:sender:uname:type:msg:ctype:time:addInfo:zuid:prd:dName:customGroup:nName:chId:wmsId:config:title:msgUid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientHandleReactionsResponseCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientHandleReactionsResponse *)doCopyPCount:(NSString * _Nullable)pCount sender:(NSString * _Nullable)sender uname:(NSString * _Nullable)uname type:(NSString * _Nullable)type msg:(NSString * _Nullable)msg ctype:(NSString * _Nullable)ctype time:(NSString * _Nullable)time addInfo:(NSString * _Nullable)addInfo zuid:(NSString * _Nullable)zuid prd:(NSString * _Nullable)prd dName:(NSString * _Nullable)dName customGroup:(NSString * _Nullable)customGroup nName:(NSString * _Nullable)nName chId:(NSString * _Nullable)chId wmsId:(NSString * _Nullable)wmsId config:(NSString * _Nullable)config title:(NSString * _Nullable)title msgUid:(NSString * _Nullable)msgUid __attribute__((swift_name("doCopy(pCount:sender:uname:type:msg:ctype:time:addInfo:zuid:prd:dName:customGroup:nName:chId:wmsId:config:title:msgUid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="addinfo")
*/
@property (readonly) NSString * _Nullable addInfo __attribute__((swift_name("addInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="chid")
*/
@property (readonly) NSString * _Nullable chId __attribute__((swift_name("chId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="config")
*/
@property (readonly) NSString * _Nullable config __attribute__((swift_name("config")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ctype")
*/
@property (readonly) NSString * _Nullable ctype __attribute__((swift_name("ctype")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="customgroup")
*/
@property (readonly) NSString * _Nullable customGroup __attribute__((swift_name("customGroup")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dname")
*/
@property (readonly) NSString * _Nullable dName __attribute__((swift_name("dName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msguid")
*/
@property (readonly) NSString * _Nullable msgUid __attribute__((swift_name("msgUid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nname")
*/
@property (readonly) NSString * _Nullable nName __attribute__((swift_name("nName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pcount")
*/
@property (readonly) NSString * _Nullable pCount __attribute__((swift_name("pCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prd")
*/
@property (readonly) NSString * _Nullable prd __attribute__((swift_name("prd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sender")
*/
@property (readonly) NSString * _Nullable sender __attribute__((swift_name("sender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="time")
*/
@property (readonly) NSString * _Nullable time __attribute__((swift_name("time")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uname")
*/
@property (readonly) NSString * _Nullable uname __attribute__((swift_name("uname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="wmsid")
*/
@property (readonly) NSString * _Nullable wmsId __attribute__((swift_name("wmsId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="zuid")
*/
@property (readonly) NSString * _Nullable zuid __attribute__((swift_name("zuid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandleReactionsResponse.Companion")))
@interface MeetingClientHandleReactionsResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientHandleReactionsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandleSourceRemovedResponse")))
@interface MeetingClientHandleSourceRemovedResponse : MeetingClientBase
- (instancetype)initWithConferenceId:(NSString * _Nullable)conferenceId userId:(NSString * _Nullable)userId sourceId:(NSString * _Nullable)sourceId sourceType:(MeetingClientInt * _Nullable)sourceType __attribute__((swift_name("init(conferenceId:userId:sourceId:sourceType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientHandleSourceRemovedResponseCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientHandleSourceRemovedResponse *)doCopyConferenceId:(NSString * _Nullable)conferenceId userId:(NSString * _Nullable)userId sourceId:(NSString * _Nullable)sourceId sourceType:(MeetingClientInt * _Nullable)sourceType __attribute__((swift_name("doCopy(conferenceId:userId:sourceId:sourceType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conferenceId")
*/
@property (readonly) NSString * _Nullable conferenceId __attribute__((swift_name("conferenceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sourceId")
*/
@property (readonly) NSString * _Nullable sourceId __attribute__((swift_name("sourceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sourceType")
*/
@property (readonly) MeetingClientInt * _Nullable sourceType __attribute__((swift_name("sourceType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="userId")
*/
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandleSourceRemovedResponse.Companion")))
@interface MeetingClientHandleSourceRemovedResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientHandleSourceRemovedResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandleUpdateGlobalPinResponse")))
@interface MeetingClientHandleUpdateGlobalPinResponse : MeetingClientBase
- (instancetype)initWithConferenceId:(NSString * _Nullable)conferenceId module:(NSString * _Nullable)module userIds:(NSArray<NSString *> * _Nullable)userIds messageTime:(MeetingClientLong * _Nullable)messageTime actionUserId:(NSString * _Nullable)actionUserId __attribute__((swift_name("init(conferenceId:module:userIds:messageTime:actionUserId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientHandleUpdateGlobalPinResponseCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientHandleUpdateGlobalPinResponse *)doCopyConferenceId:(NSString * _Nullable)conferenceId module:(NSString * _Nullable)module userIds:(NSArray<NSString *> * _Nullable)userIds messageTime:(MeetingClientLong * _Nullable)messageTime actionUserId:(NSString * _Nullable)actionUserId __attribute__((swift_name("doCopy(conferenceId:module:userIds:messageTime:actionUserId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="actionUserId")
*/
@property (readonly) NSString * _Nullable actionUserId __attribute__((swift_name("actionUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conferenceId")
*/
@property (readonly) NSString * _Nullable conferenceId __attribute__((swift_name("conferenceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="messageTime")
*/
@property (readonly) MeetingClientLong * _Nullable messageTime __attribute__((swift_name("messageTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="module")
*/
@property (readonly) NSString * _Nullable module __attribute__((swift_name("module")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="userIds")
*/
@property (readonly) NSArray<NSString *> * _Nullable userIds __attribute__((swift_name("userIds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandleUpdateGlobalPinResponse.Companion")))
@interface MeetingClientHandleUpdateGlobalPinResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientHandleUpdateGlobalPinResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandleUserAddedInGlobalPinResponse")))
@interface MeetingClientHandleUserAddedInGlobalPinResponse : MeetingClientBase
- (instancetype)initWithConferenceId:(NSString * _Nullable)conferenceId module:(NSString * _Nullable)module userId:(NSString * _Nullable)userId messageTime:(MeetingClientLong * _Nullable)messageTime actionUserId:(NSString * _Nullable)actionUserId __attribute__((swift_name("init(conferenceId:module:userId:messageTime:actionUserId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientHandleUserAddedInGlobalPinResponseCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientHandleUserAddedInGlobalPinResponse *)doCopyConferenceId:(NSString * _Nullable)conferenceId module:(NSString * _Nullable)module userId:(NSString * _Nullable)userId messageTime:(MeetingClientLong * _Nullable)messageTime actionUserId:(NSString * _Nullable)actionUserId __attribute__((swift_name("doCopy(conferenceId:module:userId:messageTime:actionUserId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="actionUserId")
*/
@property (readonly) NSString * _Nullable actionUserId __attribute__((swift_name("actionUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conferenceId")
*/
@property (readonly) NSString * _Nullable conferenceId __attribute__((swift_name("conferenceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="messageTime")
*/
@property (readonly) MeetingClientLong * _Nullable messageTime __attribute__((swift_name("messageTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="module")
*/
@property (readonly) NSString * _Nullable module __attribute__((swift_name("module")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="userId")
*/
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandleUserAddedInGlobalPinResponse.Companion")))
@interface MeetingClientHandleUserAddedInGlobalPinResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientHandleUserAddedInGlobalPinResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandleUserRemovedInGlobalPinResponse")))
@interface MeetingClientHandleUserRemovedInGlobalPinResponse : MeetingClientBase
- (instancetype)initWithConferenceId:(NSString * _Nullable)conferenceId module:(NSString * _Nullable)module userId:(NSString * _Nullable)userId messageTime:(MeetingClientLong * _Nullable)messageTime actionUserId:(NSString * _Nullable)actionUserId __attribute__((swift_name("init(conferenceId:module:userId:messageTime:actionUserId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientHandleUserRemovedInGlobalPinResponseCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientHandleUserRemovedInGlobalPinResponse *)doCopyConferenceId:(NSString * _Nullable)conferenceId module:(NSString * _Nullable)module userId:(NSString * _Nullable)userId messageTime:(MeetingClientLong * _Nullable)messageTime actionUserId:(NSString * _Nullable)actionUserId __attribute__((swift_name("doCopy(conferenceId:module:userId:messageTime:actionUserId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="actionUserId")
*/
@property (readonly) NSString * _Nullable actionUserId __attribute__((swift_name("actionUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conferenceId")
*/
@property (readonly) NSString * _Nullable conferenceId __attribute__((swift_name("conferenceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="messageTime")
*/
@property (readonly) MeetingClientLong * _Nullable messageTime __attribute__((swift_name("messageTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="module")
*/
@property (readonly) NSString * _Nullable module __attribute__((swift_name("module")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="userId")
*/
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandleUserRemovedInGlobalPinResponse.Companion")))
@interface MeetingClientHandleUserRemovedInGlobalPinResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientHandleUserRemovedInGlobalPinResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareRequestResponse")))
@interface MeetingClientShareRequestResponse : MeetingClientBase
- (instancetype)initWithScreenShareRequests:(NSArray<NSString *> * _Nullable)screenShareRequests contentShareRequests:(NSArray<NSString *> * _Nullable)contentShareRequests whiteboardRequests:(NSArray<NSString *> * _Nullable)whiteboardRequests __attribute__((swift_name("init(screenShareRequests:contentShareRequests:whiteboardRequests:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MeetingClientShareRequestResponseCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientShareRequestResponse *)doCopyScreenShareRequests:(NSArray<NSString *> * _Nullable)screenShareRequests contentShareRequests:(NSArray<NSString *> * _Nullable)contentShareRequests whiteboardRequests:(NSArray<NSString *> * _Nullable)whiteboardRequests __attribute__((swift_name("doCopy(screenShareRequests:contentShareRequests:whiteboardRequests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property (readonly) NSArray<NSString *> * _Nullable contentShareRequests __attribute__((swift_name("contentShareRequests")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="screen")
*/
@property (readonly) NSArray<NSString *> * _Nullable screenShareRequests __attribute__((swift_name("screenShareRequests")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="whiteboard")
*/
@property (readonly) NSArray<NSString *> * _Nullable whiteboardRequests __attribute__((swift_name("whiteboardRequests")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareRequestResponse.Companion")))
@interface MeetingClientShareRequestResponseCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientShareRequestResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsClientException")))
@interface MeetingClientRTCPMeetingsClientException : MeetingClientKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message t:(MeetingClientKotlinThrowable * _Nullable)t __attribute__((swift_name("init(message:t:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsClientResult")))
@interface MeetingClientRTCPMeetingsClientResult<ResultType> : MeetingClientBase
@property (class, readonly, getter=companion) MeetingClientRTCPMeetingsClientResultCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientRTCPMeetingsClientResult<id> *)doCopyData:(id _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (MeetingClientRTCPMeetingsClientResult<id> *)mapTransform:(id _Nullable (^)(ResultType _Nullable))transform __attribute__((swift_name("map(transform:)")));
- (MeetingClientRTCPMeetingsClientResult<ResultType> *)onCompleteOnComplete:(void (^)(void))onComplete __attribute__((swift_name("onComplete(onComplete:)")));
- (MeetingClientRTCPMeetingsClientResult<ResultType> *)onFailureOnFailure:(void (^)(MeetingClientRTCPMeetingsClientResultError *))onFailure __attribute__((swift_name("onFailure(onFailure:)")));
- (MeetingClientRTCPMeetingsClientResult<ResultType> *)onSuccessOnSuccess:(void (^)(ResultType _Nullable))onSuccess __attribute__((swift_name("onSuccess(onSuccess:)")));
@property (readonly) ResultType _Nullable data __attribute__((swift_name("data")));
@property (readonly) MeetingClientRTCPMeetingsClientResultError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsClientResultCompanion")))
@interface MeetingClientRTCPMeetingsClientResultCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientRTCPMeetingsClientResultCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientRTCPMeetingsClientResult<id> *)failureError:(MeetingClientRTCPMeetingsClientResultError *)error __attribute__((swift_name("failure(error:)")));
- (MeetingClientRTCPMeetingsClientResult<id> *)failureThrowable:(MeetingClientKotlinThrowable *)throwable __attribute__((swift_name("failure(throwable:)")));
- (MeetingClientRTCPMeetingsClientResult<id> *)successData:(id _Nullable)data __attribute__((swift_name("success(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsClientResultError")))
@interface MeetingClientRTCPMeetingsClientResultError : MeetingClientBase
- (instancetype)initWithResponseCode:(MeetingClientInt * _Nullable)responseCode error:(NSString * _Nullable)error message:(NSString * _Nullable)message code:(MeetingClientInt * _Nullable)code cause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(responseCode:error:message:code:cause:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MeetingClientKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) MeetingClientInt * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) MeetingClientInt * _Nullable responseCode __attribute__((swift_name("responseCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reaction")))
@interface MeetingClientReaction : MeetingClientBase
- (instancetype)initWithCode:(NSString *)code count:(int32_t)count userId:(NSString * _Nullable)userId __attribute__((swift_name("init(code:count:userId:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientReaction *)doCopyCode:(NSString *)code count:(int32_t)count userId:(NSString * _Nullable)userId __attribute__((swift_name("doCopy(code:count:userId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioEnabledDisabledNotifierData")))
@interface MeetingClientAudioEnabledDisabledNotifierData : MeetingClientBase
- (instancetype)initWithStatus:(MeetingClientAudioEnabledDisabledNotifierDataStatus *)status actionUserId:(NSString *)actionUserId actionUserName:(NSString *)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("init(status:actionUserId:actionUserName:primaryAdminId:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientAudioEnabledDisabledNotifierData *)doCopyStatus:(MeetingClientAudioEnabledDisabledNotifierDataStatus *)status actionUserId:(NSString *)actionUserId actionUserName:(NSString *)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("doCopy(status:actionUserId:actionUserName:primaryAdminId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *actionUserId __attribute__((swift_name("actionUserId")));
@property (readonly) NSString *actionUserName __attribute__((swift_name("actionUserName")));
@property (readonly) NSString *primaryAdminId __attribute__((swift_name("primaryAdminId")));
@property (readonly) MeetingClientAudioEnabledDisabledNotifierDataStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioEnabledDisabledNotifierData.Status")))
@interface MeetingClientAudioEnabledDisabledNotifierDataStatus : MeetingClientKotlinEnum<MeetingClientAudioEnabledDisabledNotifierDataStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientAudioEnabledDisabledNotifierDataStatus *disabled __attribute__((swift_name("disabled")));
@property (class, readonly) MeetingClientAudioEnabledDisabledNotifierDataStatus *enabled __attribute__((swift_name("enabled")));
@property (class, readonly) MeetingClientAudioEnabledDisabledNotifierDataStatus *allowEnable __attribute__((swift_name("allowEnable")));
+ (MeetingClientKotlinArray<MeetingClientAudioEnabledDisabledNotifierDataStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientAudioEnabledDisabledNotifierDataStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioProcessingSpec")))
@interface MeetingClientAudioProcessingSpec : MeetingClientBase
- (instancetype)initWithEchoCancellation:(BOOL)echoCancellation noiseSuppression:(BOOL)noiseSuppression autoGainControl:(BOOL)autoGainControl highpassFilter:(BOOL)highpassFilter __attribute__((swift_name("init(echoCancellation:noiseSuppression:autoGainControl:highpassFilter:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientAudioProcessingSpec *)doCopyEchoCancellation:(BOOL)echoCancellation noiseSuppression:(BOOL)noiseSuppression autoGainControl:(BOOL)autoGainControl highpassFilter:(BOOL)highpassFilter __attribute__((swift_name("doCopy(echoCancellation:noiseSuppression:autoGainControl:highpassFilter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL autoGainControl __attribute__((swift_name("autoGainControl")));
@property (readonly) BOOL echoCancellation __attribute__((swift_name("echoCancellation")));
@property (readonly) BOOL highpassFilter __attribute__((swift_name("highpassFilter")));
@property (readonly) BOOL noiseSuppression __attribute__((swift_name("noiseSuppression")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioSourceType")))
@interface MeetingClientAudioSourceType : MeetingClientKotlinEnum<MeetingClientAudioSourceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MeetingClientAudioSourceTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MeetingClientAudioSourceType *dialIn __attribute__((swift_name("dialIn")));
@property (class, readonly) MeetingClientAudioSourceType *mobile __attribute__((swift_name("mobile")));
@property (class, readonly) MeetingClientAudioSourceType *unknown __attribute__((swift_name("unknown")));
+ (MeetingClientKotlinArray<MeetingClientAudioSourceType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientAudioSourceType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioSourceType.Companion")))
@interface MeetingClientAudioSourceTypeCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientAudioSourceTypeCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientAudioSourceType *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BandwidthNotifierData")))
@interface MeetingClientBandwidthNotifierData : MeetingClientBase
- (instancetype)initWithOperation:(MeetingClientBandwidthNotifierDataOperation *)operation accept:(void (^)(void))accept ignore:(void (^)(void))ignore __attribute__((swift_name("init(operation:accept:ignore:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientBandwidthNotifierData *)doCopyOperation:(MeetingClientBandwidthNotifierDataOperation *)operation accept:(void (^)(void))accept ignore:(void (^)(void))ignore __attribute__((swift_name("doCopy(operation:accept:ignore:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^accept)(void) __attribute__((swift_name("accept")));
@property (readonly) void (^ignore)(void) __attribute__((swift_name("ignore")));
@property (readonly) MeetingClientBandwidthNotifierDataOperation *operation __attribute__((swift_name("operation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BandwidthNotifierData.Operation")))
@interface MeetingClientBandwidthNotifierDataOperation : MeetingClientKotlinEnum<MeetingClientBandwidthNotifierDataOperation *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientBandwidthNotifierDataOperation *switchToStage __attribute__((swift_name("switchToStage")));
@property (class, readonly) MeetingClientBandwidthNotifierDataOperation *switchToGrid __attribute__((swift_name("switchToGrid")));
@property (class, readonly) MeetingClientBandwidthNotifierDataOperation *disableVideo __attribute__((swift_name("disableVideo")));
@property (class, readonly) MeetingClientBandwidthNotifierDataOperation *restrictIncomingVideo __attribute__((swift_name("restrictIncomingVideo")));
@property (class, readonly) MeetingClientBandwidthNotifierDataOperation *recovered __attribute__((swift_name("recovered")));
+ (MeetingClientKotlinArray<MeetingClientBandwidthNotifierDataOperation *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientBandwidthNotifierDataOperation *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraFace")))
@interface MeetingClientCameraFace : MeetingClientKotlinEnum<MeetingClientCameraFace *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientCameraFace *front __attribute__((swift_name("front")));
@property (class, readonly) MeetingClientCameraFace *back __attribute__((swift_name("back")));
+ (MeetingClientKotlinArray<MeetingClientCameraFace *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientCameraFace *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("CameraStateCallbacks")))
@protocol MeetingClientCameraStateCallbacks
@required
- (void)onConnected __attribute__((swift_name("onConnected()")));
- (void)onDisconnected __attribute__((swift_name("onDisconnected()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConferenceACL")))
@interface MeetingClientConferenceACL : MeetingClientKotlinEnum<MeetingClientConferenceACL *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MeetingClientConferenceACLCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MeetingClientConferenceACL *enableWaitingRoom __attribute__((swift_name("enableWaitingRoom")));
@property (class, readonly) MeetingClientConferenceACL *muteAllParticipants __attribute__((swift_name("muteAllParticipants")));
@property (class, readonly) MeetingClientConferenceACL *restrictUnMuteAudio __attribute__((swift_name("restrictUnMuteAudio")));
@property (class, readonly) MeetingClientConferenceACL *restrictUnMuteVideo __attribute__((swift_name("restrictUnMuteVideo")));
@property (class, readonly) MeetingClientConferenceACL *restrictScreenShare __attribute__((swift_name("restrictScreenShare")));
@property (class, readonly) MeetingClientConferenceACL *restrictAssignCoHost __attribute__((swift_name("restrictAssignCoHost")));
@property (class, readonly) MeetingClientConferenceACL *disallowScreenShare __attribute__((swift_name("disallowScreenShare")));
@property (class, readonly) MeetingClientConferenceACL *restrictVideo __attribute__((swift_name("restrictVideo")));
@property (class, readonly) MeetingClientConferenceACL *singleVideoConference __attribute__((swift_name("singleVideoConference")));
@property (class, readonly) MeetingClientConferenceACL *dialIn __attribute__((swift_name("dialIn")));
@property (class, readonly) MeetingClientConferenceACL *liveTranscription __attribute__((swift_name("liveTranscription")));
@property (class, readonly) MeetingClientConferenceACL *endToEndEncryption __attribute__((swift_name("endToEndEncryption")));
+ (MeetingClientKotlinArray<MeetingClientConferenceACL *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientConferenceACL *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConferenceACL.Companion")))
@interface MeetingClientConferenceACLCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientConferenceACLCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)isDialInAcl:(MeetingClientInt * _Nullable)acl __attribute__((swift_name("isDialIn(acl:)")));
- (BOOL)isDisallowScreenShareAcl:(MeetingClientInt * _Nullable)acl __attribute__((swift_name("isDisallowScreenShare(acl:)")));
- (BOOL)isEnableWaitingRoomAcl:(MeetingClientInt * _Nullable)acl __attribute__((swift_name("isEnableWaitingRoom(acl:)")));
- (BOOL)isLiveTranscriptionAcl:(MeetingClientInt * _Nullable)acl __attribute__((swift_name("isLiveTranscription(acl:)")));
- (BOOL)isMuteAllParticipantsAcl:(MeetingClientInt * _Nullable)acl __attribute__((swift_name("isMuteAllParticipants(acl:)")));
- (BOOL)isRestrictAssignCoHostAcl:(MeetingClientInt * _Nullable)acl __attribute__((swift_name("isRestrictAssignCoHost(acl:)")));
- (BOOL)isRestrictScreenShareAcl:(MeetingClientInt * _Nullable)acl __attribute__((swift_name("isRestrictScreenShare(acl:)")));
- (BOOL)isRestrictUnMuteAudioAcl:(MeetingClientInt * _Nullable)acl __attribute__((swift_name("isRestrictUnMuteAudio(acl:)")));
- (BOOL)isRestrictUnMuteVideoAcl:(MeetingClientInt * _Nullable)acl __attribute__((swift_name("isRestrictUnMuteVideo(acl:)")));
- (BOOL)isRestrictVideoAcl:(MeetingClientInt * _Nullable)acl __attribute__((swift_name("isRestrictVideo(acl:)")));
- (BOOL)isSingleVideoConferenceAcl:(MeetingClientInt * _Nullable)acl __attribute__((swift_name("isSingleVideoConference(acl:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreatorDetails")))
@interface MeetingClientCreatorDetails : MeetingClientBase
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientCreatorDetails *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomMessage")))
@interface MeetingClientCustomMessage : MeetingClientBase
- (instancetype)initWithMessage:(NSString * _Nullable)message type:(MeetingClientCustomMessageType *)type __attribute__((swift_name("init(message:type:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientCustomMessage *)doCopyMessage:(NSString * _Nullable)message type:(MeetingClientCustomMessageType *)type __attribute__((swift_name("doCopy(message:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString *senderUserId __attribute__((swift_name("senderUserId")));
@property (readonly) MeetingClientCustomMessageType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomMessageType")))
@interface MeetingClientCustomMessageType : MeetingClientKotlinEnum<MeetingClientCustomMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientCustomMessageType *customMessage __attribute__((swift_name("customMessage")));
@property (class, readonly) MeetingClientCustomMessageType *cachedCustomMessage1 __attribute__((swift_name("cachedCustomMessage1")));
@property (class, readonly) MeetingClientCustomMessageType *cachedCustomMessage2 __attribute__((swift_name("cachedCustomMessage2")));
+ (MeetingClientKotlinArray<MeetingClientCustomMessageType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientCustomMessageType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceType")))
@interface MeetingClientDeviceType : MeetingClientKotlinEnum<MeetingClientDeviceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MeetingClientDeviceTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MeetingClientDeviceType *web __attribute__((swift_name("web")));
@property (class, readonly) MeetingClientDeviceType *mobile __attribute__((swift_name("mobile")));
@property (class, readonly) MeetingClientDeviceType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MeetingClientDeviceType *dialIn __attribute__((swift_name("dialIn")));
+ (MeetingClientKotlinArray<MeetingClientDeviceType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientDeviceType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceType.Companion")))
@interface MeetingClientDeviceTypeCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientDeviceTypeCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientDeviceType *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnableAudioRestrictedNotifierData")))
@interface MeetingClientEnableAudioRestrictedNotifierData : MeetingClientBase
- (instancetype)initWithScope:(MeetingClientEnableAudioRestrictedNotifierDataRestrictionScope *)scope actionUserId:(NSString * _Nullable)actionUserId actionUserName:(NSString * _Nullable)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("init(scope:actionUserId:actionUserName:primaryAdminId:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientEnableAudioRestrictedNotifierData *)doCopyScope:(MeetingClientEnableAudioRestrictedNotifierDataRestrictionScope *)scope actionUserId:(NSString * _Nullable)actionUserId actionUserName:(NSString * _Nullable)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("doCopy(scope:actionUserId:actionUserName:primaryAdminId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable actionUserId __attribute__((swift_name("actionUserId")));
@property (readonly) NSString * _Nullable actionUserName __attribute__((swift_name("actionUserName")));
@property (readonly) NSString *primaryAdminId __attribute__((swift_name("primaryAdminId")));
@property (readonly) MeetingClientEnableAudioRestrictedNotifierDataRestrictionScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnableAudioRestrictedNotifierData.RestrictionScope")))
@interface MeetingClientEnableAudioRestrictedNotifierDataRestrictionScope : MeetingClientKotlinEnum<MeetingClientEnableAudioRestrictedNotifierDataRestrictionScope *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientEnableAudioRestrictedNotifierDataRestrictionScope *all __attribute__((swift_name("all")));
@property (class, readonly) MeetingClientEnableAudioRestrictedNotifierDataRestrictionScope *you __attribute__((swift_name("you")));
+ (MeetingClientKotlinArray<MeetingClientEnableAudioRestrictedNotifierDataRestrictionScope *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientEnableAudioRestrictedNotifierDataRestrictionScope *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndScope")))
@interface MeetingClientEndScope : MeetingClientKotlinEnum<MeetingClientEndScope *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientEndScope *removedYou __attribute__((swift_name("removedYou")));
@property (class, readonly) MeetingClientEndScope *endedForYou __attribute__((swift_name("endedForYou")));
@property (class, readonly) MeetingClientEndScope *endedForAll __attribute__((swift_name("endedForAll")));
@property (class, readonly) MeetingClientEndScope *activeInAnotherDevice __attribute__((swift_name("activeInAnotherDevice")));
+ (MeetingClientKotlinArray<MeetingClientEndScope *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientEndScope *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpiryDurationRemainsData")))
@interface MeetingClientExpiryDurationRemainsData : MeetingClientBase
- (instancetype)initWithTriggerTime:(int64_t)triggerTime remainingDuration:(int64_t)remainingDuration __attribute__((swift_name("init(triggerTime:remainingDuration:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientExpiryDurationRemainsData *)doCopyTriggerTime:(int64_t)triggerTime remainingDuration:(int64_t)remainingDuration __attribute__((swift_name("doCopy(triggerTime:remainingDuration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t remainingDuration __attribute__((swift_name("remainingDuration")));
@property (readonly) int64_t triggerTime __attribute__((swift_name("triggerTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlobalSettings")))
@interface MeetingClientGlobalSettings : MeetingClientBase
- (instancetype)initWithIsStereoDownStreamEnabled:(BOOL)isStereoDownStreamEnabled isComputerAudioEnabled:(BOOL)isComputerAudioEnabled isLayoutSwitchEnabled:(BOOL)isLayoutSwitchEnabled isSpotlightAudioRestrictionEnabled:(BOOL)isSpotlightAudioRestrictionEnabled isNotebookLHSEnabled:(BOOL)isNotebookLHSEnabled isHighResolutionEnabled:(BOOL)isHighResolutionEnabled isThreadsInConferenceEnabled:(BOOL)isThreadsInConferenceEnabled isPersonalConfigEnabled:(BOOL)isPersonalConfigEnabled isParallelConnectionEnabled:(BOOL)isParallelConnectionEnabled isCoHostEnabled:(BOOL)isCoHostEnabled isDownstreamConnectionEnabled:(BOOL)isDownstreamConnectionEnabled isNomenclatureEnabled:(BOOL)isNomenclatureEnabled isUnifiedMixingEnabled:(BOOL)isUnifiedMixingEnabled isBubbleUIEnabled:(BOOL)isBubbleUIEnabled isDefaultGridEnabled:(BOOL)isDefaultGridEnabled isCSRCProfilePicEnabled:(BOOL)isCSRCProfilePicEnabled isTrackCloseEnabled:(BOOL)isTrackCloseEnabled isNotebookIntegrationEnabled:(BOOL)isNotebookIntegrationEnabled isCloseTrackWithoutConnectionEnabled:(BOOL)isCloseTrackWithoutConnectionEnabled isKickoutEnabled:(BOOL)isKickoutEnabled isUnifiedSDPEnabled:(BOOL)isUnifiedSDPEnabled isBookmarkEnabled:(BOOL)isBookmarkEnabled isPersonalConferenceChatIndependencyAllowed:(BOOL)isPersonalConferenceChatIndependencyAllowed isDeviceListenerEnabled:(BOOL)isDeviceListenerEnabled isInstantConferenceInviteAllowed:(BOOL)isInstantConferenceInviteAllowed isHostRejoinEnabled:(BOOL)isHostRejoinEnabled isVideoEffectsEnabled:(BOOL)isVideoEffectsEnabled isStereoUpstreamEnabled:(BOOL)isStereoUpstreamEnabled isChatSwitchEnabled:(BOOL)isChatSwitchEnabled isSmartAudioConferenceEnabled:(BOOL)isSmartAudioConferenceEnabled isCoHostStartEnabled:(BOOL)isCoHostStartEnabled isAudioStreamingEnabled:(BOOL)isAudioStreamingEnabled isAssignAsHostAllowed:(BOOL)isAssignAsHostAllowed isEventLogEnabled:(BOOL)isEventLogEnabled isAnimeSmileyEnabled:(BOOL)isAnimeSmileyEnabled isRecordingAllowed:(BOOL)isRecordingAllowed isRecordingEnabled:(BOOL)isRecordingEnabled isMuteUserEnabled:(BOOL)isMuteUserEnabled isStreamingEnabled:(BOOL)isStreamingEnabled isEventNomenclatureEnabled:(BOOL)isEventNomenclatureEnabled isScreenShareLayoutEnabled:(BOOL)isScreenShareLayoutEnabled isConfigurationsEnabled:(BOOL)isConfigurationsEnabled isSwitchToVideoAllowed:(BOOL)isSwitchToVideoAllowed isAssociateResourceEnabled:(BOOL)isAssociateResourceEnabled isSpecialReactionsEnabled:(BOOL)isSpecialReactionsEnabled isWhiteBoardAllowed:(BOOL)isWhiteBoardAllowed isGuestConferenceEnabled:(BOOL)isGuestConferenceEnabled isNewAudioGridViewEnabled:(BOOL)isNewAudioGridViewEnabled isSmartConferenceEnabled:(BOOL)isSmartConferenceEnabled isSecondaryAdminAudioRestrictionEnabled:(BOOL)isSecondaryAdminAudioRestrictionEnabled isGridSubscriberEnabled:(BOOL)isGridSubscriberEnabled isGridViewEnabled:(BOOL)isGridViewEnabled isPinUserVideoEnabled:(BOOL)isPinUserVideoEnabled isSpotlightEnabled:(BOOL)isSpotlightEnabled isLowBandwidthModeEnabled:(BOOL)isLowBandwidthModeEnabled isSetAsHostEnabled:(BOOL)isSetAsHostEnabled isPresentationRequestsEnabled:(BOOL)isPresentationRequestsEnabled isMuteAllEnabled:(BOOL)isMuteAllEnabled isVideoEffectsSettingsEnabled:(BOOL)isVideoEffectsSettingsEnabled isAddDeviceEnabled:(BOOL)isAddDeviceEnabled isGroupCallFocusModeAllowed:(BOOL)isGroupCallFocusModeAllowed isGifsEnabled:(BOOL)isGifsEnabled isStatsEnabled:(BOOL)isStatsEnabled isActiveSpeakerInGridViewEnabled:(BOOL)isActiveSpeakerInGridViewEnabled isSVCEnabled:(BOOL)isSVCEnabled isUnifiedScreenShareEnabled:(BOOL)isUnifiedScreenShareEnabled isUserLevelReactionEnabled:(BOOL)isUserLevelReactionEnabled __attribute__((swift_name("init(isStereoDownStreamEnabled:isComputerAudioEnabled:isLayoutSwitchEnabled:isSpotlightAudioRestrictionEnabled:isNotebookLHSEnabled:isHighResolutionEnabled:isThreadsInConferenceEnabled:isPersonalConfigEnabled:isParallelConnectionEnabled:isCoHostEnabled:isDownstreamConnectionEnabled:isNomenclatureEnabled:isUnifiedMixingEnabled:isBubbleUIEnabled:isDefaultGridEnabled:isCSRCProfilePicEnabled:isTrackCloseEnabled:isNotebookIntegrationEnabled:isCloseTrackWithoutConnectionEnabled:isKickoutEnabled:isUnifiedSDPEnabled:isBookmarkEnabled:isPersonalConferenceChatIndependencyAllowed:isDeviceListenerEnabled:isInstantConferenceInviteAllowed:isHostRejoinEnabled:isVideoEffectsEnabled:isStereoUpstreamEnabled:isChatSwitchEnabled:isSmartAudioConferenceEnabled:isCoHostStartEnabled:isAudioStreamingEnabled:isAssignAsHostAllowed:isEventLogEnabled:isAnimeSmileyEnabled:isRecordingAllowed:isRecordingEnabled:isMuteUserEnabled:isStreamingEnabled:isEventNomenclatureEnabled:isScreenShareLayoutEnabled:isConfigurationsEnabled:isSwitchToVideoAllowed:isAssociateResourceEnabled:isSpecialReactionsEnabled:isWhiteBoardAllowed:isGuestConferenceEnabled:isNewAudioGridViewEnabled:isSmartConferenceEnabled:isSecondaryAdminAudioRestrictionEnabled:isGridSubscriberEnabled:isGridViewEnabled:isPinUserVideoEnabled:isSpotlightEnabled:isLowBandwidthModeEnabled:isSetAsHostEnabled:isPresentationRequestsEnabled:isMuteAllEnabled:isVideoEffectsSettingsEnabled:isAddDeviceEnabled:isGroupCallFocusModeAllowed:isGifsEnabled:isStatsEnabled:isActiveSpeakerInGridViewEnabled:isSVCEnabled:isUnifiedScreenShareEnabled:isUserLevelReactionEnabled:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientGlobalSettings *)doCopyIsStereoDownStreamEnabled:(BOOL)isStereoDownStreamEnabled isComputerAudioEnabled:(BOOL)isComputerAudioEnabled isLayoutSwitchEnabled:(BOOL)isLayoutSwitchEnabled isSpotlightAudioRestrictionEnabled:(BOOL)isSpotlightAudioRestrictionEnabled isNotebookLHSEnabled:(BOOL)isNotebookLHSEnabled isHighResolutionEnabled:(BOOL)isHighResolutionEnabled isThreadsInConferenceEnabled:(BOOL)isThreadsInConferenceEnabled isPersonalConfigEnabled:(BOOL)isPersonalConfigEnabled isParallelConnectionEnabled:(BOOL)isParallelConnectionEnabled isCoHostEnabled:(BOOL)isCoHostEnabled isDownstreamConnectionEnabled:(BOOL)isDownstreamConnectionEnabled isNomenclatureEnabled:(BOOL)isNomenclatureEnabled isUnifiedMixingEnabled:(BOOL)isUnifiedMixingEnabled isBubbleUIEnabled:(BOOL)isBubbleUIEnabled isDefaultGridEnabled:(BOOL)isDefaultGridEnabled isCSRCProfilePicEnabled:(BOOL)isCSRCProfilePicEnabled isTrackCloseEnabled:(BOOL)isTrackCloseEnabled isNotebookIntegrationEnabled:(BOOL)isNotebookIntegrationEnabled isCloseTrackWithoutConnectionEnabled:(BOOL)isCloseTrackWithoutConnectionEnabled isKickoutEnabled:(BOOL)isKickoutEnabled isUnifiedSDPEnabled:(BOOL)isUnifiedSDPEnabled isBookmarkEnabled:(BOOL)isBookmarkEnabled isPersonalConferenceChatIndependencyAllowed:(BOOL)isPersonalConferenceChatIndependencyAllowed isDeviceListenerEnabled:(BOOL)isDeviceListenerEnabled isInstantConferenceInviteAllowed:(BOOL)isInstantConferenceInviteAllowed isHostRejoinEnabled:(BOOL)isHostRejoinEnabled isVideoEffectsEnabled:(BOOL)isVideoEffectsEnabled isStereoUpstreamEnabled:(BOOL)isStereoUpstreamEnabled isChatSwitchEnabled:(BOOL)isChatSwitchEnabled isSmartAudioConferenceEnabled:(BOOL)isSmartAudioConferenceEnabled isCoHostStartEnabled:(BOOL)isCoHostStartEnabled isAudioStreamingEnabled:(BOOL)isAudioStreamingEnabled isAssignAsHostAllowed:(BOOL)isAssignAsHostAllowed isEventLogEnabled:(BOOL)isEventLogEnabled isAnimeSmileyEnabled:(BOOL)isAnimeSmileyEnabled isRecordingAllowed:(BOOL)isRecordingAllowed isRecordingEnabled:(BOOL)isRecordingEnabled isMuteUserEnabled:(BOOL)isMuteUserEnabled isStreamingEnabled:(BOOL)isStreamingEnabled isEventNomenclatureEnabled:(BOOL)isEventNomenclatureEnabled isScreenShareLayoutEnabled:(BOOL)isScreenShareLayoutEnabled isConfigurationsEnabled:(BOOL)isConfigurationsEnabled isSwitchToVideoAllowed:(BOOL)isSwitchToVideoAllowed isAssociateResourceEnabled:(BOOL)isAssociateResourceEnabled isSpecialReactionsEnabled:(BOOL)isSpecialReactionsEnabled isWhiteBoardAllowed:(BOOL)isWhiteBoardAllowed isGuestConferenceEnabled:(BOOL)isGuestConferenceEnabled isNewAudioGridViewEnabled:(BOOL)isNewAudioGridViewEnabled isSmartConferenceEnabled:(BOOL)isSmartConferenceEnabled isSecondaryAdminAudioRestrictionEnabled:(BOOL)isSecondaryAdminAudioRestrictionEnabled isGridSubscriberEnabled:(BOOL)isGridSubscriberEnabled isGridViewEnabled:(BOOL)isGridViewEnabled isPinUserVideoEnabled:(BOOL)isPinUserVideoEnabled isSpotlightEnabled:(BOOL)isSpotlightEnabled isLowBandwidthModeEnabled:(BOOL)isLowBandwidthModeEnabled isSetAsHostEnabled:(BOOL)isSetAsHostEnabled isPresentationRequestsEnabled:(BOOL)isPresentationRequestsEnabled isMuteAllEnabled:(BOOL)isMuteAllEnabled isVideoEffectsSettingsEnabled:(BOOL)isVideoEffectsSettingsEnabled isAddDeviceEnabled:(BOOL)isAddDeviceEnabled isGroupCallFocusModeAllowed:(BOOL)isGroupCallFocusModeAllowed isGifsEnabled:(BOOL)isGifsEnabled isStatsEnabled:(BOOL)isStatsEnabled isActiveSpeakerInGridViewEnabled:(BOOL)isActiveSpeakerInGridViewEnabled isSVCEnabled:(BOOL)isSVCEnabled isUnifiedScreenShareEnabled:(BOOL)isUnifiedScreenShareEnabled isUserLevelReactionEnabled:(BOOL)isUserLevelReactionEnabled __attribute__((swift_name("doCopy(isStereoDownStreamEnabled:isComputerAudioEnabled:isLayoutSwitchEnabled:isSpotlightAudioRestrictionEnabled:isNotebookLHSEnabled:isHighResolutionEnabled:isThreadsInConferenceEnabled:isPersonalConfigEnabled:isParallelConnectionEnabled:isCoHostEnabled:isDownstreamConnectionEnabled:isNomenclatureEnabled:isUnifiedMixingEnabled:isBubbleUIEnabled:isDefaultGridEnabled:isCSRCProfilePicEnabled:isTrackCloseEnabled:isNotebookIntegrationEnabled:isCloseTrackWithoutConnectionEnabled:isKickoutEnabled:isUnifiedSDPEnabled:isBookmarkEnabled:isPersonalConferenceChatIndependencyAllowed:isDeviceListenerEnabled:isInstantConferenceInviteAllowed:isHostRejoinEnabled:isVideoEffectsEnabled:isStereoUpstreamEnabled:isChatSwitchEnabled:isSmartAudioConferenceEnabled:isCoHostStartEnabled:isAudioStreamingEnabled:isAssignAsHostAllowed:isEventLogEnabled:isAnimeSmileyEnabled:isRecordingAllowed:isRecordingEnabled:isMuteUserEnabled:isStreamingEnabled:isEventNomenclatureEnabled:isScreenShareLayoutEnabled:isConfigurationsEnabled:isSwitchToVideoAllowed:isAssociateResourceEnabled:isSpecialReactionsEnabled:isWhiteBoardAllowed:isGuestConferenceEnabled:isNewAudioGridViewEnabled:isSmartConferenceEnabled:isSecondaryAdminAudioRestrictionEnabled:isGridSubscriberEnabled:isGridViewEnabled:isPinUserVideoEnabled:isSpotlightEnabled:isLowBandwidthModeEnabled:isSetAsHostEnabled:isPresentationRequestsEnabled:isMuteAllEnabled:isVideoEffectsSettingsEnabled:isAddDeviceEnabled:isGroupCallFocusModeAllowed:isGifsEnabled:isStatsEnabled:isActiveSpeakerInGridViewEnabled:isSVCEnabled:isUnifiedScreenShareEnabled:isUserLevelReactionEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isActiveSpeakerInGridViewEnabled __attribute__((swift_name("isActiveSpeakerInGridViewEnabled")));
@property (readonly) BOOL isAddDeviceEnabled __attribute__((swift_name("isAddDeviceEnabled")));
@property (readonly) BOOL isAnimeSmileyEnabled __attribute__((swift_name("isAnimeSmileyEnabled")));
@property (readonly) BOOL isAssignAsHostAllowed __attribute__((swift_name("isAssignAsHostAllowed")));
@property (readonly) BOOL isAssociateResourceEnabled __attribute__((swift_name("isAssociateResourceEnabled")));
@property (readonly) BOOL isAudioStreamingEnabled __attribute__((swift_name("isAudioStreamingEnabled")));
@property (readonly) BOOL isBookmarkEnabled __attribute__((swift_name("isBookmarkEnabled")));
@property (readonly) BOOL isBubbleUIEnabled __attribute__((swift_name("isBubbleUIEnabled")));
@property (readonly) BOOL isCSRCProfilePicEnabled __attribute__((swift_name("isCSRCProfilePicEnabled")));
@property (readonly) BOOL isChatSwitchEnabled __attribute__((swift_name("isChatSwitchEnabled")));
@property (readonly) BOOL isCloseTrackWithoutConnectionEnabled __attribute__((swift_name("isCloseTrackWithoutConnectionEnabled")));
@property (readonly) BOOL isCoHostEnabled __attribute__((swift_name("isCoHostEnabled")));
@property (readonly) BOOL isCoHostStartEnabled __attribute__((swift_name("isCoHostStartEnabled")));
@property (readonly) BOOL isComputerAudioEnabled __attribute__((swift_name("isComputerAudioEnabled")));
@property (readonly) BOOL isConfigurationsEnabled __attribute__((swift_name("isConfigurationsEnabled")));
@property (readonly) BOOL isDefaultGridViewEnabled __attribute__((swift_name("isDefaultGridViewEnabled")));
@property (readonly) BOOL isDeviceListenerEnabled __attribute__((swift_name("isDeviceListenerEnabled")));
@property (readonly) BOOL isDownstreamConnectionEnabled __attribute__((swift_name("isDownstreamConnectionEnabled")));
@property (readonly) BOOL isEventLogEnabled __attribute__((swift_name("isEventLogEnabled")));
@property (readonly) BOOL isEventNomenclatureEnabled __attribute__((swift_name("isEventNomenclatureEnabled")));
@property (readonly) BOOL isGifsEnabled __attribute__((swift_name("isGifsEnabled")));
@property (readonly) BOOL isGridSubscriberEnabled __attribute__((swift_name("isGridSubscriberEnabled")));
@property (readonly) BOOL isGridViewEnabled __attribute__((swift_name("isGridViewEnabled")));
@property (readonly) BOOL isGroupCallFocusModeAllowed __attribute__((swift_name("isGroupCallFocusModeAllowed")));
@property (readonly) BOOL isGuestConferenceEnabled __attribute__((swift_name("isGuestConferenceEnabled")));
@property (readonly) BOOL isHighResolutionEnabled __attribute__((swift_name("isHighResolutionEnabled")));
@property (readonly) BOOL isHostRejoinEnabled __attribute__((swift_name("isHostRejoinEnabled")));
@property (readonly) BOOL isInstantConferenceInviteAllowed __attribute__((swift_name("isInstantConferenceInviteAllowed")));
@property (readonly) BOOL isKickoutEnabled __attribute__((swift_name("isKickoutEnabled")));
@property (readonly) BOOL isLayoutSwitchEnabled __attribute__((swift_name("isLayoutSwitchEnabled")));
@property (readonly) BOOL isLowBandwidthModeEnabled __attribute__((swift_name("isLowBandwidthModeEnabled")));
@property (readonly) BOOL isMuteAllEnabled __attribute__((swift_name("isMuteAllEnabled")));
@property (readonly) BOOL isMuteUserEnabled __attribute__((swift_name("isMuteUserEnabled")));
@property (readonly) BOOL isNewAudioGridViewEnabled __attribute__((swift_name("isNewAudioGridViewEnabled")));
@property (readonly) BOOL isNomenclatureEnabled __attribute__((swift_name("isNomenclatureEnabled")));
@property (readonly) BOOL isNotebookIntegrationEnabled __attribute__((swift_name("isNotebookIntegrationEnabled")));
@property (readonly) BOOL isNotebookLHSEnabled __attribute__((swift_name("isNotebookLHSEnabled")));
@property (readonly) BOOL isParallelConnectionEnabled __attribute__((swift_name("isParallelConnectionEnabled")));
@property (readonly) BOOL isPersonalConferenceChatIndependencyAllowed __attribute__((swift_name("isPersonalConferenceChatIndependencyAllowed")));
@property (readonly) BOOL isPersonalConfigEnabled __attribute__((swift_name("isPersonalConfigEnabled")));
@property (readonly) BOOL isPinUserVideoEnabled __attribute__((swift_name("isPinUserVideoEnabled")));
@property (readonly) BOOL isPresentationRequestsEnabled __attribute__((swift_name("isPresentationRequestsEnabled")));
@property (readonly) BOOL isRecordingAllowed __attribute__((swift_name("isRecordingAllowed")));
@property (readonly) BOOL isRecordingEnabled __attribute__((swift_name("isRecordingEnabled")));
@property (readonly) BOOL isSVCEnabled __attribute__((swift_name("isSVCEnabled")));
@property (readonly) BOOL isScreenShareLayoutEnabled __attribute__((swift_name("isScreenShareLayoutEnabled")));
@property (readonly) BOOL isSecondaryAdminAudioRestrictionEnabled __attribute__((swift_name("isSecondaryAdminAudioRestrictionEnabled")));
@property (readonly) BOOL isSetAsHostEnabled __attribute__((swift_name("isSetAsHostEnabled")));
@property (readonly) BOOL isSmartAudioConferenceEnabled __attribute__((swift_name("isSmartAudioConferenceEnabled")));
@property (readonly) BOOL isSmartConferenceEnabled __attribute__((swift_name("isSmartConferenceEnabled")));
@property (readonly) BOOL isSpecialReactionsEnabled __attribute__((swift_name("isSpecialReactionsEnabled")));
@property (readonly) BOOL isSpotlightAudioRestrictionEnabled __attribute__((swift_name("isSpotlightAudioRestrictionEnabled")));
@property (readonly) BOOL isSpotlightEnabled __attribute__((swift_name("isSpotlightEnabled")));
@property (readonly) BOOL isStatsEnabled __attribute__((swift_name("isStatsEnabled")));
@property (readonly) BOOL isStereoDownStreamEnabled __attribute__((swift_name("isStereoDownStreamEnabled")));
@property (readonly) BOOL isStereoUpstreamEnabled __attribute__((swift_name("isStereoUpstreamEnabled")));
@property (readonly) BOOL isStreamingEnabled __attribute__((swift_name("isStreamingEnabled")));
@property (readonly) BOOL isSwitchToVideoAllowed __attribute__((swift_name("isSwitchToVideoAllowed")));
@property (readonly) BOOL isThreadsInConferenceEnabled __attribute__((swift_name("isThreadsInConferenceEnabled")));
@property (readonly) BOOL isTrackCloseEnabled __attribute__((swift_name("isTrackCloseEnabled")));
@property (readonly) BOOL isUnifiedMixingEnabled __attribute__((swift_name("isUnifiedMixingEnabled")));
@property (readonly) BOOL isUnifiedSDPEnabled __attribute__((swift_name("isUnifiedSDPEnabled")));
@property (readonly) BOOL isUnifiedScreenShareEnabled __attribute__((swift_name("isUnifiedScreenShareEnabled")));
@property (readonly) BOOL isUserLevelReactionEnabled __attribute__((swift_name("isUserLevelReactionEnabled")));
@property (readonly) BOOL isVideoEffectsEnabled __attribute__((swift_name("isVideoEffectsEnabled")));
@property (readonly) BOOL isVideoEffectsSettingsEnabled __attribute__((swift_name("isVideoEffectsSettingsEnabled")));
@property (readonly) BOOL isWhiteBoardAllowed __attribute__((swift_name("isWhiteBoardAllowed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HostDetails")))
@interface MeetingClientHostDetails : MeetingClientBase
- (instancetype)initWithName:(NSString * _Nullable)name id:(NSString * _Nullable)id __attribute__((swift_name("init(name:id:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientHostDetails *)doCopyName:(NSString * _Nullable)name id:(NSString * _Nullable)id __attribute__((swift_name("doCopy(name:id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaConnectionState")))
@interface MeetingClientMediaConnectionState : MeetingClientKotlinEnum<MeetingClientMediaConnectionState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientMediaConnectionState *none __attribute__((swift_name("none")));
@property (class, readonly) MeetingClientMediaConnectionState *connecting __attribute__((swift_name("connecting")));
@property (class, readonly) MeetingClientMediaConnectionState *reconnecting __attribute__((swift_name("reconnecting")));
@property (class, readonly) MeetingClientMediaConnectionState *connected __attribute__((swift_name("connected")));
+ (MeetingClientKotlinArray<MeetingClientMediaConnectionState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientMediaConnectionState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaConnectionType")))
@interface MeetingClientMediaConnectionType : MeetingClientKotlinEnum<MeetingClientMediaConnectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientMediaConnectionType *audioUpStream __attribute__((swift_name("audioUpStream")));
@property (class, readonly) MeetingClientMediaConnectionType *videoUpStream __attribute__((swift_name("videoUpStream")));
@property (class, readonly) MeetingClientMediaConnectionType *screenShareUpStream __attribute__((swift_name("screenShareUpStream")));
@property (class, readonly) MeetingClientMediaConnectionType *audioDownStream __attribute__((swift_name("audioDownStream")));
@property (class, readonly) MeetingClientMediaConnectionType *videoDownStream __attribute__((swift_name("videoDownStream")));
@property (class, readonly) MeetingClientMediaConnectionType *screenShareDownStream __attribute__((swift_name("screenShareDownStream")));
@property (class, readonly) MeetingClientMediaConnectionType *dataChannel __attribute__((swift_name("dataChannel")));
+ (MeetingClientKotlinArray<MeetingClientMediaConnectionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientMediaConnectionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaServerReachabilityReport")))
@interface MeetingClientMediaServerReachabilityReport : MeetingClientBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSArray<MeetingClientMediaServerReachabilityReportMediaServerIPState *> *ipStates __attribute__((swift_name("ipStates")));
@property (readonly) MeetingClientMediaServerReachabilityReportStatus *testStatus __attribute__((swift_name("testStatus")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaServerReachabilityReport.MediaServerIPState")))
@interface MeetingClientMediaServerReachabilityReportMediaServerIPState : MeetingClientBase
- (instancetype)initWithPortName:(NSString *)portName portNumber:(NSString *)portNumber ipAddress:(NSString *)ipAddress status:(MeetingClientMediaServerReachabilityReportMediaServerIPStateStatus *)status __attribute__((swift_name("init(portName:portNumber:ipAddress:status:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientMediaServerReachabilityReportMediaServerIPState *)doCopyPortName:(NSString *)portName portNumber:(NSString *)portNumber ipAddress:(NSString *)ipAddress status:(MeetingClientMediaServerReachabilityReportMediaServerIPStateStatus *)status __attribute__((swift_name("doCopy(portName:portNumber:ipAddress:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *ipAddress __attribute__((swift_name("ipAddress")));
@property (readonly) NSString *portName __attribute__((swift_name("portName")));
@property (readonly) NSString *portNumber __attribute__((swift_name("portNumber")));
@property (readonly) MeetingClientMediaServerReachabilityReportMediaServerIPStateStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaServerReachabilityReport.MediaServerIPStateStatus")))
@interface MeetingClientMediaServerReachabilityReportMediaServerIPStateStatus : MeetingClientKotlinEnum<MeetingClientMediaServerReachabilityReportMediaServerIPStateStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientMediaServerReachabilityReportMediaServerIPStateStatus *allowed __attribute__((swift_name("allowed")));
@property (class, readonly) MeetingClientMediaServerReachabilityReportMediaServerIPStateStatus *blocked __attribute__((swift_name("blocked")));
+ (MeetingClientKotlinArray<MeetingClientMediaServerReachabilityReportMediaServerIPStateStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientMediaServerReachabilityReportMediaServerIPStateStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaServerReachabilityReport.Status")))
@interface MeetingClientMediaServerReachabilityReportStatus : MeetingClientKotlinEnum<MeetingClientMediaServerReachabilityReportStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientMediaServerReachabilityReportStatus *initiated __attribute__((swift_name("initiated")));
@property (class, readonly) MeetingClientMediaServerReachabilityReportStatus *completed __attribute__((swift_name("completed")));
@property (class, readonly) MeetingClientMediaServerReachabilityReportStatus *notApplicable __attribute__((swift_name("notApplicable")));
+ (MeetingClientKotlinArray<MeetingClientMediaServerReachabilityReportStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientMediaServerReachabilityReportStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingDetails")))
@interface MeetingClientMeetingDetails : MeetingClientBase
- (instancetype)initWithTitle:(NSString * _Nullable)title isStreaming:(BOOL)isStreaming recording:(BOOL)recording isRecordingPaused:(BOOL)isRecordingPaused layoutType:(MeetingClientInt * _Nullable)layoutType isActive:(BOOL)isActive type:(NSString * _Nullable)type speakerCount:(MeetingClientInt * _Nullable)speakerCount mainSpeakerCount:(MeetingClientInt * _Nullable)mainSpeakerCount memberType:(NSString * _Nullable)memberType creator:(MeetingClientCreatorDetails * _Nullable)creator mode:(NSString * _Nullable)mode waitingRoomEnabled:(BOOL)waitingRoomEnabled confId:(NSString * _Nullable)confId confKey:(NSString * _Nullable)confKey host:(MeetingClientHostDetails * _Nullable)host startTime:(MeetingClientLong * _Nullable)startTime memberConnectionMode:(NSString * _Nullable)memberConnectionMode skipWaitingRoom:(BOOL)skipWaitingRoom gridLayoutSize:(MeetingClientInt * _Nullable)gridLayoutSize __attribute__((swift_name("init(title:isStreaming:recording:isRecordingPaused:layoutType:isActive:type:speakerCount:mainSpeakerCount:memberType:creator:mode:waitingRoomEnabled:confId:confKey:host:startTime:memberConnectionMode:skipWaitingRoom:gridLayoutSize:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientMeetingDetails *)doCopyTitle:(NSString * _Nullable)title isStreaming:(BOOL)isStreaming recording:(BOOL)recording isRecordingPaused:(BOOL)isRecordingPaused layoutType:(MeetingClientInt * _Nullable)layoutType isActive:(BOOL)isActive type:(NSString * _Nullable)type speakerCount:(MeetingClientInt * _Nullable)speakerCount mainSpeakerCount:(MeetingClientInt * _Nullable)mainSpeakerCount memberType:(NSString * _Nullable)memberType creator:(MeetingClientCreatorDetails * _Nullable)creator mode:(NSString * _Nullable)mode waitingRoomEnabled:(BOOL)waitingRoomEnabled confId:(NSString * _Nullable)confId confKey:(NSString * _Nullable)confKey host:(MeetingClientHostDetails * _Nullable)host startTime:(MeetingClientLong * _Nullable)startTime memberConnectionMode:(NSString * _Nullable)memberConnectionMode skipWaitingRoom:(BOOL)skipWaitingRoom gridLayoutSize:(MeetingClientInt * _Nullable)gridLayoutSize __attribute__((swift_name("doCopy(title:isStreaming:recording:isRecordingPaused:layoutType:isActive:type:speakerCount:mainSpeakerCount:memberType:creator:mode:waitingRoomEnabled:confId:confKey:host:startTime:memberConnectionMode:skipWaitingRoom:gridLayoutSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable confId __attribute__((swift_name("confId")));
@property (readonly) NSString * _Nullable confKey __attribute__((swift_name("confKey")));
@property (readonly) MeetingClientCreatorDetails * _Nullable creator __attribute__((swift_name("creator")));
@property (readonly) MeetingClientInt * _Nullable gridLayoutSize __attribute__((swift_name("gridLayoutSize")));
@property (readonly) MeetingClientHostDetails * _Nullable host __attribute__((swift_name("host")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isRecordingPaused __attribute__((swift_name("isRecordingPaused")));
@property (readonly) BOOL isStreaming __attribute__((swift_name("isStreaming")));
@property (readonly) MeetingClientInt * _Nullable layoutType __attribute__((swift_name("layoutType")));
@property (readonly) MeetingClientInt * _Nullable mainSpeakerCount __attribute__((swift_name("mainSpeakerCount")));
@property (readonly) NSString * _Nullable memberConnectionMode __attribute__((swift_name("memberConnectionMode")));
@property (readonly) NSString * _Nullable memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable mode __attribute__((swift_name("mode")));
@property (readonly) BOOL recording __attribute__((swift_name("recording")));
@property (readonly) BOOL skipWaitingRoom __attribute__((swift_name("skipWaitingRoom")));
@property (readonly) MeetingClientInt * _Nullable speakerCount __attribute__((swift_name("speakerCount")));
@property (readonly) MeetingClientLong * _Nullable startTime __attribute__((swift_name("startTime")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) BOOL waitingRoomEnabled __attribute__((swift_name("waitingRoomEnabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingLayout")))
@interface MeetingClientMeetingLayout : MeetingClientKotlinEnum<MeetingClientMeetingLayout *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MeetingClientMeetingLayoutCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MeetingClientMeetingLayout *stage __attribute__((swift_name("stage")));
@property (class, readonly) MeetingClientMeetingLayout *grid __attribute__((swift_name("grid")));
+ (MeetingClientKotlinArray<MeetingClientMeetingLayout *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientMeetingLayout *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingLayout.Companion")))
@interface MeetingClientMeetingLayoutCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientMeetingLayoutCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientMeetingLayout *)actualValueOfValue:(NSString *)value __attribute__((swift_name("actualValueOf(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemberNotifierData")))
@interface MeetingClientMemberNotifierData : MeetingClientBase
- (instancetype)initWithRtcpUserId:(NSString *)rtcpUserId name:(NSString *)name isGuest:(BOOL)isGuest __attribute__((swift_name("init(rtcpUserId:name:isGuest:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientMemberNotifierData *)doCopyRtcpUserId:(NSString *)rtcpUserId name:(NSString *)name isGuest:(BOOL)isGuest __attribute__((swift_name("doCopy(rtcpUserId:name:isGuest:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isGuest __attribute__((swift_name("isGuest")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *rtcpUserId __attribute__((swift_name("rtcpUserId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemberRole")))
@interface MeetingClientMemberRole : MeetingClientKotlinEnum<MeetingClientMemberRole *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MeetingClientMemberRoleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MeetingClientMemberRole *primaryAdmin __attribute__((swift_name("primaryAdmin")));
@property (class, readonly) MeetingClientMemberRole *secondaryAdmin __attribute__((swift_name("secondaryAdmin")));
@property (class, readonly) MeetingClientMemberRole *participant __attribute__((swift_name("participant")));
@property (class, readonly) MeetingClientMemberRole *none __attribute__((swift_name("none")));
+ (MeetingClientKotlinArray<MeetingClientMemberRole *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientMemberRole *> *entries __attribute__((swift_name("entries")));
@property (readonly) MeetingClientUserRolesUserRoleDetails * _Nullable details __attribute__((swift_name("details")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemberRole.Companion")))
@interface MeetingClientMemberRoleCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientMemberRoleCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientMemberRole *)actualValueOfValue:(NSString *)value __attribute__((swift_name("actualValueOf(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemberType")))
@interface MeetingClientMemberType : MeetingClientKotlinEnum<MeetingClientMemberType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MeetingClientMemberTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MeetingClientMemberType *active __attribute__((swift_name("active")));
@property (class, readonly) MeetingClientMemberType *silent __attribute__((swift_name("silent")));
+ (MeetingClientKotlinArray<MeetingClientMemberType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientMemberType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemberType.Companion")))
@interface MeetingClientMemberTypeCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientMemberTypeCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientMemberType *)actualValueOfValue:(NSString *)value __attribute__((swift_name("actualValueOf(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoAudioSourceNotifierData")))
@interface MeetingClientNoAudioSourceNotifierData : MeetingClientBase
- (instancetype)initWithSwitchToInternetAudio:(void (^)(void))switchToInternetAudio ignore:(void (^)(void))ignore __attribute__((swift_name("init(switchToInternetAudio:ignore:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientNoAudioSourceNotifierData *)doCopySwitchToInternetAudio:(void (^)(void))switchToInternetAudio ignore:(void (^)(void))ignore __attribute__((swift_name("doCopy(switchToInternetAudio:ignore:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ignore)(void) __attribute__((swift_name("ignore")));
@property (readonly) void (^switchToInternetAudio)(void) __attribute__((swift_name("switchToInternetAudio")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageDetail")))
@interface MeetingClientPageDetail : MeetingClientBase
- (instancetype)initWithPageNumber:(int32_t)pageNumber members:(NSArray<MeetingClientRTCPMeetingsMember *> *)members __attribute__((swift_name("init(pageNumber:members:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientPageDetail *)doCopyPageNumber:(int32_t)pageNumber members:(NSArray<MeetingClientRTCPMeetingsMember *> *)members __attribute__((swift_name("doCopy(pageNumber:members:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MeetingClientRTCPMeetingsMember *> *members __attribute__((swift_name("members")));
@property (readonly) int32_t pageNumber __attribute__((swift_name("pageNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneAudioDetails")))
@interface MeetingClientPhoneAudioDetails : MeetingClientBase
- (instancetype)initWithPin:(NSString *)pin countryCode:(NSString * _Nullable)countryCode accessCode:(NSString *)accessCode countryName:(NSString * _Nullable)countryName countryList:(NSArray<NSString *> *)countryList numbers:(NSArray<MeetingClientPhoneAudioDetailsPhoneAudioNumber *> *)numbers __attribute__((swift_name("init(pin:countryCode:accessCode:countryName:countryList:numbers:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientPhoneAudioDetails *)doCopyPin:(NSString *)pin countryCode:(NSString * _Nullable)countryCode accessCode:(NSString *)accessCode countryName:(NSString * _Nullable)countryName countryList:(NSArray<NSString *> *)countryList numbers:(NSArray<MeetingClientPhoneAudioDetailsPhoneAudioNumber *> *)numbers __attribute__((swift_name("doCopy(pin:countryCode:accessCode:countryName:countryList:numbers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessCode __attribute__((swift_name("accessCode")));
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property (readonly) NSArray<NSString *> *countryList __attribute__((swift_name("countryList")));
@property (readonly) NSString * _Nullable countryName __attribute__((swift_name("countryName")));
@property (readonly) NSArray<MeetingClientPhoneAudioDetailsPhoneAudioNumber *> *numbers __attribute__((swift_name("numbers")));
@property (readonly) NSString *pin __attribute__((swift_name("pin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneAudioDetails.PhoneAudioNumber")))
@interface MeetingClientPhoneAudioDetailsPhoneAudioNumber : MeetingClientBase
- (instancetype)initWithCountryCode:(NSString * _Nullable)countryCode country:(NSString *)country number:(NSString *)number type:(NSString *)type region:(NSString *)region isTollFree:(BOOL)isTollFree __attribute__((swift_name("init(countryCode:country:number:type:region:isTollFree:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientPhoneAudioDetailsPhoneAudioNumber *)doCopyCountryCode:(NSString * _Nullable)countryCode country:(NSString *)country number:(NSString *)number type:(NSString *)type region:(NSString *)region isTollFree:(BOOL)isTollFree __attribute__((swift_name("doCopy(countryCode:country:number:type:region:isTollFree:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property (readonly) BOOL isTollFree __attribute__((swift_name("isTollFree")));
@property (readonly) NSString *number __attribute__((swift_name("number")));
@property (readonly) NSString *region __attribute__((swift_name("region")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimaryAdminAssignedNotifierData")))
@interface MeetingClientPrimaryAdminAssignedNotifierData : MeetingClientBase
- (instancetype)initWithAssignedPrimaryAdmin:(MeetingClientPrimaryAdminAssignedNotifierDataPrimaryAdminDetail *)assignedPrimaryAdmin previousPrimaryAdmin:(MeetingClientPrimaryAdminAssignedNotifierDataPrimaryAdminDetail *)previousPrimaryAdmin __attribute__((swift_name("init(assignedPrimaryAdmin:previousPrimaryAdmin:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientPrimaryAdminAssignedNotifierData *)doCopyAssignedPrimaryAdmin:(MeetingClientPrimaryAdminAssignedNotifierDataPrimaryAdminDetail *)assignedPrimaryAdmin previousPrimaryAdmin:(MeetingClientPrimaryAdminAssignedNotifierDataPrimaryAdminDetail *)previousPrimaryAdmin __attribute__((swift_name("doCopy(assignedPrimaryAdmin:previousPrimaryAdmin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MeetingClientPrimaryAdminAssignedNotifierDataPrimaryAdminDetail *assignedPrimaryAdmin __attribute__((swift_name("assignedPrimaryAdmin")));
@property (readonly) MeetingClientPrimaryAdminAssignedNotifierDataPrimaryAdminDetail *previousPrimaryAdmin __attribute__((swift_name("previousPrimaryAdmin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimaryAdminAssignedNotifierData.PrimaryAdminDetail")))
@interface MeetingClientPrimaryAdminAssignedNotifierDataPrimaryAdminDetail : MeetingClientBase
- (instancetype)initWithUserId:(NSString *)userId userName:(NSString *)userName role:(MeetingClientMemberRole *)role __attribute__((swift_name("init(userId:userName:role:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientPrimaryAdminAssignedNotifierDataPrimaryAdminDetail *)doCopyUserId:(NSString *)userId userName:(NSString *)userName role:(MeetingClientMemberRole *)role __attribute__((swift_name("doCopy(userId:userName:role:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MeetingClientMemberRole *role __attribute__((swift_name("role")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString *userName __attribute__((swift_name("userName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPAudioManagerEvent")))
@interface MeetingClientRTCPAudioManagerEvent : MeetingClientKotlinEnum<MeetingClientRTCPAudioManagerEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientRTCPAudioManagerEvent *oninitializationrequired __attribute__((swift_name("oninitializationrequired")));
@property (class, readonly) MeetingClientRTCPAudioManagerEvent *onreleaserequested __attribute__((swift_name("onreleaserequested")));
@property (class, readonly) MeetingClientRTCPAudioManagerEvent *ondisableearpieceforscreenshare __attribute__((swift_name("ondisableearpieceforscreenshare")));
@property (class, readonly) MeetingClientRTCPAudioManagerEvent *ondisableearpieceaftervideorestrictionlift __attribute__((swift_name("ondisableearpieceaftervideorestrictionlift")));
+ (MeetingClientKotlinArray<MeetingClientRTCPAudioManagerEvent *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientRTCPAudioManagerEvent *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingRequest")))
@interface MeetingClientRTCPMeetingRequest : MeetingClientBase
- (instancetype)initWithRtcpUserId:(NSString *)rtcpUserId name:(NSString * _Nullable)name requestType:(MeetingClientRequestType *)requestType isGuest:(BOOL)isGuest __attribute__((swift_name("init(rtcpUserId:name:requestType:isGuest:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientRTCPMeetingRequest *)doCopyRtcpUserId:(NSString *)rtcpUserId name:(NSString * _Nullable)name requestType:(MeetingClientRequestType *)requestType isGuest:(BOOL)isGuest __attribute__((swift_name("doCopy(rtcpUserId:name:requestType:isGuest:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isGuest __attribute__((swift_name("isGuest")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) MeetingClientRequestType *requestType __attribute__((swift_name("requestType")));
@property (readonly) NSString *rtcpUserId __attribute__((swift_name("rtcpUserId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingShareRequest")))
@interface MeetingClientRTCPMeetingShareRequest : MeetingClientBase
- (instancetype)initWithRtcpUserId:(NSString *)rtcpUserId name:(NSString * _Nullable)name shareType:(MeetingClientShareType *)shareType isGuest:(BOOL)isGuest __attribute__((swift_name("init(rtcpUserId:name:shareType:isGuest:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientRTCPMeetingShareRequest *)doCopyRtcpUserId:(NSString *)rtcpUserId name:(NSString * _Nullable)name shareType:(MeetingClientShareType *)shareType isGuest:(BOOL)isGuest __attribute__((swift_name("doCopy(rtcpUserId:name:shareType:isGuest:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isGuest __attribute__((swift_name("isGuest")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString *rtcpUserId __attribute__((swift_name("rtcpUserId")));
@property (readonly) MeetingClientShareType *shareType __attribute__((swift_name("shareType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingState")))
@interface MeetingClientRTCPMeetingState : MeetingClientKotlinEnum<MeetingClientRTCPMeetingState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientRTCPMeetingState *notStarted __attribute__((swift_name("notStarted")));
@property (class, readonly) MeetingClientRTCPMeetingState *active __attribute__((swift_name("active")));
@property (class, readonly) MeetingClientRTCPMeetingState *ended __attribute__((swift_name("ended")));
+ (MeetingClientKotlinArray<MeetingClientRTCPMeetingState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientRTCPMeetingState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsConfigurations")))
@interface MeetingClientRTCPMeetingsConfigurations : MeetingClientBase
- (instancetype)initWithUserId:(NSString * _Nullable)userId username:(NSString * _Nullable)username cACL:(MeetingClientInt * _Nullable)cACL uACLName:(NSString * _Nullable)uACLName uACLValue:(MeetingClientInt * _Nullable)uACLValue userSkipWaitingRoom:(BOOL)userSkipWaitingRoom recordingEnabled:(BOOL)recordingEnabled cdnDomain:(NSString * _Nullable)cdnDomain __attribute__((swift_name("init(userId:username:cACL:uACLName:uACLValue:userSkipWaitingRoom:recordingEnabled:cdnDomain:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientRTCPMeetingsConfigurations *)doCopyUserId:(NSString * _Nullable)userId username:(NSString * _Nullable)username cACL:(MeetingClientInt * _Nullable)cACL uACLName:(NSString * _Nullable)uACLName uACLValue:(MeetingClientInt * _Nullable)uACLValue userSkipWaitingRoom:(BOOL)userSkipWaitingRoom recordingEnabled:(BOOL)recordingEnabled cdnDomain:(NSString * _Nullable)cdnDomain __attribute__((swift_name("doCopy(userId:username:cACL:uACLName:uACLValue:userSkipWaitingRoom:recordingEnabled:cdnDomain:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable cdnDomain __attribute__((swift_name("cdnDomain")));
@property (readonly) id<MeetingClientKotlinx_coroutines_coreSharedFlow> conferenceACL __attribute__((swift_name("conferenceACL")));
@property (readonly) BOOL conferenceAssignSecondaryAdminRestricted __attribute__((swift_name("conferenceAssignSecondaryAdminRestricted")));
@property (readonly) BOOL conferenceDialInEnabled __attribute__((swift_name("conferenceDialInEnabled")));
@property (readonly) BOOL conferenceDisableAudioAllRestricted __attribute__((swift_name("conferenceDisableAudioAllRestricted")));
@property (readonly) BOOL conferenceEnableAudioRestricted __attribute__((swift_name("conferenceEnableAudioRestricted")));
@property (readonly) BOOL conferenceEnableVideoRestricted __attribute__((swift_name("conferenceEnableVideoRestricted")));
@property (readonly) BOOL conferenceLiveTranscriptEnabled __attribute__((swift_name("conferenceLiveTranscriptEnabled")));
@property (readonly) BOOL conferenceScreenShareBlocked __attribute__((swift_name("conferenceScreenShareBlocked")));
@property (readonly) BOOL conferenceScreenShareRestricted __attribute__((swift_name("conferenceScreenShareRestricted")));
@property (readonly) BOOL conferenceSingleVideoConferenceEnabled __attribute__((swift_name("conferenceSingleVideoConferenceEnabled")));
@property (readonly) BOOL conferenceVideoRestricted __attribute__((swift_name("conferenceVideoRestricted")));
@property (readonly) BOOL conferenceWaitingRoomEnabled __attribute__((swift_name("conferenceWaitingRoomEnabled")));
@property (readonly) MeetingClientGlobalSettings * _Nullable globalSettings __attribute__((swift_name("globalSettings")));
@property (readonly) BOOL isApproveRejectJoinRequestActionAllowed __attribute__((swift_name("isApproveRejectJoinRequestActionAllowed")));
@property (readonly) BOOL isApproveRejectShareRequestActionAllowed __attribute__((swift_name("isApproveRejectShareRequestActionAllowed")));
@property (readonly) BOOL isApproveRejectSpeakerActionAllowed __attribute__((swift_name("isApproveRejectSpeakerActionAllowed")));
@property (readonly) BOOL isEndActionAllowed __attribute__((swift_name("isEndActionAllowed")));
@property (readonly) BOOL isEndScreenShareActionAllowed __attribute__((swift_name("isEndScreenShareActionAllowed")));
@property (readonly) BOOL isExcludeConferenceACL __attribute__((swift_name("isExcludeConferenceACL")));
@property (readonly) BOOL isGlobalPinActionAllowed __attribute__((swift_name("isGlobalPinActionAllowed")));
@property (readonly) BOOL isJoinActionApproved __attribute__((swift_name("isJoinActionApproved")));
@property (readonly) BOOL isKickOutActionAllowed __attribute__((swift_name("isKickOutActionAllowed")));
@property (readonly) BOOL isMuteUnMuteAllActionAllowed __attribute__((swift_name("isMuteUnMuteAllActionAllowed")));
@property (readonly) BOOL isOverrideParticipantScreenShare __attribute__((swift_name("isOverrideParticipantScreenShare")));
@property (readonly) BOOL isOverrideRestrictScreenShare __attribute__((swift_name("isOverrideRestrictScreenShare")));
@property (readonly) BOOL isRecordingActionAllowed __attribute__((swift_name("isRecordingActionAllowed")));
@property (readonly) BOOL isRingActionAllowed __attribute__((swift_name("isRingActionAllowed")));
@property (readonly) BOOL isRingAllActionAllowed __attribute__((swift_name("isRingAllActionAllowed")));
@property (readonly) BOOL isScreenShareActionAllowed __attribute__((swift_name("isScreenShareActionAllowed")));
@property (readonly) BOOL isSendEmotionsActionAllowed __attribute__((swift_name("isSendEmotionsActionAllowed")));
@property (readonly) BOOL isSilentMember __attribute__((swift_name("isSilentMember")));
@property (readonly) BOOL isSkipWaitingRoomActionAllowed __attribute__((swift_name("isSkipWaitingRoomActionAllowed")));
@property (readonly) BOOL isSpotlightActionAllowed __attribute__((swift_name("isSpotlightActionAllowed")));
@property (readonly) BOOL isStartActionAllowed __attribute__((swift_name("isStartActionAllowed")));
@property (readonly) BOOL isSwitchMemberModeActionAllowed __attribute__((swift_name("isSwitchMemberModeActionAllowed")));
@property (readonly) BOOL isViewEmotionsActionAllowed __attribute__((swift_name("isViewEmotionsActionAllowed")));
@property (readonly) int64_t localTimeInMillis __attribute__((swift_name("localTimeInMillis")));
@property (readonly) BOOL recordingEnabled __attribute__((swift_name("recordingEnabled")));
@property (readonly) int64_t serverTimeInMillis __attribute__((swift_name("serverTimeInMillis")));
@property (readonly) MeetingClientUIPreference * _Nullable uiPreference __attribute__((swift_name("uiPreference")));
@property (readonly) id<MeetingClientKotlinx_coroutines_coreStateFlow> userACLName __attribute__((swift_name("userACLName")));
@property (readonly) id<MeetingClientKotlinx_coroutines_coreStateFlow> userACLValue __attribute__((swift_name("userACLValue")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@property BOOL userSkipWaitingRoom __attribute__((swift_name("userSkipWaitingRoom")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsMember")))
@interface MeetingClientRTCPMeetingsMember : MeetingClientBase
- (instancetype)initWithRtcpUserId:(NSString *)rtcpUserId name:(NSString * _Nullable)name aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientInt * _Nullable)aclValue viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking deviceType:(MeetingClientDeviceType *)deviceType stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId ringing:(BOOL)ringing isInSpotlight:(BOOL)isInSpotlight isGlobalPinned:(BOOL)isGlobalPinned isLocalPinned:(BOOL)isLocalPinned isGuest:(BOOL)isGuest firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime isDialInActiveUser:(BOOL)isDialInActiveUser __attribute__((swift_name("init(rtcpUserId:name:aclName:aclValue:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:deviceType:stageStreamId:gridStreamId:ringing:isInSpotlight:isGlobalPinned:isLocalPinned:isGuest:firstJoinedTime:joinedTime:isDialInActiveUser:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientRTCPMeetingsMember *)doCopyRtcpUserId:(NSString *)rtcpUserId name:(NSString * _Nullable)name aclName:(NSString * _Nullable)aclName aclValue:(MeetingClientInt * _Nullable)aclValue viewType:(MeetingClientViewType *)viewType memberType:(MeetingClientMemberType *)memberType role:(MeetingClientMemberRole *)role audioEnabled:(BOOL)audioEnabled enableAudioRestricted:(BOOL)enableAudioRestricted enableVideoRestricted:(BOOL)enableVideoRestricted videoEnabled:(BOOL)videoEnabled speaking:(BOOL)speaking deviceType:(MeetingClientDeviceType *)deviceType stageStreamId:(NSString * _Nullable)stageStreamId gridStreamId:(NSString * _Nullable)gridStreamId ringing:(BOOL)ringing isInSpotlight:(BOOL)isInSpotlight isGlobalPinned:(BOOL)isGlobalPinned isLocalPinned:(BOOL)isLocalPinned isGuest:(BOOL)isGuest firstJoinedTime:(MeetingClientLong * _Nullable)firstJoinedTime joinedTime:(MeetingClientLong * _Nullable)joinedTime isDialInActiveUser:(BOOL)isDialInActiveUser __attribute__((swift_name("doCopy(rtcpUserId:name:aclName:aclValue:viewType:memberType:role:audioEnabled:enableAudioRestricted:enableVideoRestricted:videoEnabled:speaking:deviceType:stageStreamId:gridStreamId:ringing:isInSpotlight:isGlobalPinned:isLocalPinned:isGuest:firstJoinedTime:joinedTime:isDialInActiveUser:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable aclName __attribute__((swift_name("aclName")));
@property (readonly) MeetingClientInt * _Nullable aclValue __attribute__((swift_name("aclValue")));
@property (readonly) BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) MeetingClientDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) BOOL enableAudioRestricted __attribute__((swift_name("enableAudioRestricted")));
@property (readonly) BOOL enableVideoRestricted __attribute__((swift_name("enableVideoRestricted")));
@property (readonly) MeetingClientLong * _Nullable firstJoinedTime __attribute__((swift_name("firstJoinedTime")));
@property (readonly) NSString * _Nullable gridStreamId __attribute__((swift_name("gridStreamId")));
@property (readonly) BOOL isDialInActiveUser __attribute__((swift_name("isDialInActiveUser")));
@property (readonly) BOOL isGlobalPinned __attribute__((swift_name("isGlobalPinned")));
@property (readonly) BOOL isGuest __attribute__((swift_name("isGuest")));
@property (readonly) BOOL isInSpotlight __attribute__((swift_name("isInSpotlight")));
@property (readonly) BOOL isLocalPinned __attribute__((swift_name("isLocalPinned")));
@property MeetingClientLong * _Nullable joinedTime __attribute__((swift_name("joinedTime")));
@property (readonly) MeetingClientRTCPMeetingVideo * _Nullable meetingVideo __attribute__((swift_name("meetingVideo")));
@property (readonly) MeetingClientMemberType *memberType __attribute__((swift_name("memberType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) BOOL ringing __attribute__((swift_name("ringing")));
@property (readonly) MeetingClientMemberRole *role __attribute__((swift_name("role")));
@property (readonly) NSString *rtcpUserId __attribute__((swift_name("rtcpUserId")));
@property (readonly) BOOL speaking __attribute__((swift_name("speaking")));
@property (readonly) NSString * _Nullable stageStreamId __attribute__((swift_name("stageStreamId")));
@property (readonly) BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) MeetingClientViewType *viewType __attribute__((swift_name("viewType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsRemoteConfigs")))
@interface MeetingClientRTCPMeetingsRemoteConfigs : MeetingClientBase
- (instancetype)initWithBaseUrl:(NSString *)baseUrl appName:(NSString *)appName appAccessKey:(NSString * _Nullable)appAccessKey bundleId:(NSString *)bundleId meetingAction:(MeetingClientRTCPMeetingsRemoteConfigsAction *)meetingAction ipVersion:(NSString * _Nullable)ipVersion isCustomDomain:(BOOL)isCustomDomain isCrossOriginEnabled:(BOOL)isCrossOriginEnabled usePolling:(BOOL)usePolling useDBEncryption:(BOOL)useDBEncryption __attribute__((swift_name("init(baseUrl:appName:appAccessKey:bundleId:meetingAction:ipVersion:isCustomDomain:isCrossOriginEnabled:usePolling:useDBEncryption:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientRTCPMeetingsRemoteConfigs *)doCopyBaseUrl:(NSString *)baseUrl appName:(NSString *)appName appAccessKey:(NSString * _Nullable)appAccessKey bundleId:(NSString *)bundleId meetingAction:(MeetingClientRTCPMeetingsRemoteConfigsAction *)meetingAction ipVersion:(NSString * _Nullable)ipVersion isCustomDomain:(BOOL)isCustomDomain isCrossOriginEnabled:(BOOL)isCrossOriginEnabled usePolling:(BOOL)usePolling useDBEncryption:(BOOL)useDBEncryption __attribute__((swift_name("doCopy(baseUrl:appName:appAccessKey:bundleId:meetingAction:ipVersion:isCustomDomain:isCrossOriginEnabled:usePolling:useDBEncryption:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable appAccessKey __attribute__((swift_name("appAccessKey")));
@property (readonly) NSString *appName __attribute__((swift_name("appName")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) NSString *bundleId __attribute__((swift_name("bundleId")));
@property (readonly) NSString * _Nullable ipVersion __attribute__((swift_name("ipVersion")));
@property (readonly) BOOL isCrossOriginEnabled __attribute__((swift_name("isCrossOriginEnabled")));
@property (readonly) BOOL isCustomDomain __attribute__((swift_name("isCustomDomain")));
@property (readonly) MeetingClientRTCPMeetingsRemoteConfigsAction *meetingAction __attribute__((swift_name("meetingAction")));
@property (readonly) BOOL useDBEncryption __attribute__((swift_name("useDBEncryption")));
@property (readonly) BOOL usePolling __attribute__((swift_name("usePolling")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsRemoteConfigs.Action")))
@interface MeetingClientRTCPMeetingsRemoteConfigsAction : MeetingClientKotlinEnum<MeetingClientRTCPMeetingsRemoteConfigsAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientRTCPMeetingsRemoteConfigsAction *start __attribute__((swift_name("start")));
@property (class, readonly) MeetingClientRTCPMeetingsRemoteConfigsAction *join __attribute__((swift_name("join")));
+ (MeetingClientKotlinArray<MeetingClientRTCPMeetingsRemoteConfigsAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientRTCPMeetingsRemoteConfigsAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsState")))
@interface MeetingClientRTCPMeetingsState : MeetingClientKotlinEnum<MeetingClientRTCPMeetingsState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientRTCPMeetingsState *none __attribute__((swift_name("none")));
@property (class, readonly) MeetingClientRTCPMeetingsState *waiting __attribute__((swift_name("waiting")));
@property (class, readonly) MeetingClientRTCPMeetingsState *connecting __attribute__((swift_name("connecting")));
@property (class, readonly) MeetingClientRTCPMeetingsState *initiated __attribute__((swift_name("initiated")));
@property (class, readonly) MeetingClientRTCPMeetingsState *connected __attribute__((swift_name("connected")));
+ (MeetingClientKotlinArray<MeetingClientRTCPMeetingsState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientRTCPMeetingsState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPWMSConfiguration")))
@interface MeetingClientRTCPWMSConfiguration : MeetingClientBase
- (instancetype)initWithRegisterWMSSession:(void (^)(NSString *, NSString *, NSString *, NSString *, MeetingClientInt *, NSString *, MeetingClientMutableDictionary<NSString *, NSString *> *, MeetingClientKotlinUnit *(^)(NSString *, NSString *), MeetingClientKotlinUnit *(^)(NSString *, MeetingClientInt *)))registerWMSSession disconnectWMSSession:(void (^)(NSString *))disconnectWMSSession isWMSSessionConnected:(MeetingClientBoolean *(^)(NSString *))isWMSSessionConnected wmsMessageDispatcher:(void (^)(NSString *, NSString *, NSDictionary<NSString *, NSString *> *, NSString *))wmsMessageDispatcher sessionId:(NSString * _Nullable)sessionId isCustomDomain:(BOOL)isCustomDomain __attribute__((swift_name("init(registerWMSSession:disconnectWMSSession:isWMSSessionConnected:wmsMessageDispatcher:sessionId:isCustomDomain:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientRTCPWMSConfiguration *)doCopyRegisterWMSSession:(void (^)(NSString *, NSString *, NSString *, NSString *, MeetingClientInt *, NSString *, MeetingClientMutableDictionary<NSString *, NSString *> *, MeetingClientKotlinUnit *(^)(NSString *, NSString *), MeetingClientKotlinUnit *(^)(NSString *, MeetingClientInt *)))registerWMSSession disconnectWMSSession:(void (^)(NSString *))disconnectWMSSession isWMSSessionConnected:(MeetingClientBoolean *(^)(NSString *))isWMSSessionConnected wmsMessageDispatcher:(void (^)(NSString *, NSString *, NSDictionary<NSString *, NSString *> *, NSString *))wmsMessageDispatcher sessionId:(NSString * _Nullable)sessionId isCustomDomain:(BOOL)isCustomDomain __attribute__((swift_name("doCopy(registerWMSSession:disconnectWMSSession:isWMSSessionConnected:wmsMessageDispatcher:sessionId:isCustomDomain:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^disconnectWMSSession)(NSString *) __attribute__((swift_name("disconnectWMSSession")));
@property (readonly) MeetingClientBoolean *(^isWMSSessionConnected)(NSString *) __attribute__((swift_name("isWMSSessionConnected")));
@property (readonly) void (^registerWMSSession)(NSString *, NSString *, NSString *, NSString *, MeetingClientInt *, NSString *, MeetingClientMutableDictionary<NSString *, NSString *> *, MeetingClientKotlinUnit *(^)(NSString *, NSString *), MeetingClientKotlinUnit *(^)(NSString *, MeetingClientInt *)) __attribute__((swift_name("registerWMSSession")));
@property (readonly) void (^wmsMessageDispatcher)(NSString *, NSString *, NSDictionary<NSString *, NSString *> *, NSString *) __attribute__((swift_name("wmsMessageDispatcher")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingNotifierData")))
@interface MeetingClientRecordingNotifierData : MeetingClientBase
- (instancetype)initWithStatus:(MeetingClientRecordingNotifierDataRecordingAction *)status actionUserId:(NSString *)actionUserId actionUserName:(NSString *)actionUserName __attribute__((swift_name("init(status:actionUserId:actionUserName:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientRecordingNotifierData *)doCopyStatus:(MeetingClientRecordingNotifierDataRecordingAction *)status actionUserId:(NSString *)actionUserId actionUserName:(NSString *)actionUserName __attribute__((swift_name("doCopy(status:actionUserId:actionUserName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *actionUserId __attribute__((swift_name("actionUserId")));
@property (readonly) NSString *actionUserName __attribute__((swift_name("actionUserName")));
@property (readonly) MeetingClientRecordingNotifierDataRecordingAction *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingNotifierData.RecordingAction")))
@interface MeetingClientRecordingNotifierDataRecordingAction : MeetingClientKotlinEnum<MeetingClientRecordingNotifierDataRecordingAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientRecordingNotifierDataRecordingAction *started __attribute__((swift_name("started")));
@property (class, readonly) MeetingClientRecordingNotifierDataRecordingAction *stopped __attribute__((swift_name("stopped")));
@property (class, readonly) MeetingClientRecordingNotifierDataRecordingAction *paused __attribute__((swift_name("paused")));
@property (class, readonly) MeetingClientRecordingNotifierDataRecordingAction *resumed __attribute__((swift_name("resumed")));
@property (class, readonly) MeetingClientRecordingNotifierDataRecordingAction *pauseFailed __attribute__((swift_name("pauseFailed")));
@property (class, readonly) MeetingClientRecordingNotifierDataRecordingAction *resumeFailed __attribute__((swift_name("resumeFailed")));
@property (class, readonly) MeetingClientRecordingNotifierDataRecordingAction *autoStarted __attribute__((swift_name("autoStarted")));
+ (MeetingClientKotlinArray<MeetingClientRecordingNotifierDataRecordingAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientRecordingNotifierDataRecordingAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemovedMemberNotifierData")))
@interface MeetingClientRemovedMemberNotifierData : MeetingClientBase
- (instancetype)initWithActionUserId:(NSString *)actionUserId actionUserName:(NSString *)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("init(actionUserId:actionUserName:primaryAdminId:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientRemovedMemberNotifierData *)doCopyActionUserId:(NSString *)actionUserId actionUserName:(NSString *)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("doCopy(actionUserId:actionUserName:primaryAdminId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *actionUserId __attribute__((swift_name("actionUserId")));
@property (readonly) NSString *actionUserName __attribute__((swift_name("actionUserName")));
@property (readonly) NSString *primaryAdminId __attribute__((swift_name("primaryAdminId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestType")))
@interface MeetingClientRequestType : MeetingClientKotlinEnum<MeetingClientRequestType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MeetingClientRequestTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MeetingClientRequestType *yetToJoinWaitingRoom __attribute__((swift_name("yetToJoinWaitingRoom")));
@property (class, readonly) MeetingClientRequestType *waitingRoom __attribute__((swift_name("waitingRoom")));
@property (class, readonly) MeetingClientRequestType *rejectedWaitingRoom __attribute__((swift_name("rejectedWaitingRoom")));
@property (class, readonly) MeetingClientRequestType *approvedWaitingRoom __attribute__((swift_name("approvedWaitingRoom")));
@property (class, readonly) MeetingClientRequestType *speak __attribute__((swift_name("speak")));
@property (class, readonly) MeetingClientRequestType *none __attribute__((swift_name("none")));
+ (MeetingClientKotlinArray<MeetingClientRequestType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientRequestType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestType.Companion")))
@interface MeetingClientRequestTypeCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientRequestTypeCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientRequestType *)actualValueOfValue:(NSString *)value __attribute__((swift_name("actualValueOf(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SecondaryAdminAssignedRemovedNotifierData")))
@interface MeetingClientSecondaryAdminAssignedRemovedNotifierData : MeetingClientBase
- (instancetype)initWithAssignedSecondaryAdmins:(NSArray<MeetingClientSecondaryAdminAssignedRemovedNotifierDataSecondaryAdminDetail *> *)assignedSecondaryAdmins removedSecondaryAdmins:(NSArray<MeetingClientSecondaryAdminAssignedRemovedNotifierDataSecondaryAdminDetail *> *)removedSecondaryAdmins actionUserId:(NSString *)actionUserId actionUserName:(NSString *)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("init(assignedSecondaryAdmins:removedSecondaryAdmins:actionUserId:actionUserName:primaryAdminId:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientSecondaryAdminAssignedRemovedNotifierData *)doCopyAssignedSecondaryAdmins:(NSArray<MeetingClientSecondaryAdminAssignedRemovedNotifierDataSecondaryAdminDetail *> *)assignedSecondaryAdmins removedSecondaryAdmins:(NSArray<MeetingClientSecondaryAdminAssignedRemovedNotifierDataSecondaryAdminDetail *> *)removedSecondaryAdmins actionUserId:(NSString *)actionUserId actionUserName:(NSString *)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("doCopy(assignedSecondaryAdmins:removedSecondaryAdmins:actionUserId:actionUserName:primaryAdminId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *actionUserId __attribute__((swift_name("actionUserId")));
@property (readonly) NSString *actionUserName __attribute__((swift_name("actionUserName")));
@property (readonly) NSArray<MeetingClientSecondaryAdminAssignedRemovedNotifierDataSecondaryAdminDetail *> *assignedSecondaryAdmins __attribute__((swift_name("assignedSecondaryAdmins")));
@property (readonly) NSString *primaryAdminId __attribute__((swift_name("primaryAdminId")));
@property (readonly) NSArray<MeetingClientSecondaryAdminAssignedRemovedNotifierDataSecondaryAdminDetail *> *removedSecondaryAdmins __attribute__((swift_name("removedSecondaryAdmins")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SecondaryAdminAssignedRemovedNotifierData.SecondaryAdminDetail")))
@interface MeetingClientSecondaryAdminAssignedRemovedNotifierDataSecondaryAdminDetail : MeetingClientBase
- (instancetype)initWithUserId:(NSString *)userId userName:(NSString *)userName __attribute__((swift_name("init(userId:userName:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientSecondaryAdminAssignedRemovedNotifierDataSecondaryAdminDetail *)doCopyUserId:(NSString *)userId userName:(NSString *)userName __attribute__((swift_name("doCopy(userId:userName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString *userName __attribute__((swift_name("userName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareRequestApprovedNotifierData")))
@interface MeetingClientShareRequestApprovedNotifierData : MeetingClientBase
- (instancetype)initWithActionUserId:(NSString * _Nullable)actionUserId actionUserName:(NSString * _Nullable)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("init(actionUserId:actionUserName:primaryAdminId:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientShareRequestApprovedNotifierData *)doCopyActionUserId:(NSString * _Nullable)actionUserId actionUserName:(NSString * _Nullable)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("doCopy(actionUserId:actionUserName:primaryAdminId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable actionUserId __attribute__((swift_name("actionUserId")));
@property (readonly) NSString * _Nullable actionUserName __attribute__((swift_name("actionUserName")));
@property (readonly) NSString *primaryAdminId __attribute__((swift_name("primaryAdminId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareRequestDeniedNotifierData")))
@interface MeetingClientShareRequestDeniedNotifierData : MeetingClientBase
- (instancetype)initWithActionUserId:(NSString * _Nullable)actionUserId actionUserName:(NSString * _Nullable)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("init(actionUserId:actionUserName:primaryAdminId:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientShareRequestDeniedNotifierData *)doCopyActionUserId:(NSString * _Nullable)actionUserId actionUserName:(NSString * _Nullable)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("doCopy(actionUserId:actionUserName:primaryAdminId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable actionUserId __attribute__((swift_name("actionUserId")));
@property (readonly) NSString * _Nullable actionUserName __attribute__((swift_name("actionUserName")));
@property (readonly) NSString *primaryAdminId __attribute__((swift_name("primaryAdminId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareType")))
@interface MeetingClientShareType : MeetingClientKotlinEnum<MeetingClientShareType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MeetingClientShareTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MeetingClientShareType *screenShare __attribute__((swift_name("screenShare")));
@property (class, readonly) MeetingClientShareType *whiteboard __attribute__((swift_name("whiteboard")));
@property (class, readonly) MeetingClientShareType *content __attribute__((swift_name("content")));
@property (class, readonly) MeetingClientShareType *none __attribute__((swift_name("none")));
+ (MeetingClientKotlinArray<MeetingClientShareType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientShareType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareType.Companion")))
@interface MeetingClientShareTypeCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientShareTypeCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientShareType *)actualValueOfValue:(NSString *)value __attribute__((swift_name("actualValueOf(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StreamInfo")))
@interface MeetingClientStreamInfo : MeetingClientBase
- (instancetype)initWithBaseUrl:(NSString *)baseUrl rtcpUserId:(NSString *)rtcpUserId callKey:(NSString *)callKey origin:(NSString *)origin wssUrl:(NSString *)wssUrl isPopEnabled:(BOOL)isPopEnabled clientAccessToken:(NSString *)clientAccessToken displayName:(NSString * _Nullable)displayName title:(NSString *)title startTime:(int64_t)startTime time:(MeetingClientLong * _Nullable)time subDomain:(NSString * _Nullable)subDomain wmsDomain:(NSString * _Nullable)wmsDomain wmsSubDomain:(NSString * _Nullable)wmsSubDomain rtcpCsrfToken:(NSString * _Nullable)rtcpCsrfToken confId:(NSString * _Nullable)confId chatId:(NSString * _Nullable)chatId eventChatId:(NSString * _Nullable)eventChatId type:(NSString * _Nullable)type __attribute__((swift_name("init(baseUrl:rtcpUserId:callKey:origin:wssUrl:isPopEnabled:clientAccessToken:displayName:title:startTime:time:subDomain:wmsDomain:wmsSubDomain:rtcpCsrfToken:confId:chatId:eventChatId:type:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientStreamInfo *)doCopyBaseUrl:(NSString *)baseUrl rtcpUserId:(NSString *)rtcpUserId callKey:(NSString *)callKey origin:(NSString *)origin wssUrl:(NSString *)wssUrl isPopEnabled:(BOOL)isPopEnabled clientAccessToken:(NSString *)clientAccessToken displayName:(NSString * _Nullable)displayName title:(NSString *)title startTime:(int64_t)startTime time:(MeetingClientLong * _Nullable)time subDomain:(NSString * _Nullable)subDomain wmsDomain:(NSString * _Nullable)wmsDomain wmsSubDomain:(NSString * _Nullable)wmsSubDomain rtcpCsrfToken:(NSString * _Nullable)rtcpCsrfToken confId:(NSString * _Nullable)confId chatId:(NSString * _Nullable)chatId eventChatId:(NSString * _Nullable)eventChatId type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(baseUrl:rtcpUserId:callKey:origin:wssUrl:isPopEnabled:clientAccessToken:displayName:title:startTime:time:subDomain:wmsDomain:wmsSubDomain:rtcpCsrfToken:confId:chatId:eventChatId:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) NSString *callKey __attribute__((swift_name("callKey")));
@property (readonly) NSString * _Nullable chatId __attribute__((swift_name("chatId")));
@property (readonly) NSString *clientAccessToken __attribute__((swift_name("clientAccessToken")));
@property (readonly) NSString * _Nullable confId __attribute__((swift_name("confId")));
@property (readonly) NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString * _Nullable eventChatId __attribute__((swift_name("eventChatId")));
@property (readonly) BOOL isPopEnabled __attribute__((swift_name("isPopEnabled")));
@property (readonly) NSString *origin __attribute__((swift_name("origin")));
@property (readonly) NSString * _Nullable rtcpCsrfToken __attribute__((swift_name("rtcpCsrfToken")));
@property (readonly) NSString *rtcpUserId __attribute__((swift_name("rtcpUserId")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@property (readonly) NSString * _Nullable subDomain __attribute__((swift_name("subDomain")));
@property (readonly) MeetingClientLong * _Nullable time __attribute__((swift_name("time")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable wmsDomain __attribute__((swift_name("wmsDomain")));
@property (readonly) NSString * _Nullable wmsSubDomain __attribute__((swift_name("wmsSubDomain")));
@property (readonly) NSString *wssUrl __attribute__((swift_name("wssUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transcript")))
@interface MeetingClientTranscript : MeetingClientBase
- (instancetype)initWithData:(NSString * _Nullable)data type:(MeetingClientTranscriptTranscriptType * _Nullable)type __attribute__((swift_name("init(data:type:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientTranscript *)doCopyData:(NSString * _Nullable)data type:(MeetingClientTranscriptTranscriptType * _Nullable)type __attribute__((swift_name("doCopy(data:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));
@property (readonly) MeetingClientTranscriptTranscriptType * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transcript.TranscriptType")))
@interface MeetingClientTranscriptTranscriptType : MeetingClientKotlinEnum<MeetingClientTranscriptTranscriptType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MeetingClientTranscriptTranscriptTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MeetingClientTranscriptTranscriptType *partial __attribute__((swift_name("partial")));
@property (class, readonly) MeetingClientTranscriptTranscriptType *final __attribute__((swift_name("final")));
+ (MeetingClientKotlinArray<MeetingClientTranscriptTranscriptType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientTranscriptTranscriptType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transcript.TranscriptTypeCompanion")))
@interface MeetingClientTranscriptTranscriptTypeCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientTranscriptTranscriptTypeCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIPreference")))
@interface MeetingClientUIPreference : MeetingClientBase
- (instancetype)initWithShowBtnPreviewClose:(BOOL)showBtnPreviewClose showBtnScreenShare:(BOOL)showBtnScreenShare showBtnMuteAudio:(BOOL)showBtnMuteAudio showOptionMakeHost:(BOOL)showOptionMakeHost showTitleInConference:(BOOL)showTitleInConference showOptionPinVideo:(BOOL)showOptionPinVideo showBtnMinimize:(BOOL)showBtnMinimize showBtnStageView:(BOOL)showBtnStageView showBtnDisplayNameInPreview:(BOOL)showBtnDisplayNameInPreview showEndBtn:(BOOL)showEndBtn showBtnMuteVideo:(BOOL)showBtnMuteVideo showBtnChat:(BOOL)showBtnChat showBtnStartStreaming:(BOOL)showBtnStartStreaming allowAssignAndLeave:(BOOL)allowAssignAndLeave showBtnSettings:(BOOL)showBtnSettings showBtnGridView:(BOOL)showBtnGridView showOptionMakeCoHost:(BOOL)showOptionMakeCoHost editDisplayNameInPreview:(BOOL)editDisplayNameInPreview showBackBtn:(BOOL)showBackBtn showOptionSpotlight:(BOOL)showOptionSpotlight showBtnStartRecording:(BOOL)showBtnStartRecording showAudioOutputDropdown:(BOOL)showAudioOutputDropdown showUserOptionMute:(BOOL)showUserOptionMute showBtnParticipants:(BOOL)showBtnParticipants showActiveSpeakerGridView:(BOOL)showActiveSpeakerGridView showOptionUpdateRole:(BOOL)showOptionUpdateRole showSmileyBtn:(BOOL)showSmileyBtn showMinimizedViewByDefault:(BOOL)showMinimizedViewByDefault showTownHallOption:(BOOL)showTownHallOption showInviteUserOption:(BOOL)showInviteUserOption showRemoveUserOption:(BOOL)showRemoveUserOption showYetToJoinGuest:(BOOL)showYetToJoinGuest showContainerUserOption:(BOOL)showContainerUserOption showRingBtn:(BOOL)showRingBtn __attribute__((swift_name("init(showBtnPreviewClose:showBtnScreenShare:showBtnMuteAudio:showOptionMakeHost:showTitleInConference:showOptionPinVideo:showBtnMinimize:showBtnStageView:showBtnDisplayNameInPreview:showEndBtn:showBtnMuteVideo:showBtnChat:showBtnStartStreaming:allowAssignAndLeave:showBtnSettings:showBtnGridView:showOptionMakeCoHost:editDisplayNameInPreview:showBackBtn:showOptionSpotlight:showBtnStartRecording:showAudioOutputDropdown:showUserOptionMute:showBtnParticipants:showActiveSpeakerGridView:showOptionUpdateRole:showSmileyBtn:showMinimizedViewByDefault:showTownHallOption:showInviteUserOption:showRemoveUserOption:showYetToJoinGuest:showContainerUserOption:showRingBtn:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientUIPreference *)doCopyShowBtnPreviewClose:(BOOL)showBtnPreviewClose showBtnScreenShare:(BOOL)showBtnScreenShare showBtnMuteAudio:(BOOL)showBtnMuteAudio showOptionMakeHost:(BOOL)showOptionMakeHost showTitleInConference:(BOOL)showTitleInConference showOptionPinVideo:(BOOL)showOptionPinVideo showBtnMinimize:(BOOL)showBtnMinimize showBtnStageView:(BOOL)showBtnStageView showBtnDisplayNameInPreview:(BOOL)showBtnDisplayNameInPreview showEndBtn:(BOOL)showEndBtn showBtnMuteVideo:(BOOL)showBtnMuteVideo showBtnChat:(BOOL)showBtnChat showBtnStartStreaming:(BOOL)showBtnStartStreaming allowAssignAndLeave:(BOOL)allowAssignAndLeave showBtnSettings:(BOOL)showBtnSettings showBtnGridView:(BOOL)showBtnGridView showOptionMakeCoHost:(BOOL)showOptionMakeCoHost editDisplayNameInPreview:(BOOL)editDisplayNameInPreview showBackBtn:(BOOL)showBackBtn showOptionSpotlight:(BOOL)showOptionSpotlight showBtnStartRecording:(BOOL)showBtnStartRecording showAudioOutputDropdown:(BOOL)showAudioOutputDropdown showUserOptionMute:(BOOL)showUserOptionMute showBtnParticipants:(BOOL)showBtnParticipants showActiveSpeakerGridView:(BOOL)showActiveSpeakerGridView showOptionUpdateRole:(BOOL)showOptionUpdateRole showSmileyBtn:(BOOL)showSmileyBtn showMinimizedViewByDefault:(BOOL)showMinimizedViewByDefault showTownHallOption:(BOOL)showTownHallOption showInviteUserOption:(BOOL)showInviteUserOption showRemoveUserOption:(BOOL)showRemoveUserOption showYetToJoinGuest:(BOOL)showYetToJoinGuest showContainerUserOption:(BOOL)showContainerUserOption showRingBtn:(BOOL)showRingBtn __attribute__((swift_name("doCopy(showBtnPreviewClose:showBtnScreenShare:showBtnMuteAudio:showOptionMakeHost:showTitleInConference:showOptionPinVideo:showBtnMinimize:showBtnStageView:showBtnDisplayNameInPreview:showEndBtn:showBtnMuteVideo:showBtnChat:showBtnStartStreaming:allowAssignAndLeave:showBtnSettings:showBtnGridView:showOptionMakeCoHost:editDisplayNameInPreview:showBackBtn:showOptionSpotlight:showBtnStartRecording:showAudioOutputDropdown:showUserOptionMute:showBtnParticipants:showActiveSpeakerGridView:showOptionUpdateRole:showSmileyBtn:showMinimizedViewByDefault:showTownHallOption:showInviteUserOption:showRemoveUserOption:showYetToJoinGuest:showContainerUserOption:showRingBtn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowAssignAndLeave __attribute__((swift_name("allowAssignAndLeave")));
@property (readonly) BOOL editDisplayNameInPreview __attribute__((swift_name("editDisplayNameInPreview")));
@property (readonly) BOOL showActiveSpeakerGridView __attribute__((swift_name("showActiveSpeakerGridView")));
@property (readonly) BOOL showAudioOutputDropdown __attribute__((swift_name("showAudioOutputDropdown")));
@property (readonly) BOOL showBackBtn __attribute__((swift_name("showBackBtn")));
@property (readonly) BOOL showBtnChat __attribute__((swift_name("showBtnChat")));
@property (readonly) BOOL showBtnDisplayNameInPreview __attribute__((swift_name("showBtnDisplayNameInPreview")));
@property (readonly) BOOL showBtnGridView __attribute__((swift_name("showBtnGridView")));
@property (readonly) BOOL showBtnMinimize __attribute__((swift_name("showBtnMinimize")));
@property (readonly) BOOL showBtnMuteAudio __attribute__((swift_name("showBtnMuteAudio")));
@property (readonly) BOOL showBtnMuteVideo __attribute__((swift_name("showBtnMuteVideo")));
@property (readonly) BOOL showBtnParticipants __attribute__((swift_name("showBtnParticipants")));
@property (readonly) BOOL showBtnPreviewClose __attribute__((swift_name("showBtnPreviewClose")));
@property (readonly) BOOL showBtnScreenShare __attribute__((swift_name("showBtnScreenShare")));
@property (readonly) BOOL showBtnSettings __attribute__((swift_name("showBtnSettings")));
@property (readonly) BOOL showBtnStageView __attribute__((swift_name("showBtnStageView")));
@property (readonly) BOOL showBtnStartRecording __attribute__((swift_name("showBtnStartRecording")));
@property (readonly) BOOL showBtnStartStreaming __attribute__((swift_name("showBtnStartStreaming")));
@property (readonly) BOOL showContainerUserOption __attribute__((swift_name("showContainerUserOption")));
@property (readonly) BOOL showEndBtn __attribute__((swift_name("showEndBtn")));
@property (readonly) BOOL showInviteUserOption __attribute__((swift_name("showInviteUserOption")));
@property (readonly) BOOL showMinimizedViewByDefault __attribute__((swift_name("showMinimizedViewByDefault")));
@property (readonly) BOOL showOptionMakeCoHost __attribute__((swift_name("showOptionMakeCoHost")));
@property (readonly) BOOL showOptionMakeHost __attribute__((swift_name("showOptionMakeHost")));
@property (readonly) BOOL showOptionPinVideo __attribute__((swift_name("showOptionPinVideo")));
@property (readonly) BOOL showOptionSpotlight __attribute__((swift_name("showOptionSpotlight")));
@property (readonly) BOOL showOptionUpdateRole __attribute__((swift_name("showOptionUpdateRole")));
@property (readonly) BOOL showRemoveUserOption __attribute__((swift_name("showRemoveUserOption")));
@property (readonly) BOOL showRingBtn __attribute__((swift_name("showRingBtn")));
@property (readonly) BOOL showSmileyBtn __attribute__((swift_name("showSmileyBtn")));
@property (readonly) BOOL showTitleInConference __attribute__((swift_name("showTitleInConference")));
@property (readonly) BOOL showTownHallOption __attribute__((swift_name("showTownHallOption")));
@property (readonly) BOOL showUserOptionMute __attribute__((swift_name("showUserOptionMute")));
@property (readonly) BOOL showYetToJoinGuest __attribute__((swift_name("showYetToJoinGuest")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserACL")))
@interface MeetingClientUserACL : MeetingClientKotlinEnum<MeetingClientUserACL *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MeetingClientUserACLCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MeetingClientUserACL *start __attribute__((swift_name("start")));
@property (class, readonly) MeetingClientUserACL *end __attribute__((swift_name("end")));
@property (class, readonly) MeetingClientUserACL *recording __attribute__((swift_name("recording")));
@property (class, readonly) MeetingClientUserACL *approveRejectSpeaker __attribute__((swift_name("approveRejectSpeaker")));
@property (class, readonly) MeetingClientUserACL *muteUnMuteAll __attribute__((swift_name("muteUnMuteAll")));
@property (class, readonly) MeetingClientUserACL *ring __attribute__((swift_name("ring")));
@property (class, readonly) MeetingClientUserACL *ringAll __attribute__((swift_name("ringAll")));
@property (class, readonly) MeetingClientUserACL *kickOut __attribute__((swift_name("kickOut")));
@property (class, readonly) MeetingClientUserACL *screenShare __attribute__((swift_name("screenShare")));
@property (class, readonly) MeetingClientUserACL *endParticipantScreenShare __attribute__((swift_name("endParticipantScreenShare")));
@property (class, readonly) MeetingClientUserACL *viewChat __attribute__((swift_name("viewChat")));
@property (class, readonly) MeetingClientUserACL *sendChatMsg __attribute__((swift_name("sendChatMsg")));
@property (class, readonly) MeetingClientUserACL *viewEmotions __attribute__((swift_name("viewEmotions")));
@property (class, readonly) MeetingClientUserACL *sendEmotions __attribute__((swift_name("sendEmotions")));
@property (class, readonly) MeetingClientUserACL *silentParticipant __attribute__((swift_name("silentParticipant")));
@property (class, readonly) MeetingClientUserACL *livestreamStudio __attribute__((swift_name("livestreamStudio")));
@property (class, readonly) MeetingClientUserACL *skipWaitingRoom __attribute__((swift_name("skipWaitingRoom")));
@property (class, readonly) MeetingClientUserACL *approveRejectJoinRequest __attribute__((swift_name("approveRejectJoinRequest")));
@property (class, readonly) MeetingClientUserACL *joinApproved __attribute__((swift_name("joinApproved")));
@property (class, readonly) MeetingClientUserACL *switchMemberMode __attribute__((swift_name("switchMemberMode")));
@property (class, readonly) MeetingClientUserACL *spotlight __attribute__((swift_name("spotlight")));
@property (class, readonly) MeetingClientUserACL *excludeConferenceAcl __attribute__((swift_name("excludeConferenceAcl")));
@property (class, readonly) MeetingClientUserACL *overrideRestrictShare __attribute__((swift_name("overrideRestrictShare")));
@property (class, readonly) MeetingClientUserACL *approveRejectShareRequest __attribute__((swift_name("approveRejectShareRequest")));
@property (class, readonly) MeetingClientUserACL *globalPin __attribute__((swift_name("globalPin")));
@property (class, readonly) MeetingClientUserACL *overrideParticipantShare __attribute__((swift_name("overrideParticipantShare")));
+ (MeetingClientKotlinArray<MeetingClientUserACL *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientUserACL *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserACL.Companion")))
@interface MeetingClientUserACLCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientUserACLCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)isApproveRejectJoinRequestActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isApproveRejectJoinRequestActionAllowed(aclValue:)")));
- (BOOL)isApproveRejectShareRequestActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isApproveRejectShareRequestActionAllowed(aclValue:)")));
- (BOOL)isApproveRejectSpeakerActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isApproveRejectSpeakerActionAllowed(aclValue:)")));
- (BOOL)isEndActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isEndActionAllowed(aclValue:)")));
- (BOOL)isEndScreenShareActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isEndScreenShareActionAllowed(aclValue:)")));
- (BOOL)isExcludeConferenceACLAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isExcludeConferenceACL(aclValue:)")));
- (BOOL)isGlobalPinActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isGlobalPinActionAllowed(aclValue:)")));
- (BOOL)isJoinActionApprovedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isJoinActionApproved(aclValue:)")));
- (BOOL)isKickOutActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isKickOutActionAllowed(aclValue:)")));
- (BOOL)isMuteUnMuteAllActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isMuteUnMuteAllActionAllowed(aclValue:)")));
- (BOOL)isOverrideParticipantScreenShareAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isOverrideParticipantScreenShare(aclValue:)")));
- (BOOL)isOverrideRestrictScreenShareAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isOverrideRestrictScreenShare(aclValue:)")));
- (BOOL)isRecordingActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isRecordingActionAllowed(aclValue:)")));
- (BOOL)isRingActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isRingActionAllowed(aclValue:)")));
- (BOOL)isRingAllActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isRingAllActionAllowed(aclValue:)")));
- (BOOL)isScreenShareActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isScreenShareActionAllowed(aclValue:)")));
- (BOOL)isSendEmotionsActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isSendEmotionsActionAllowed(aclValue:)")));
- (BOOL)isSilentMemberAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isSilentMember(aclValue:)")));
- (BOOL)isSkipWaitingRoomActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isSkipWaitingRoomActionAllowed(aclValue:)")));
- (BOOL)isSpotlightActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isSpotlightActionAllowed(aclValue:)")));
- (BOOL)isStartActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isStartActionAllowed(aclValue:)")));
- (BOOL)isSwitchMemberModeActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isSwitchMemberModeActionAllowed(aclValue:)")));
- (BOOL)isViewEmotionsActionAllowedAclValue:(MeetingClientInt * _Nullable)aclValue __attribute__((swift_name("isViewEmotionsActionAllowed(aclValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRoles")))
@interface MeetingClientUserRoles : MeetingClientBase
- (instancetype)initWithCallPrimaryAdmin:(MeetingClientUserRolesUserRoleDetails * _Nullable)callPrimaryAdmin callSecondaryAdmin:(MeetingClientUserRolesUserRoleDetails * _Nullable)callSecondaryAdmin callParticipant:(MeetingClientUserRolesUserRoleDetails * _Nullable)callParticipant __attribute__((swift_name("init(callPrimaryAdmin:callSecondaryAdmin:callParticipant:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientUserRoles *)doCopyCallPrimaryAdmin:(MeetingClientUserRolesUserRoleDetails * _Nullable)callPrimaryAdmin callSecondaryAdmin:(MeetingClientUserRolesUserRoleDetails * _Nullable)callSecondaryAdmin callParticipant:(MeetingClientUserRolesUserRoleDetails * _Nullable)callParticipant __attribute__((swift_name("doCopy(callPrimaryAdmin:callSecondaryAdmin:callParticipant:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MeetingClientUserRolesUserRoleDetails * _Nullable callParticipant __attribute__((swift_name("callParticipant")));
@property (readonly) MeetingClientUserRolesUserRoleDetails * _Nullable callPrimaryAdmin __attribute__((swift_name("callPrimaryAdmin")));
@property (readonly) MeetingClientUserRolesUserRoleDetails * _Nullable callSecondaryAdmin __attribute__((swift_name("callSecondaryAdmin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRoles.UserRoleDetails")))
@interface MeetingClientUserRolesUserRoleDetails : MeetingClientBase
- (instancetype)initWithResourceKey:(NSString * _Nullable)resourceKey name:(NSString * _Nullable)name collectiveName:(NSString * _Nullable)collectiveName __attribute__((swift_name("init(resourceKey:name:collectiveName:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientUserRolesUserRoleDetails *)doCopyResourceKey:(NSString * _Nullable)resourceKey name:(NSString * _Nullable)name collectiveName:(NSString * _Nullable)collectiveName __attribute__((swift_name("doCopy(resourceKey:name:collectiveName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable collectiveName __attribute__((swift_name("collectiveName")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable resourceKey __attribute__((swift_name("resourceKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoCaptureSpec")))
@interface MeetingClientVideoCaptureSpec : MeetingClientBase
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height fps:(int32_t)fps bitrate:(MeetingClientVideoCaptureSpecBitrate * _Nullable)bitrate cameraFace:(MeetingClientCameraFace *)cameraFace __attribute__((swift_name("init(width:height:fps:bitrate:cameraFace:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientVideoCaptureSpec *)doCopyWidth:(int32_t)width height:(int32_t)height fps:(int32_t)fps bitrate:(MeetingClientVideoCaptureSpecBitrate * _Nullable)bitrate cameraFace:(MeetingClientCameraFace *)cameraFace __attribute__((swift_name("doCopy(width:height:fps:bitrate:cameraFace:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MeetingClientVideoCaptureSpecBitrate * _Nullable bitrate __attribute__((swift_name("bitrate")));
@property (readonly) MeetingClientCameraFace *cameraFace __attribute__((swift_name("cameraFace")));
@property (readonly) int32_t fps __attribute__((swift_name("fps")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoCaptureSpec.Bitrate")))
@interface MeetingClientVideoCaptureSpecBitrate : MeetingClientBase
- (instancetype)initWithMinBitrateBps:(int32_t)minBitrateBps maxBitrateBps:(int32_t)maxBitrateBps bitratePriority:(int32_t)bitratePriority __attribute__((swift_name("init(minBitrateBps:maxBitrateBps:bitratePriority:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientVideoCaptureSpecBitrate *)doCopyMinBitrateBps:(int32_t)minBitrateBps maxBitrateBps:(int32_t)maxBitrateBps bitratePriority:(int32_t)bitratePriority __attribute__((swift_name("doCopy(minBitrateBps:maxBitrateBps:bitratePriority:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t bitratePriority __attribute__((swift_name("bitratePriority")));
@property (readonly) int32_t maxBitrateBps __attribute__((swift_name("maxBitrateBps")));
@property (readonly) int32_t minBitrateBps __attribute__((swift_name("minBitrateBps")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoEnabledDisabledNotifierData")))
@interface MeetingClientVideoEnabledDisabledNotifierData : MeetingClientBase
- (instancetype)initWithStatus:(MeetingClientVideoEnabledDisabledNotifierDataStatus *)status actionUserId:(NSString *)actionUserId actionUserName:(NSString *)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("init(status:actionUserId:actionUserName:primaryAdminId:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientVideoEnabledDisabledNotifierData *)doCopyStatus:(MeetingClientVideoEnabledDisabledNotifierDataStatus *)status actionUserId:(NSString *)actionUserId actionUserName:(NSString *)actionUserName primaryAdminId:(NSString *)primaryAdminId __attribute__((swift_name("doCopy(status:actionUserId:actionUserName:primaryAdminId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *actionUserId __attribute__((swift_name("actionUserId")));
@property (readonly) NSString *actionUserName __attribute__((swift_name("actionUserName")));
@property (readonly) NSString *primaryAdminId __attribute__((swift_name("primaryAdminId")));
@property (readonly) MeetingClientVideoEnabledDisabledNotifierDataStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoEnabledDisabledNotifierData.Status")))
@interface MeetingClientVideoEnabledDisabledNotifierDataStatus : MeetingClientKotlinEnum<MeetingClientVideoEnabledDisabledNotifierDataStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientVideoEnabledDisabledNotifierDataStatus *disabled __attribute__((swift_name("disabled")));
@property (class, readonly) MeetingClientVideoEnabledDisabledNotifierDataStatus *enabled __attribute__((swift_name("enabled")));
@property (class, readonly) MeetingClientVideoEnabledDisabledNotifierDataStatus *allowEnable __attribute__((swift_name("allowEnable")));
+ (MeetingClientKotlinArray<MeetingClientVideoEnabledDisabledNotifierDataStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientVideoEnabledDisabledNotifierDataStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewType")))
@interface MeetingClientViewType : MeetingClientKotlinEnum<MeetingClientViewType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MeetingClientViewTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MeetingClientViewType *user __attribute__((swift_name("user")));
@property (class, readonly) MeetingClientViewType *screenShare __attribute__((swift_name("screenShare")));
@property (class, readonly) MeetingClientViewType *contentShare __attribute__((swift_name("contentShare")));
+ (MeetingClientKotlinArray<MeetingClientViewType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientViewType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewType.Companion")))
@interface MeetingClientViewTypeCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientViewTypeCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientViewType *)actualValueOfValue:(NSString *)value __attribute__((swift_name("actualValueOf(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitingRoomStatus")))
@interface MeetingClientWaitingRoomStatus : MeetingClientKotlinEnum<MeetingClientWaitingRoomStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientWaitingRoomStatus *yetToRequest __attribute__((swift_name("yetToRequest")));
@property (class, readonly) MeetingClientWaitingRoomStatus *pending __attribute__((swift_name("pending")));
@property (class, readonly) MeetingClientWaitingRoomStatus *allowed __attribute__((swift_name("allowed")));
@property (class, readonly) MeetingClientWaitingRoomStatus *rejected __attribute__((swift_name("rejected")));
+ (MeetingClientKotlinArray<MeetingClientWaitingRoomStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientWaitingRoomStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingVideo")))
@interface MeetingClientRTCPMeetingVideo : MeetingClientBase
- (instancetype)initWithVideoTrack:(MeetingClientMeeting_coreVideoStreamTrack *)videoTrack videoSinkDetails:(MeetingClientMeeting_coreVideoSinkDetails *)videoSinkDetails videoSink:(MeetingClientMeeting_coreVideoSink *)videoSink isMobileScreenShare:(BOOL)isMobileScreenShare mirrorVideo:(BOOL)mirrorVideo __attribute__((swift_name("init(videoTrack:videoSinkDetails:videoSink:isMobileScreenShare:mirrorVideo:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientRTCPMeetingVideo *)doCopyVideoTrack:(MeetingClientMeeting_coreVideoStreamTrack *)videoTrack videoSinkDetails:(MeetingClientMeeting_coreVideoSinkDetails *)videoSinkDetails videoSink:(MeetingClientMeeting_coreVideoSink *)videoSink isMobileScreenShare:(BOOL)isMobileScreenShare mirrorVideo:(BOOL)mirrorVideo __attribute__((swift_name("doCopy(videoTrack:videoSinkDetails:videoSink:isMobileScreenShare:mirrorVideo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isMobileScreenShare __attribute__((swift_name("isMobileScreenShare")));
@property (readonly) BOOL mirrorVideo __attribute__((swift_name("mirrorVideo")));
@property (readonly) MeetingClientMeeting_coreVideoSink *videoSink __attribute__((swift_name("videoSink")));
@property (readonly) MeetingClientMeeting_coreVideoSinkDetails *videoSinkDetails __attribute__((swift_name("videoSinkDetails")));
@property (readonly) MeetingClientMeeting_coreVideoStreamTrack *videoTrack __attribute__((swift_name("videoTrack")));
@end

__attribute__((swift_name("RTCPMexClient")))
@interface MeetingClientRTCPMexClient : MeetingClientBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MeetingClientRTCPMexClientCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientRTCPMexResult<MeetingClientKotlinUnit *> *)closeMexSession __attribute__((swift_name("closeMexSession()")));
- (MeetingClientRTCPMexResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getIsNetworkAvailableState __attribute__((swift_name("getIsNetworkAvailableState()")));
- (MeetingClientRTCPMexResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMexObserver __attribute__((swift_name("getMexObserver()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doInitMexSessionUserId:(NSString *)userId entityKey:(NSString *)entityKey clientOTP:(NSString *)clientOTP remoteConfigs:(MeetingClientRTCPMexRemoteConfigs *)remoteConfigs completionHandler:(void (^)(MeetingClientRTCPMexResult<id<MeetingClientKotlinx_coroutines_coreFlow>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doInitMexSession(userId:entityKey:clientOTP:remoteConfigs:completionHandler:)")));
- (MeetingClientRTCPMexResult<MeetingClientKotlinUnit *> *)sendMexDataMexData:(MeetingClientMexData *)mexData __attribute__((swift_name("sendMexData(mexData:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMexClient.Companion")))
@interface MeetingClientRTCPMexClientCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientRTCPMexClientCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientRTCPMexClient *)instance __attribute__((swift_name("instance()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMexClientImpl")))
@interface MeetingClientRTCPMexClientImpl : MeetingClientRTCPMexClient
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MeetingClientRTCPMexResult<MeetingClientKotlinUnit *> *)closeMexSession __attribute__((swift_name("closeMexSession()")));
- (MeetingClientRTCPMexResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getIsNetworkAvailableState __attribute__((swift_name("getIsNetworkAvailableState()")));
- (MeetingClientRTCPMexResult<id<MeetingClientKotlinx_coroutines_coreFlow>> *)getMexObserver __attribute__((swift_name("getMexObserver()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doInitMexSessionUserId:(NSString *)userId entityKey:(NSString *)entityKey clientOTP:(NSString *)clientOTP remoteConfigs:(MeetingClientRTCPMexRemoteConfigs *)remoteConfigs completionHandler:(void (^)(MeetingClientRTCPMexResult<id<MeetingClientKotlinx_coroutines_coreFlow>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doInitMexSession(userId:entityKey:clientOTP:remoteConfigs:completionHandler:)")));
- (MeetingClientRTCPMexResult<MeetingClientKotlinUnit *> *)sendMexDataMexData:(MeetingClientMexData *)mexData __attribute__((swift_name("sendMexData(mexData:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMexClientException")))
@interface MeetingClientRTCPMexClientException : MeetingClientKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message t:(MeetingClientKotlinThrowable * _Nullable)t __attribute__((swift_name("init(message:t:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMexResult")))
@interface MeetingClientRTCPMexResult<ResultType> : MeetingClientBase
@property (class, readonly, getter=companion) MeetingClientRTCPMexResultCompanion *companion __attribute__((swift_name("companion")));
- (MeetingClientRTCPMexResult<id> *)doCopyData:(id _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (MeetingClientRTCPMexResult<id> *)mapTransform:(id _Nullable (^)(ResultType _Nullable))transform __attribute__((swift_name("map(transform:)")));
- (MeetingClientRTCPMexResult<ResultType> *)onCompleteOnComplete:(void (^)(void))onComplete __attribute__((swift_name("onComplete(onComplete:)")));
- (MeetingClientRTCPMexResult<ResultType> *)onFailureOnFailure:(void (^)(MeetingClientRTCPMexResultError *))onFailure __attribute__((swift_name("onFailure(onFailure:)")));
- (MeetingClientRTCPMexResult<ResultType> *)onSuccessOnSuccess:(void (^)(ResultType _Nullable))onSuccess __attribute__((swift_name("onSuccess(onSuccess:)")));
@property (readonly) ResultType _Nullable data __attribute__((swift_name("data")));
@property (readonly) MeetingClientRTCPMexResultError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMexResultCompanion")))
@interface MeetingClientRTCPMexResultCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientRTCPMexResultCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientRTCPMexResult<id> *)failureError:(MeetingClientRTCPMexResultError *)error __attribute__((swift_name("failure(error:)")));
- (MeetingClientRTCPMexResult<id> *)failureThrowable:(MeetingClientKotlinThrowable *)throwable __attribute__((swift_name("failure(throwable:)")));
- (MeetingClientRTCPMexResult<id> *)successData:(id _Nullable)data __attribute__((swift_name("success(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMexResultError")))
@interface MeetingClientRTCPMexResultError : MeetingClientBase
- (instancetype)initWithResponseCode:(MeetingClientInt * _Nullable)responseCode error:(NSString * _Nullable)error message:(NSString * _Nullable)message code:(MeetingClientInt * _Nullable)code cause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(responseCode:error:message:code:cause:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MeetingClientKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) MeetingClientInt * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) MeetingClientInt * _Nullable responseCode __attribute__((swift_name("responseCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionState")))
@interface MeetingClientConnectionState : MeetingClientKotlinEnum<MeetingClientConnectionState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientConnectionState *initiated __attribute__((swift_name("initiated")));
@property (class, readonly) MeetingClientConnectionState *connecting __attribute__((swift_name("connecting")));
@property (class, readonly) MeetingClientConnectionState *reconnecting __attribute__((swift_name("reconnecting")));
@property (class, readonly) MeetingClientConnectionState *connected __attribute__((swift_name("connected")));
@property (class, readonly) MeetingClientConnectionState *closed __attribute__((swift_name("closed")));
+ (MeetingClientKotlinArray<MeetingClientConnectionState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientConnectionState *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString * _Nullable entityId __attribute__((swift_name("entityId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MexData")))
@interface MeetingClientMexData : MeetingClientBase
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientMexData *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable entityId __attribute__((swift_name("entityId")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMexRemoteConfigs")))
@interface MeetingClientRTCPMexRemoteConfigs : MeetingClientBase
- (instancetype)initWithBaseUrl:(NSString *)baseUrl appName:(NSString *)appName isCrossOriginEnabled:(BOOL)isCrossOriginEnabled __attribute__((swift_name("init(baseUrl:appName:isCrossOriginEnabled:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientRTCPMexRemoteConfigs *)doCopyBaseUrl:(NSString *)baseUrl appName:(NSString *)appName isCrossOriginEnabled:(BOOL)isCrossOriginEnabled __attribute__((swift_name("doCopy(baseUrl:appName:isCrossOriginEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appName __attribute__((swift_name("appName")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) BOOL isCrossOriginEnabled __attribute__((swift_name("isCrossOriginEnabled")));
@end

@interface MeetingClientPhoneAudioResponseDialInNumberResponse (Extensions)
- (MeetingClientPhoneAudioDetailsPhoneAudioNumber *)toDomainEntityType:(NSString *)type __attribute__((swift_name("toDomainEntity(type:)")));
@end

@interface MeetingClientRTCPMeetingsClientResultError (Extensions)
- (MeetingClientRTCPMeetingsClientException *)toRTCPMeetingsClientException __attribute__((swift_name("toRTCPMeetingsClientException()")));
@end

@interface MeetingClientRTCPMexResultError (Extensions)
- (MeetingClientRTCPMexClientException *)toRTCPMexClientException __attribute__((swift_name("toRTCPMexClientException()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionsKt")))
@interface MeetingClientExtensionsKt : MeetingClientBase
+ (NSString *)getOriginalUserIdFromRTCPUserId:(NSString *)receiver __attribute__((swift_name("getOriginalUserIdFromRTCPUserId(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPhoneAudioResponseToDomainEntityKt")))
@interface MeetingClientGetPhoneAudioResponseToDomainEntityKt : MeetingClientBase
+ (NSArray<NSString *> *)toCountryList:(NSArray<MeetingClientPhoneAudioResponseDialInNumberResponse *> * _Nullable)receiver __attribute__((swift_name("toCountryList(_:)")));
+ (NSString * _Nullable)toCountryName:(NSArray<MeetingClientPhoneAudioResponseDialInNumberResponse *> * _Nullable)receiver countryCode:(NSString * _Nullable)countryCode __attribute__((swift_name("toCountryName(_:countryCode:)")));
+ (NSArray<MeetingClientPhoneAudioDetailsPhoneAudioNumber *> *)toDomainEntity:(NSArray<MeetingClientPhoneAudioResponseDialInNumberResponse *> * _Nullable)receiver numberTypes:(NSDictionary<NSString *, NSString *> *)numberTypes __attribute__((swift_name("toDomainEntity(_:numberTypes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface MeetingClientPlatformKt : MeetingClientBase
+ (id<MeetingClientPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMeetingsClientResultKt")))
@interface MeetingClientRTCPMeetingsClientResultKt : MeetingClientBase
+ (MeetingClientRTCPMeetingsClientResult<id> *)buildRTCPMeetingsClientResultBlock:(id _Nullable (^)(void))block __attribute__((swift_name("buildRTCPMeetingsClientResult(block:)")));
+ (MeetingClientRTCPMeetingsClientResult<id> *)toRTCPMeetingsClientResult:(id _Nullable)receiver __attribute__((swift_name("toRTCPMeetingsClientResult(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPMexResultKt")))
@interface MeetingClientRTCPMexResultKt : MeetingClientBase
+ (MeetingClientRTCPMexResult<id> *)buildRTCPMexClientResultBlock:(id _Nullable (^)(void))block __attribute__((swift_name("buildRTCPMexClientResult(block:)")));
+ (MeetingClientRTCPMexResult<id> *)toRTCPMexClientResult:(id _Nullable)receiver __attribute__((swift_name("toRTCPMexClientResult(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RTCPTimeLoggerKt")))
@interface MeetingClientRTCPTimeLoggerKt : MeetingClientBase
+ (void)enableRTCPTimeLoggerInitialSetupElapsedTimeInMillis:(MeetingClientInt * _Nullable)initialSetupElapsedTimeInMillis logDispatcher:(void (^)(NSString *))logDispatcher __attribute__((swift_name("enableRTCPTimeLogger(initialSetupElapsedTimeInMillis:logDispatcher:)")));
@end

__attribute__((swift_name("RuntimeCloseable")))
@protocol MeetingClientRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol MeetingClientRuntimeSqlDriver <MeetingClientRuntimeCloseable>
@required
- (void)addListenerQueryKeys:(MeetingClientKotlinArray<NSString *> *)queryKeys listener:(id<MeetingClientRuntimeQueryListener>)listener __attribute__((swift_name("addListener(queryKeys:listener:)")));
- (MeetingClientRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (id<MeetingClientRuntimeQueryResult>)executeIdentifier:(MeetingClientInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<MeetingClientRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<MeetingClientRuntimeQueryResult>)executeQueryIdentifier:(MeetingClientInt * _Nullable)identifier sql:(NSString *)sql mapper:(id<MeetingClientRuntimeQueryResult> (^)(id<MeetingClientRuntimeSqlCursor>))mapper parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<MeetingClientRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:mapper:parameters:binders:)")));
- (id<MeetingClientRuntimeQueryResult>)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
- (void)notifyListenersQueryKeys:(MeetingClientKotlinArray<NSString *> *)queryKeys __attribute__((swift_name("notifyListeners(queryKeys:)")));
- (void)removeListenerQueryKeys:(MeetingClientKotlinArray<NSString *> *)queryKeys listener:(id<MeetingClientRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(queryKeys:listener:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MeetingClientKotlinUnit : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol MeetingClientRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface MeetingClientRuntimeTransacterTransaction : MeetingClientBase <MeetingClientRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MeetingClientRuntimeQueryResult>)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) MeetingClientRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol MeetingClientRuntimeTransactionWithoutReturn <MeetingClientRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<MeetingClientRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol MeetingClientRuntimeTransactionWithReturn <MeetingClientRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<MeetingClientRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end

__attribute__((swift_name("RuntimeQueryResult")))
@protocol MeetingClientRuntimeQueryResult
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("RuntimeExecutableQuery")))
@interface MeetingClientRuntimeExecutableQuery<__covariant RowType> : MeetingClientBase
- (instancetype)initWithMapper:(RowType (^)(id<MeetingClientRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (id<MeetingClientRuntimeQueryResult>)executeMapper:(id<MeetingClientRuntimeQueryResult> (^)(id<MeetingClientRuntimeSqlCursor>))mapper __attribute__((swift_name("execute(mapper:)")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
@property (readonly) RowType (^mapper)(id<MeetingClientRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end

__attribute__((swift_name("RuntimeQuery")))
@interface MeetingClientRuntimeQuery<__covariant RowType> : MeetingClientRuntimeExecutableQuery<RowType>
- (instancetype)initWithMapper:(RowType (^)(id<MeetingClientRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<MeetingClientRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (void)removeListenerListener:(id<MeetingClientRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end

__attribute__((swift_name("RuntimeColumnAdapter")))
@protocol MeetingClientRuntimeColumnAdapter
@required
- (id)decodeDatabaseValue:(id _Nullable)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (id _Nullable)encodeValue:(id)value __attribute__((swift_name("encode(value:)")));
@end

__attribute__((swift_name("RuntimeSqlSchema")))
@protocol MeetingClientRuntimeSqlSchema
@required
- (id<MeetingClientRuntimeQueryResult>)createDriver:(id<MeetingClientRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (id<MeetingClientRuntimeQueryResult>)migrateDriver:(id<MeetingClientRuntimeSqlDriver>)driver oldVersion:(int64_t)oldVersion newVersion:(int64_t)newVersion callbacks:(MeetingClientKotlinArray<MeetingClientRuntimeAfterVersion *> *)callbacks __attribute__((swift_name("migrate(driver:oldVersion:newVersion:callbacks:)")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MeetingClientKotlinArray<T> : MeetingClientBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MeetingClientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MeetingClientKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol MeetingClientKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol MeetingClientKotlinSuspendFunction1 <MeetingClientKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MeetingClientKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MeetingClientKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MeetingClientKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MeetingClientKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MeetingClientKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MeetingClientKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MeetingClientKotlinx_serialization_coreKSerializer <MeetingClientKotlinx_serialization_coreSerializationStrategy, MeetingClientKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MeetingClientKotlinEnumCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MeetingClientKotlinRuntimeException : MeetingClientKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MeetingClientKotlinIllegalStateException : MeetingClientKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MeetingClientKotlinCancellationException : MeetingClientKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MeetingClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol MeetingClientKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MeetingClientKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface MeetingClientKotlinPair<__covariant A, __covariant B> : MeetingClientBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface MeetingClientKotlinx_serialization_jsonJsonElement : MeetingClientBase
@property (class, readonly, getter=companion) MeetingClientKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol MeetingClientKotlinx_coroutines_coreSharedFlow <MeetingClientKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol MeetingClientKotlinx_coroutines_coreStateFlow <MeetingClientKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("Meeting_coreMediaStreamTrack")))
@interface MeetingClientMeeting_coreMediaStreamTrack : MeetingClientBase
@property (class, readonly, getter=companion) MeetingClientMeeting_coreMediaStreamTrackCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onSetEnabledEnabled:(BOOL)enabled __attribute__((swift_name("onSetEnabled(enabled:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onStop __attribute__((swift_name("onStop()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)setMuteMuted:(BOOL)muted __attribute__((swift_name("setMute(muted:)")));
- (void)stop __attribute__((swift_name("stop()")));
@property BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) RTCMediaStreamTrack *ios __attribute__((swift_name("ios")));
@property (readonly) MeetingClientMeeting_coreMediaStreamTrackKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) id<MeetingClientKotlinx_coroutines_coreStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreVideoStreamTrack")))
@interface MeetingClientMeeting_coreVideoStreamTrack : MeetingClientMeeting_coreMediaStreamTrack
- (void)addSinkSink:(MeetingClientMeeting_coreVideoSink *)sink __attribute__((swift_name("addSink(sink:)")));
- (void)changeCaptureFormatVideoCaptureSpec:(MeetingClientMeeting_coreVideoCaptureSpec *)videoCaptureSpec __attribute__((swift_name("changeCaptureFormat(videoCaptureSpec:)")));
- (MeetingClientBoolean * _Nullable)isFrontCam __attribute__((swift_name("isFrontCam()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onSetEnabledEnabled:(BOOL)enabled __attribute__((swift_name("onSetEnabled(enabled:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onStop __attribute__((swift_name("onStop()")));
- (void)removeSinkSink:(MeetingClientMeeting_coreVideoSink *)sink __attribute__((swift_name("removeSink(sink:)")));
- (void)startCapturerCompletion:(void (^ _Nullable)(UIView * _Nullable))completion __attribute__((swift_name("startCapturer(completion:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)switchCameraDeviceId:(NSString * _Nullable)deviceId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("switchCamera(deviceId:completionHandler:)")));
- (void)switchCameraPosition:(int64_t)position completion:(void (^ _Nullable)(UIView * _Nullable))completion __attribute__((swift_name("switchCamera(position:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreVideoSinkDetails")))
@interface MeetingClientMeeting_coreVideoSinkDetails : MeetingClientBase
- (instancetype)initWithStreamId:(NSString *)streamId primaryVideoVideo:(UIView * _Nullable)primaryVideoVideo secondaryVideoView:(UIView * _Nullable)secondaryVideoView localVideoView:(UIView * _Nullable)localVideoView dimensions:(MeetingClientMeeting_coreVideoSinkDimensions * _Nullable)dimensions __attribute__((swift_name("init(streamId:primaryVideoVideo:secondaryVideoView:localVideoView:dimensions:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MeetingClientMeeting_coreVideoSinkDimensions * _Nullable dimensions __attribute__((swift_name("dimensions")));
@property (readonly) UIView * _Nullable localVideoView __attribute__((swift_name("localVideoView")));
@property (readonly) UIView * _Nullable primaryVideoVideo __attribute__((swift_name("primaryVideoVideo")));
@property (readonly) UIView * _Nullable secondaryVideoView __attribute__((swift_name("secondaryVideoView")));
@property (readonly) NSString *streamId __attribute__((swift_name("streamId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreVideoSink")))
@interface MeetingClientMeeting_coreVideoSink : MeetingClientBase
- (instancetype)initWithStreamId:(NSString *)streamId ssrc:(NSString * _Nullable)ssrc receiver:(MeetingClientMeeting_coreRtpReceiver * _Nullable)receiver isScreenShare:(BOOL)isScreenShare __attribute__((swift_name("init(streamId:ssrc:receiver:isScreenShare:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVideoSinkDetailsWithCompletionHandler:(void (^)(MeetingClientMeeting_coreVideoSinkDetails * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVideoSinkDetails(completionHandler:)")));
- (void)hideVideoViewCompletion:(void (^)(MeetingClientBoolean *))completion __attribute__((swift_name("hideVideoView(completion:)")));
- (void)onFrameReceivedStateCsrcRefreshTime:(MeetingClientDouble * _Nullable)csrcRefreshTime completion:(void (^ _Nullable)(MeetingClientBoolean *))completion __attribute__((swift_name("onFrameReceivedState(csrcRefreshTime:completion:)")));
- (void)stopMuteDetector __attribute__((swift_name("stopMuteDetector()")));
- (void)updateVideoTrackStateIsEnabled:(BOOL)isEnabled __attribute__((swift_name("updateVideoTrackState(isEnabled:)")));
@property NSString * _Nullable (^getCSRCUserId)(MeetingClientLong *) __attribute__((swift_name("getCSRCUserId")));
@property BOOL isCSRCEnabled __attribute__((swift_name("isCSRCEnabled")));
@property (readonly) BOOL isScreenShare __attribute__((swift_name("isScreenShare")));
@property void (^ _Nullable onFirstFrameReceived)(void) __attribute__((swift_name("onFirstFrameReceived")));
@property void (^ _Nullable onFrameReceivedState)(MeetingClientBoolean *) __attribute__((swift_name("onFrameReceivedState")));
@property int64_t serverTimestamp __attribute__((swift_name("serverTimestamp")));
@property (readonly) NSString * _Nullable ssrc __attribute__((swift_name("ssrc")));
@property (readonly) NSString *streamId __attribute__((swift_name("streamId")));
@property NSObject * _Nullable uiDetails __attribute__((swift_name("uiDetails")));
@property NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((swift_name("RuntimeQueryListener")))
@protocol MeetingClientRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol MeetingClientRuntimeSqlPreparedStatement
@required
- (void)bindBooleanIndex:(int32_t)index boolean:(MeetingClientBoolean * _Nullable)boolean __attribute__((swift_name("bindBoolean(index:boolean:)")));
- (void)bindBytesIndex:(int32_t)index bytes:(MeetingClientKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(MeetingClientDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(MeetingClientLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol MeetingClientRuntimeSqlCursor
@required
- (MeetingClientBoolean * _Nullable)getBooleanIndex:(int32_t)index __attribute__((swift_name("getBoolean(index:)")));
- (MeetingClientKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (MeetingClientDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (MeetingClientLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (id<MeetingClientRuntimeQueryResult>)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeAfterVersion")))
@interface MeetingClientRuntimeAfterVersion : MeetingClientBase
- (instancetype)initWithAfterVersion:(int64_t)afterVersion block:(void (^)(id<MeetingClientRuntimeSqlDriver>))block __attribute__((swift_name("init(afterVersion:block:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t afterVersion __attribute__((swift_name("afterVersion")));
@property (readonly) void (^block)(id<MeetingClientRuntimeSqlDriver>) __attribute__((swift_name("block")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MeetingClientKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MeetingClientKotlinx_serialization_coreEncoder
@required
- (id<MeetingClientKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MeetingClientKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MeetingClientKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MeetingClientKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MeetingClientKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MeetingClientKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MeetingClientKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<MeetingClientKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MeetingClientKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MeetingClientKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MeetingClientKotlinx_serialization_coreDecoder
@required
- (id<MeetingClientKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MeetingClientKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MeetingClientKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MeetingClientKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MeetingClientKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MeetingClientKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol MeetingClientKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface MeetingClientKotlinx_serialization_jsonJsonElementCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreMediaStreamTrack.Companion")))
@interface MeetingClientMeeting_coreMediaStreamTrackCompanion : MeetingClientBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MeetingClientMeeting_coreMediaStreamTrackCompanion *shared __attribute__((swift_name("shared")));
- (MeetingClientMeeting_coreMediaStreamTrack *)createCommonIos:(RTCMediaStreamTrack *)ios __attribute__((swift_name("createCommon(ios:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreMediaStreamTrackKind")))
@interface MeetingClientMeeting_coreMediaStreamTrackKind : MeetingClientKotlinEnum<MeetingClientMeeting_coreMediaStreamTrackKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MeetingClientMeeting_coreMediaStreamTrackKind *audio __attribute__((swift_name("audio")));
@property (class, readonly) MeetingClientMeeting_coreMediaStreamTrackKind *video __attribute__((swift_name("video")));
+ (MeetingClientKotlinArray<MeetingClientMeeting_coreMediaStreamTrackKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MeetingClientMeeting_coreMediaStreamTrackKind *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreVideoCaptureSpec")))
@interface MeetingClientMeeting_coreVideoCaptureSpec : MeetingClientBase
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height fps:(int32_t)fps __attribute__((swift_name("init(width:height:fps:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t fps __attribute__((swift_name("fps")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreVideoSinkDimensions")))
@interface MeetingClientMeeting_coreVideoSinkDimensions : MeetingClientBase
- (instancetype)initWithWidth:(double)width height:(double)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
- (MeetingClientMeeting_coreVideoSinkDimensions *)doCopyWidth:(double)width height:(double)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double height __attribute__((swift_name("height")));
@property (readonly) double width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreRtpReceiver")))
@interface MeetingClientMeeting_coreRtpReceiver : MeetingClientBase
- (instancetype)initWithNative:(RTCRtpReceiver *)native peerConnection:(NSObject * _Nullable)peerConnection track:(MeetingClientMeeting_coreMediaStreamTrack * _Nullable)track __attribute__((swift_name("init(native:peerConnection:track:)"))) __attribute__((objc_designated_initializer));
- (void)setRtpHeaderCallbackOnRtpHeaderCallback:(id<MeetingClientMeeting_coreRtpHeaderCallback>)onRtpHeaderCallback __attribute__((swift_name("setRtpHeaderCallback(onRtpHeaderCallback:)")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) RTCRtpReceiver *native __attribute__((swift_name("native")));
@property (readonly) MeetingClientMeeting_coreRtpParameters *parameters __attribute__((swift_name("parameters")));
@property (readonly) MeetingClientMeeting_coreMediaStreamTrack * _Nullable track __attribute__((swift_name("track")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MeetingClientKotlinByteArray : MeetingClientBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MeetingClientByte *(^)(MeetingClientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MeetingClientKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MeetingClientKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MeetingClientKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MeetingClientKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MeetingClientKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MeetingClientKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MeetingClientKotlinx_serialization_coreSerializersModule : MeetingClientBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MeetingClientKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MeetingClientKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MeetingClientKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MeetingClientKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MeetingClientKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MeetingClientKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MeetingClientKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MeetingClientKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MeetingClientKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MeetingClientKotlinx_serialization_coreSerialKind : MeetingClientBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MeetingClientKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MeetingClientKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MeetingClientKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MeetingClientKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MeetingClientKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MeetingClientKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MeetingClientKotlinNothing : MeetingClientBase
@end

__attribute__((swift_name("Meeting_coreRtpHeaderCallback")))
@protocol MeetingClientMeeting_coreRtpHeaderCallback
@required
- (void)onRtpHeaderReceivedSequenceNumber:(int64_t)sequenceNumber timestamp:(int64_t)timestamp rtpTimestamp:(int64_t)rtpTimestamp ssrc:(int64_t)ssrc csrc:(int64_t)csrc __attribute__((swift_name("onRtpHeaderReceived(sequenceNumber:timestamp:rtpTimestamp:ssrc:csrc:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreRtpParameters")))
@interface MeetingClientMeeting_coreRtpParameters : MeetingClientBase
- (instancetype)initWithNative:(RTCRtpParameters *)native __attribute__((swift_name("init(native:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<MeetingClientMeeting_coreRtpCodecParameters *> *codecs __attribute__((swift_name("codecs")));
@property (readonly) NSArray<MeetingClientMeeting_coreRtpEncodingParameters *> *encodings __attribute__((swift_name("encodings")));
@property (readonly) NSArray<MeetingClientMeeting_coreHeaderExtension *> *headerExtension __attribute__((swift_name("headerExtension")));
@property (readonly) RTCRtpParameters *native __attribute__((swift_name("native")));
@property (readonly) MeetingClientMeeting_coreRtcpParameters *rtcp __attribute__((swift_name("rtcp")));
@property (readonly) NSString *transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface MeetingClientKotlinByteIterator : MeetingClientBase <MeetingClientKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MeetingClientByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MeetingClientKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MeetingClientKotlinKClass>)kClass provider:(id<MeetingClientKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MeetingClientKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MeetingClientKotlinKClass>)kClass serializer:(id<MeetingClientKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MeetingClientKotlinKClass>)baseClass actualClass:(id<MeetingClientKotlinKClass>)actualClass actualSerializer:(id<MeetingClientKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MeetingClientKotlinKClass>)baseClass defaultDeserializerProvider:(id<MeetingClientKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MeetingClientKotlinKClass>)baseClass defaultDeserializerProvider:(id<MeetingClientKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MeetingClientKotlinKClass>)baseClass defaultSerializerProvider:(id<MeetingClientKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MeetingClientKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MeetingClientKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MeetingClientKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MeetingClientKotlinKClass <MeetingClientKotlinKDeclarationContainer, MeetingClientKotlinKAnnotatedElement, MeetingClientKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreRtpCodecParameters")))
@interface MeetingClientMeeting_coreRtpCodecParameters : MeetingClientBase
- (instancetype)initWithNative:(RTCRtpCodecParameters *)native __attribute__((swift_name("init(native:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MeetingClientInt * _Nullable clockRate __attribute__((swift_name("clockRate")));
@property (readonly) NSString * _Nullable mimeType __attribute__((swift_name("mimeType")));
@property (readonly) RTCRtpCodecParameters *native __attribute__((swift_name("native")));
@property (readonly) MeetingClientInt * _Nullable numChannels __attribute__((swift_name("numChannels")));
@property (readonly) NSDictionary<NSString *, NSString *> *parameters __attribute__((swift_name("parameters")));
@property (readonly) int32_t payloadType __attribute__((swift_name("payloadType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreRtpEncodingParameters")))
@interface MeetingClientMeeting_coreRtpEncodingParameters : MeetingClientBase
- (instancetype)initWithNative:(RTCRtpEncodingParameters *)native __attribute__((swift_name("init(native:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL active __attribute__((swift_name("active")));
@property (readonly) double bitratePriority __attribute__((swift_name("bitratePriority")));
@property (readonly) MeetingClientInt * _Nullable maxBitrateBps __attribute__((swift_name("maxBitrateBps")));
@property (readonly) MeetingClientInt * _Nullable maxFramerate __attribute__((swift_name("maxFramerate")));
@property (readonly) MeetingClientInt * _Nullable minBitrateBps __attribute__((swift_name("minBitrateBps")));
@property (readonly) RTCRtpEncodingParameters *native __attribute__((swift_name("native")));
@property (readonly) int32_t networkPriority __attribute__((swift_name("networkPriority")));
@property (readonly) MeetingClientInt * _Nullable numTemporalLayers __attribute__((swift_name("numTemporalLayers")));
@property (readonly) NSString * _Nullable rid __attribute__((swift_name("rid")));
@property (readonly) MeetingClientDouble * _Nullable scaleResolutionDownBy __attribute__((swift_name("scaleResolutionDownBy")));
@property (readonly) MeetingClientLong * _Nullable ssrc __attribute__((swift_name("ssrc")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreHeaderExtension")))
@interface MeetingClientMeeting_coreHeaderExtension : MeetingClientBase
- (instancetype)initWithNative:(RTCRtpHeaderExtension *)native __attribute__((swift_name("init(native:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL encrypted __attribute__((swift_name("encrypted")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) RTCRtpHeaderExtension *native __attribute__((swift_name("native")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meeting_coreRtcpParameters")))
@interface MeetingClientMeeting_coreRtcpParameters : MeetingClientBase
- (instancetype)initWithNative:(RTCRtcpParameters *)native __attribute__((swift_name("init(native:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *cname __attribute__((swift_name("cname")));
@property (readonly) RTCRtcpParameters *native __attribute__((swift_name("native")));
@property (readonly) BOOL reducedSize __attribute__((swift_name("reducedSize")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
