//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Okhttp3Response")
#ifdef RESTRICT_Okhttp3Response
#define INCLUDE_ALL_Okhttp3Response 0
#else
#define INCLUDE_ALL_Okhttp3Response 1
#endif
#undef RESTRICT_Okhttp3Response

#if !defined (Okhttp3Response_) && (INCLUDE_ALL_Okhttp3Response || defined(INCLUDE_Okhttp3Response))
#define Okhttp3Response_

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "java/io/Closeable.h"

@class Okhttp3CacheControl;
@class Okhttp3Handshake;
@class Okhttp3Headers;
@class Okhttp3Protocol;
@class Okhttp3Request;
@class Okhttp3ResponseBody;
@class Okhttp3Response_Builder;
@protocol JavaUtilList;

@interface Okhttp3Response : NSObject < JavaIoCloseable >

#pragma mark Public

- (Okhttp3ResponseBody *)body;

- (Okhttp3CacheControl *)cacheControl;

- (Okhttp3Response *)cacheResponse;

- (id<JavaUtilList>)challenges;

- (void)close;

- (jint)code;

- (Okhttp3Handshake *)handshake;

- (NSString *)headerWithNSString:(NSString *)name;

- (NSString *)headerWithNSString:(NSString *)name
                    withNSString:(NSString *)defaultValue;

- (Okhttp3Headers *)headers;

- (id<JavaUtilList>)headersWithNSString:(NSString *)name;

- (jboolean)isRedirect;

- (jboolean)isSuccessful;

- (NSString *)message;

- (Okhttp3Response *)networkResponse;

- (Okhttp3Response_Builder *)newBuilder OBJC_METHOD_FAMILY_NONE;

- (Okhttp3ResponseBody *)peekBodyWithLong:(jlong)byteCount;

- (Okhttp3Response *)priorResponse;

- (Okhttp3Protocol *)protocol;

- (jlong)receivedResponseAtMillis;

- (Okhttp3Request *)request;

- (jlong)sentRequestAtMillis;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(Okhttp3Response)

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3Response)

#endif

#if !defined (Okhttp3Response_Builder_) && (INCLUDE_ALL_Okhttp3Response || defined(INCLUDE_Okhttp3Response_Builder))
#define Okhttp3Response_Builder_

@class Okhttp3Handshake;
@class Okhttp3Headers;
@class Okhttp3Protocol;
@class Okhttp3Request;
@class Okhttp3Response;
@class Okhttp3ResponseBody;

@interface Okhttp3Response_Builder : NSObject

#pragma mark Public

- (instancetype)init;

- (Okhttp3Response_Builder *)addHeaderWithNSString:(NSString *)name
                                      withNSString:(NSString *)value;

- (Okhttp3Response_Builder *)bodyWithOkhttp3ResponseBody:(Okhttp3ResponseBody *)body;

- (Okhttp3Response *)build;

- (Okhttp3Response_Builder *)cacheResponseWithOkhttp3Response:(Okhttp3Response *)cacheResponse;

- (Okhttp3Response_Builder *)codeWithInt:(jint)code;

- (Okhttp3Response_Builder *)handshakeWithOkhttp3Handshake:(Okhttp3Handshake *)handshake;

- (Okhttp3Response_Builder *)headerWithNSString:(NSString *)name
                                   withNSString:(NSString *)value;

- (Okhttp3Response_Builder *)headersWithOkhttp3Headers:(Okhttp3Headers *)headers;

- (Okhttp3Response_Builder *)messageWithNSString:(NSString *)message;

- (Okhttp3Response_Builder *)networkResponseWithOkhttp3Response:(Okhttp3Response *)networkResponse;

- (Okhttp3Response_Builder *)priorResponseWithOkhttp3Response:(Okhttp3Response *)priorResponse;

- (Okhttp3Response_Builder *)protocolWithOkhttp3Protocol:(Okhttp3Protocol *)protocol;

- (Okhttp3Response_Builder *)receivedResponseAtMillisWithLong:(jlong)receivedResponseAtMillis;

- (Okhttp3Response_Builder *)removeHeaderWithNSString:(NSString *)name;

- (Okhttp3Response_Builder *)requestWithOkhttp3Request:(Okhttp3Request *)request;

- (Okhttp3Response_Builder *)sentRequestAtMillisWithLong:(jlong)sentRequestAtMillis;

@end

J2OBJC_EMPTY_STATIC_INIT(Okhttp3Response_Builder)

FOUNDATION_EXPORT void Okhttp3Response_Builder_init(Okhttp3Response_Builder *self);

FOUNDATION_EXPORT Okhttp3Response_Builder *new_Okhttp3Response_Builder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT Okhttp3Response_Builder *create_Okhttp3Response_Builder_init();

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3Response_Builder)

#endif

#pragma pop_macro("INCLUDE_ALL_Okhttp3Response")
