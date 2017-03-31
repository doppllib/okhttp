//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Okhttp3InternalUtil")
#ifdef RESTRICT_Okhttp3InternalUtil
#define INCLUDE_ALL_Okhttp3InternalUtil 0
#else
#define INCLUDE_ALL_Okhttp3InternalUtil 1
#endif
#undef RESTRICT_Okhttp3InternalUtil

#if !defined (Okhttp3InternalUtil_) && (INCLUDE_ALL_Okhttp3InternalUtil || defined(INCLUDE_Okhttp3InternalUtil))
#define Okhttp3InternalUtil_

@class IOSByteArray;
@class IOSClass;
@class IOSObjectArray;
@class JavaLangAssertionError;
@class JavaNetServerSocket;
@class JavaNetSocket;
@class JavaNioCharsetCharset;
@class JavaUtilConcurrentTimeUnit;
@class JavaUtilTimeZone;
@class Okhttp3HttpUrl;
@class OkioByteString;
@protocol JavaIoCloseable;
@protocol JavaUtilConcurrentThreadFactory;
@protocol JavaUtilList;
@protocol OkioSource;

@interface Okhttp3InternalUtil : NSObject

#pragma mark Public

+ (void)checkOffsetAndCountWithLong:(jlong)arrayLength
                           withLong:(jlong)offset
                           withLong:(jlong)count;

+ (void)closeAllWithJavaIoCloseable:(id<JavaIoCloseable>)a
                withJavaIoCloseable:(id<JavaIoCloseable>)b;

+ (void)closeQuietlyWithJavaIoCloseable:(id<JavaIoCloseable>)closeable;

+ (void)closeQuietlyWithJavaNetServerSocket:(JavaNetServerSocket *)serverSocket;

+ (void)closeQuietlyWithJavaNetSocket:(JavaNetSocket *)socket;

+ (IOSObjectArray *)concatWithNSStringArray:(IOSObjectArray *)array
                               withNSString:(NSString *)value;

+ (jint)delimiterOffsetWithNSString:(NSString *)input
                            withInt:(jint)pos
                            withInt:(jint)limit
                           withChar:(jchar)delimiter;

+ (jint)delimiterOffsetWithNSString:(NSString *)input
                            withInt:(jint)pos
                            withInt:(jint)limit
                       withNSString:(NSString *)delimiters;

+ (jboolean)discardWithOkioSource:(id<OkioSource>)source
                          withInt:(jint)timeout
   withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit;

+ (NSString *)domainToAsciiWithNSString:(NSString *)input;

+ (jboolean)equalWithId:(id)a
                 withId:(id)b;

+ (NSString *)formatWithNSString:(NSString *)format
               withNSObjectArray:(IOSObjectArray *)args;

+ (NSString *)hostHeaderWithOkhttp3HttpUrl:(Okhttp3HttpUrl *)url
                               withBoolean:(jboolean)includeDefaultPort;

+ (id<JavaUtilList>)immutableListWithJavaUtilList:(id<JavaUtilList>)list;

+ (id<JavaUtilList>)immutableListWithNSObjectArray:(IOSObjectArray *)elements;

+ (jint)indexOfWithNSObjectArray:(IOSObjectArray *)array
                          withId:(id)value;

+ (IOSObjectArray *)intersectWithIOSClass:(IOSClass *)arrayType
                        withNSObjectArray:(IOSObjectArray *)first
                        withNSObjectArray:(IOSObjectArray *)second;

+ (jboolean)isAndroidGetsocknameErrorWithJavaLangAssertionError:(JavaLangAssertionError *)e;

+ (NSString *)md5HexWithNSString:(NSString *)s;

+ (OkioByteString *)sha1WithOkioByteString:(OkioByteString *)s;

+ (OkioByteString *)sha256WithOkioByteString:(OkioByteString *)s;

+ (NSString *)shaBase64WithNSString:(NSString *)s;

+ (jboolean)skipAllWithOkioSource:(id<OkioSource>)source
                          withInt:(jint)duration
   withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit;

+ (jint)skipLeadingAsciiWhitespaceWithNSString:(NSString *)input
                                       withInt:(jint)pos
                                       withInt:(jint)limit;

+ (jint)skipTrailingAsciiWhitespaceWithNSString:(NSString *)input
                                        withInt:(jint)pos
                                        withInt:(jint)limit;

+ (id<JavaUtilConcurrentThreadFactory>)threadFactoryWithNSString:(NSString *)name
                                                     withBoolean:(jboolean)daemon;

+ (NSString *)toHumanReadableAsciiWithNSString:(NSString *)s;

+ (NSString *)trimSubstringWithNSString:(NSString *)string
                                withInt:(jint)pos
                                withInt:(jint)limit;

+ (jboolean)verifyAsIpAddressWithNSString:(NSString *)host;

@end

J2OBJC_STATIC_INIT(Okhttp3InternalUtil)

inline IOSByteArray *Okhttp3InternalUtil_get_EMPTY_BYTE_ARRAY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSByteArray *Okhttp3InternalUtil_EMPTY_BYTE_ARRAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(Okhttp3InternalUtil, EMPTY_BYTE_ARRAY, IOSByteArray *)

inline IOSObjectArray *Okhttp3InternalUtil_get_EMPTY_STRING_ARRAY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *Okhttp3InternalUtil_EMPTY_STRING_ARRAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(Okhttp3InternalUtil, EMPTY_STRING_ARRAY, IOSObjectArray *)

inline JavaNioCharsetCharset *Okhttp3InternalUtil_get_UTF_8();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *Okhttp3InternalUtil_UTF_8;
J2OBJC_STATIC_FIELD_OBJ_FINAL(Okhttp3InternalUtil, UTF_8, JavaNioCharsetCharset *)

inline JavaUtilTimeZone *Okhttp3InternalUtil_get_UTC();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilTimeZone *Okhttp3InternalUtil_UTC;
J2OBJC_STATIC_FIELD_OBJ_FINAL(Okhttp3InternalUtil, UTC, JavaUtilTimeZone *)

FOUNDATION_EXPORT void Okhttp3InternalUtil_checkOffsetAndCountWithLong_withLong_withLong_(jlong arrayLength, jlong offset, jlong count);

FOUNDATION_EXPORT jboolean Okhttp3InternalUtil_equalWithId_withId_(id a, id b);

FOUNDATION_EXPORT void Okhttp3InternalUtil_closeQuietlyWithJavaIoCloseable_(id<JavaIoCloseable> closeable);

FOUNDATION_EXPORT void Okhttp3InternalUtil_closeQuietlyWithJavaNetSocket_(JavaNetSocket *socket);

FOUNDATION_EXPORT void Okhttp3InternalUtil_closeQuietlyWithJavaNetServerSocket_(JavaNetServerSocket *serverSocket);

FOUNDATION_EXPORT void Okhttp3InternalUtil_closeAllWithJavaIoCloseable_withJavaIoCloseable_(id<JavaIoCloseable> a, id<JavaIoCloseable> b);

FOUNDATION_EXPORT jboolean Okhttp3InternalUtil_discardWithOkioSource_withInt_withJavaUtilConcurrentTimeUnit_(id<OkioSource> source, jint timeout, JavaUtilConcurrentTimeUnit *timeUnit);

FOUNDATION_EXPORT jboolean Okhttp3InternalUtil_skipAllWithOkioSource_withInt_withJavaUtilConcurrentTimeUnit_(id<OkioSource> source, jint duration, JavaUtilConcurrentTimeUnit *timeUnit);

FOUNDATION_EXPORT NSString *Okhttp3InternalUtil_md5HexWithNSString_(NSString *s);

FOUNDATION_EXPORT NSString *Okhttp3InternalUtil_shaBase64WithNSString_(NSString *s);

FOUNDATION_EXPORT OkioByteString *Okhttp3InternalUtil_sha1WithOkioByteString_(OkioByteString *s);

FOUNDATION_EXPORT OkioByteString *Okhttp3InternalUtil_sha256WithOkioByteString_(OkioByteString *s);

FOUNDATION_EXPORT id<JavaUtilList> Okhttp3InternalUtil_immutableListWithJavaUtilList_(id<JavaUtilList> list);

FOUNDATION_EXPORT id<JavaUtilList> Okhttp3InternalUtil_immutableListWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT id<JavaUtilConcurrentThreadFactory> Okhttp3InternalUtil_threadFactoryWithNSString_withBoolean_(NSString *name, jboolean daemon);

FOUNDATION_EXPORT IOSObjectArray *Okhttp3InternalUtil_intersectWithIOSClass_withNSObjectArray_withNSObjectArray_(IOSClass *arrayType, IOSObjectArray *first, IOSObjectArray *second);

FOUNDATION_EXPORT NSString *Okhttp3InternalUtil_hostHeaderWithOkhttp3HttpUrl_withBoolean_(Okhttp3HttpUrl *url, jboolean includeDefaultPort);

FOUNDATION_EXPORT NSString *Okhttp3InternalUtil_toHumanReadableAsciiWithNSString_(NSString *s);

FOUNDATION_EXPORT jboolean Okhttp3InternalUtil_isAndroidGetsocknameErrorWithJavaLangAssertionError_(JavaLangAssertionError *e);

FOUNDATION_EXPORT jint Okhttp3InternalUtil_indexOfWithNSObjectArray_withId_(IOSObjectArray *array, id value);

FOUNDATION_EXPORT IOSObjectArray *Okhttp3InternalUtil_concatWithNSStringArray_withNSString_(IOSObjectArray *array, NSString *value);

FOUNDATION_EXPORT jint Okhttp3InternalUtil_skipLeadingAsciiWhitespaceWithNSString_withInt_withInt_(NSString *input, jint pos, jint limit);

FOUNDATION_EXPORT jint Okhttp3InternalUtil_skipTrailingAsciiWhitespaceWithNSString_withInt_withInt_(NSString *input, jint pos, jint limit);

FOUNDATION_EXPORT NSString *Okhttp3InternalUtil_trimSubstringWithNSString_withInt_withInt_(NSString *string, jint pos, jint limit);

FOUNDATION_EXPORT jint Okhttp3InternalUtil_delimiterOffsetWithNSString_withInt_withInt_withNSString_(NSString *input, jint pos, jint limit, NSString *delimiters);

FOUNDATION_EXPORT jint Okhttp3InternalUtil_delimiterOffsetWithNSString_withInt_withInt_withChar_(NSString *input, jint pos, jint limit, jchar delimiter);

FOUNDATION_EXPORT NSString *Okhttp3InternalUtil_domainToAsciiWithNSString_(NSString *input);

FOUNDATION_EXPORT jboolean Okhttp3InternalUtil_verifyAsIpAddressWithNSString_(NSString *host);

FOUNDATION_EXPORT NSString *Okhttp3InternalUtil_formatWithNSString_withNSObjectArray_(NSString *format, IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3InternalUtil)

#endif

#pragma pop_macro("INCLUDE_ALL_Okhttp3InternalUtil")
