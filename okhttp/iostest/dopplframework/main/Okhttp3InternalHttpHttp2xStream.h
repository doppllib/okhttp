//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Okhttp3InternalHttpHttp2xStream")
#ifdef RESTRICT_Okhttp3InternalHttpHttp2xStream
#define INCLUDE_ALL_Okhttp3InternalHttpHttp2xStream 0
#else
#define INCLUDE_ALL_Okhttp3InternalHttpHttp2xStream 1
#endif
#undef RESTRICT_Okhttp3InternalHttpHttp2xStream

#if !defined (Okhttp3InternalHttpHttp2xStream_) && (INCLUDE_ALL_Okhttp3InternalHttpHttp2xStream || defined(INCLUDE_Okhttp3InternalHttpHttp2xStream))
#define Okhttp3InternalHttpHttp2xStream_

#define RESTRICT_Okhttp3InternalHttpHttpStream 1
#define INCLUDE_Okhttp3InternalHttpHttpStream 1
#include "Okhttp3InternalHttpHttpStream.h"

@class Okhttp3InternalConnectionStreamAllocation;
@class Okhttp3InternalFramedFramedConnection;
@class Okhttp3OkHttpClient;
@class Okhttp3Request;
@class Okhttp3Response;
@class Okhttp3ResponseBody;
@class Okhttp3Response_Builder;
@protocol JavaUtilList;
@protocol OkioSink;

@interface Okhttp3InternalHttpHttp2xStream : NSObject < Okhttp3InternalHttpHttpStream >

#pragma mark Public

- (instancetype)initWithOkhttp3OkHttpClient:(Okhttp3OkHttpClient *)client
withOkhttp3InternalConnectionStreamAllocation:(Okhttp3InternalConnectionStreamAllocation *)streamAllocation
  withOkhttp3InternalFramedFramedConnection:(Okhttp3InternalFramedFramedConnection *)framedConnection;

- (void)cancel;

- (id<OkioSink>)createRequestBodyWithOkhttp3Request:(Okhttp3Request *)request
                                           withLong:(jlong)contentLength;

- (void)finishRequest;

+ (id<JavaUtilList>)http2HeadersListWithOkhttp3Request:(Okhttp3Request *)request;

- (Okhttp3ResponseBody *)openResponseBodyWithOkhttp3Response:(Okhttp3Response *)response;

+ (Okhttp3Response_Builder *)readHttp2HeadersListWithJavaUtilList:(id<JavaUtilList>)headerBlock;

- (Okhttp3Response_Builder *)readResponseHeaders;

+ (Okhttp3Response_Builder *)readSpdy3HeadersListWithJavaUtilList:(id<JavaUtilList>)headerBlock;

+ (id<JavaUtilList>)spdy3HeadersListWithOkhttp3Request:(Okhttp3Request *)request;

- (void)writeRequestHeadersWithOkhttp3Request:(Okhttp3Request *)request;

@end

J2OBJC_STATIC_INIT(Okhttp3InternalHttpHttp2xStream)

FOUNDATION_EXPORT void Okhttp3InternalHttpHttp2xStream_initWithOkhttp3OkHttpClient_withOkhttp3InternalConnectionStreamAllocation_withOkhttp3InternalFramedFramedConnection_(Okhttp3InternalHttpHttp2xStream *self, Okhttp3OkHttpClient *client, Okhttp3InternalConnectionStreamAllocation *streamAllocation, Okhttp3InternalFramedFramedConnection *framedConnection);

FOUNDATION_EXPORT Okhttp3InternalHttpHttp2xStream *new_Okhttp3InternalHttpHttp2xStream_initWithOkhttp3OkHttpClient_withOkhttp3InternalConnectionStreamAllocation_withOkhttp3InternalFramedFramedConnection_(Okhttp3OkHttpClient *client, Okhttp3InternalConnectionStreamAllocation *streamAllocation, Okhttp3InternalFramedFramedConnection *framedConnection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT Okhttp3InternalHttpHttp2xStream *create_Okhttp3InternalHttpHttp2xStream_initWithOkhttp3OkHttpClient_withOkhttp3InternalConnectionStreamAllocation_withOkhttp3InternalFramedFramedConnection_(Okhttp3OkHttpClient *client, Okhttp3InternalConnectionStreamAllocation *streamAllocation, Okhttp3InternalFramedFramedConnection *framedConnection);

FOUNDATION_EXPORT id<JavaUtilList> Okhttp3InternalHttpHttp2xStream_spdy3HeadersListWithOkhttp3Request_(Okhttp3Request *request);

FOUNDATION_EXPORT id<JavaUtilList> Okhttp3InternalHttpHttp2xStream_http2HeadersListWithOkhttp3Request_(Okhttp3Request *request);

FOUNDATION_EXPORT Okhttp3Response_Builder *Okhttp3InternalHttpHttp2xStream_readSpdy3HeadersListWithJavaUtilList_(id<JavaUtilList> headerBlock);

FOUNDATION_EXPORT Okhttp3Response_Builder *Okhttp3InternalHttpHttp2xStream_readHttp2HeadersListWithJavaUtilList_(id<JavaUtilList> headerBlock);

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3InternalHttpHttp2xStream)

#endif

#if !defined (Okhttp3InternalHttpHttp2xStream_StreamFinishingSource_) && (INCLUDE_ALL_Okhttp3InternalHttpHttp2xStream || defined(INCLUDE_Okhttp3InternalHttpHttp2xStream_StreamFinishingSource))
#define Okhttp3InternalHttpHttp2xStream_StreamFinishingSource_

#define RESTRICT_OkioForwardingSource 1
#define INCLUDE_OkioForwardingSource 1
#include "okio/ForwardingSource.h"

@class Okhttp3InternalHttpHttp2xStream;
@protocol OkioSource;

@interface Okhttp3InternalHttpHttp2xStream_StreamFinishingSource : OkioForwardingSource

#pragma mark Public

- (instancetype)initWithOkhttp3InternalHttpHttp2xStream:(Okhttp3InternalHttpHttp2xStream *)outer$
                                         withOkioSource:(id<OkioSource>)delegate;

- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(Okhttp3InternalHttpHttp2xStream_StreamFinishingSource)

FOUNDATION_EXPORT void Okhttp3InternalHttpHttp2xStream_StreamFinishingSource_initWithOkhttp3InternalHttpHttp2xStream_withOkioSource_(Okhttp3InternalHttpHttp2xStream_StreamFinishingSource *self, Okhttp3InternalHttpHttp2xStream *outer$, id<OkioSource> delegate);

FOUNDATION_EXPORT Okhttp3InternalHttpHttp2xStream_StreamFinishingSource *new_Okhttp3InternalHttpHttp2xStream_StreamFinishingSource_initWithOkhttp3InternalHttpHttp2xStream_withOkioSource_(Okhttp3InternalHttpHttp2xStream *outer$, id<OkioSource> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT Okhttp3InternalHttpHttp2xStream_StreamFinishingSource *create_Okhttp3InternalHttpHttp2xStream_StreamFinishingSource_initWithOkhttp3InternalHttpHttp2xStream_withOkioSource_(Okhttp3InternalHttpHttp2xStream *outer$, id<OkioSource> delegate);

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3InternalHttpHttp2xStream_StreamFinishingSource)

#endif

#pragma pop_macro("INCLUDE_ALL_Okhttp3InternalHttpHttp2xStream")
