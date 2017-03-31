//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Okhttp3InternalFramedNameValueBlockReader")
#ifdef RESTRICT_Okhttp3InternalFramedNameValueBlockReader
#define INCLUDE_ALL_Okhttp3InternalFramedNameValueBlockReader 0
#else
#define INCLUDE_ALL_Okhttp3InternalFramedNameValueBlockReader 1
#endif
#undef RESTRICT_Okhttp3InternalFramedNameValueBlockReader

#if !defined (Okhttp3InternalFramedNameValueBlockReader_) && (INCLUDE_ALL_Okhttp3InternalFramedNameValueBlockReader || defined(INCLUDE_Okhttp3InternalFramedNameValueBlockReader))
#define Okhttp3InternalFramedNameValueBlockReader_

@protocol JavaUtilList;
@protocol OkioBufferedSource;

@interface Okhttp3InternalFramedNameValueBlockReader : NSObject

#pragma mark Public

- (instancetype)initWithOkioBufferedSource:(id<OkioBufferedSource>)source;

- (void)close;

- (id<JavaUtilList>)readNameValueBlockWithInt:(jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(Okhttp3InternalFramedNameValueBlockReader)

FOUNDATION_EXPORT void Okhttp3InternalFramedNameValueBlockReader_initWithOkioBufferedSource_(Okhttp3InternalFramedNameValueBlockReader *self, id<OkioBufferedSource> source);

FOUNDATION_EXPORT Okhttp3InternalFramedNameValueBlockReader *new_Okhttp3InternalFramedNameValueBlockReader_initWithOkioBufferedSource_(id<OkioBufferedSource> source) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT Okhttp3InternalFramedNameValueBlockReader *create_Okhttp3InternalFramedNameValueBlockReader_initWithOkioBufferedSource_(id<OkioBufferedSource> source);

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3InternalFramedNameValueBlockReader)

#endif

#pragma pop_macro("INCLUDE_ALL_Okhttp3InternalFramedNameValueBlockReader")
