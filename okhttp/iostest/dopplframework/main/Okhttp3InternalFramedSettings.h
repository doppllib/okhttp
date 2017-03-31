//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Okhttp3InternalFramedSettings")
#ifdef RESTRICT_Okhttp3InternalFramedSettings
#define INCLUDE_ALL_Okhttp3InternalFramedSettings 0
#else
#define INCLUDE_ALL_Okhttp3InternalFramedSettings 1
#endif
#undef RESTRICT_Okhttp3InternalFramedSettings

#if !defined (Okhttp3InternalFramedSettings_) && (INCLUDE_ALL_Okhttp3InternalFramedSettings || defined(INCLUDE_Okhttp3InternalFramedSettings))
#define Okhttp3InternalFramedSettings_

@interface Okhttp3InternalFramedSettings : NSObject

#pragma mark Public

- (instancetype)init;

#pragma mark Package-Private

- (void)clear;

- (jint)flagsWithInt:(jint)id_;

- (jint)getWithInt:(jint)id_;

- (jint)getClientCertificateVectorSizeWithInt:(jint)defaultValue;

- (jint)getCurrentCwndWithInt:(jint)defaultValue;

- (jint)getDownloadBandwidthWithInt:(jint)defaultValue;

- (jint)getDownloadRetransRateWithInt:(jint)defaultValue;

- (jboolean)getEnablePushWithBoolean:(jboolean)defaultValue;

- (jint)getHeaderTableSize;

- (jint)getInitialWindowSizeWithInt:(jint)defaultValue;

- (jint)getMaxConcurrentStreamsWithInt:(jint)defaultValue;

- (jint)getMaxFrameSizeWithInt:(jint)defaultValue;

- (jint)getMaxHeaderListSizeWithInt:(jint)defaultValue;

- (jint)getRoundTripTimeWithInt:(jint)defaultValue;

- (jint)getUploadBandwidthWithInt:(jint)defaultValue;

- (jboolean)isFlowControlDisabled;

- (jboolean)isPersistedWithInt:(jint)id_;

- (jboolean)isSetWithInt:(jint)id_;

- (void)mergeWithOkhttp3InternalFramedSettings:(Okhttp3InternalFramedSettings *)other;

- (jboolean)persistValueWithInt:(jint)id_;

- (Okhttp3InternalFramedSettings *)setWithInt:(jint)id_
                                      withInt:(jint)idFlags
                                      withInt:(jint)value;

- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(Okhttp3InternalFramedSettings)

inline jint Okhttp3InternalFramedSettings_get_DEFAULT_INITIAL_WINDOW_SIZE();
#define Okhttp3InternalFramedSettings_DEFAULT_INITIAL_WINDOW_SIZE 65536
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, DEFAULT_INITIAL_WINDOW_SIZE, jint)

inline jint Okhttp3InternalFramedSettings_get_FLAG_CLEAR_PREVIOUSLY_PERSISTED_SETTINGS();
#define Okhttp3InternalFramedSettings_FLAG_CLEAR_PREVIOUSLY_PERSISTED_SETTINGS 1
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, FLAG_CLEAR_PREVIOUSLY_PERSISTED_SETTINGS, jint)

inline jint Okhttp3InternalFramedSettings_get_PERSIST_VALUE();
#define Okhttp3InternalFramedSettings_PERSIST_VALUE 1
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, PERSIST_VALUE, jint)

inline jint Okhttp3InternalFramedSettings_get_PERSISTED();
#define Okhttp3InternalFramedSettings_PERSISTED 2
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, PERSISTED, jint)

inline jint Okhttp3InternalFramedSettings_get_UPLOAD_BANDWIDTH();
#define Okhttp3InternalFramedSettings_UPLOAD_BANDWIDTH 1
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, UPLOAD_BANDWIDTH, jint)

inline jint Okhttp3InternalFramedSettings_get_HEADER_TABLE_SIZE();
#define Okhttp3InternalFramedSettings_HEADER_TABLE_SIZE 1
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, HEADER_TABLE_SIZE, jint)

inline jint Okhttp3InternalFramedSettings_get_DOWNLOAD_BANDWIDTH();
#define Okhttp3InternalFramedSettings_DOWNLOAD_BANDWIDTH 2
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, DOWNLOAD_BANDWIDTH, jint)

inline jint Okhttp3InternalFramedSettings_get_ENABLE_PUSH();
#define Okhttp3InternalFramedSettings_ENABLE_PUSH 2
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, ENABLE_PUSH, jint)

inline jint Okhttp3InternalFramedSettings_get_ROUND_TRIP_TIME();
#define Okhttp3InternalFramedSettings_ROUND_TRIP_TIME 3
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, ROUND_TRIP_TIME, jint)

inline jint Okhttp3InternalFramedSettings_get_MAX_CONCURRENT_STREAMS();
#define Okhttp3InternalFramedSettings_MAX_CONCURRENT_STREAMS 4
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, MAX_CONCURRENT_STREAMS, jint)

inline jint Okhttp3InternalFramedSettings_get_CURRENT_CWND();
#define Okhttp3InternalFramedSettings_CURRENT_CWND 5
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, CURRENT_CWND, jint)

inline jint Okhttp3InternalFramedSettings_get_MAX_FRAME_SIZE();
#define Okhttp3InternalFramedSettings_MAX_FRAME_SIZE 5
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, MAX_FRAME_SIZE, jint)

inline jint Okhttp3InternalFramedSettings_get_DOWNLOAD_RETRANS_RATE();
#define Okhttp3InternalFramedSettings_DOWNLOAD_RETRANS_RATE 6
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, DOWNLOAD_RETRANS_RATE, jint)

inline jint Okhttp3InternalFramedSettings_get_MAX_HEADER_LIST_SIZE();
#define Okhttp3InternalFramedSettings_MAX_HEADER_LIST_SIZE 6
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, MAX_HEADER_LIST_SIZE, jint)

inline jint Okhttp3InternalFramedSettings_get_INITIAL_WINDOW_SIZE();
#define Okhttp3InternalFramedSettings_INITIAL_WINDOW_SIZE 7
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, INITIAL_WINDOW_SIZE, jint)

inline jint Okhttp3InternalFramedSettings_get_CLIENT_CERTIFICATE_VECTOR_SIZE();
#define Okhttp3InternalFramedSettings_CLIENT_CERTIFICATE_VECTOR_SIZE 8
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, CLIENT_CERTIFICATE_VECTOR_SIZE, jint)

inline jint Okhttp3InternalFramedSettings_get_FLOW_CONTROL_OPTIONS();
#define Okhttp3InternalFramedSettings_FLOW_CONTROL_OPTIONS 10
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, FLOW_CONTROL_OPTIONS, jint)

inline jint Okhttp3InternalFramedSettings_get_COUNT();
#define Okhttp3InternalFramedSettings_COUNT 10
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, COUNT, jint)

inline jint Okhttp3InternalFramedSettings_get_FLOW_CONTROL_OPTIONS_DISABLED();
#define Okhttp3InternalFramedSettings_FLOW_CONTROL_OPTIONS_DISABLED 1
J2OBJC_STATIC_FIELD_CONSTANT(Okhttp3InternalFramedSettings, FLOW_CONTROL_OPTIONS_DISABLED, jint)

FOUNDATION_EXPORT void Okhttp3InternalFramedSettings_init(Okhttp3InternalFramedSettings *self);

FOUNDATION_EXPORT Okhttp3InternalFramedSettings *new_Okhttp3InternalFramedSettings_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT Okhttp3InternalFramedSettings *create_Okhttp3InternalFramedSettings_init();

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3InternalFramedSettings)

#endif

#pragma pop_macro("INCLUDE_ALL_Okhttp3InternalFramedSettings")
