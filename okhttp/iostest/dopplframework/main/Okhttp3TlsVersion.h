//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Okhttp3TlsVersion")
#ifdef RESTRICT_Okhttp3TlsVersion
#define INCLUDE_ALL_Okhttp3TlsVersion 0
#else
#define INCLUDE_ALL_Okhttp3TlsVersion 1
#endif
#undef RESTRICT_Okhttp3TlsVersion

#if !defined (Okhttp3TlsVersion_) && (INCLUDE_ALL_Okhttp3TlsVersion || defined(INCLUDE_Okhttp3TlsVersion))
#define Okhttp3TlsVersion_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, Okhttp3TlsVersion_Enum) {
  Okhttp3TlsVersion_Enum_TLS_1_2 = 0,
  Okhttp3TlsVersion_Enum_TLS_1_1 = 1,
  Okhttp3TlsVersion_Enum_TLS_1_0 = 2,
  Okhttp3TlsVersion_Enum_SSL_3_0 = 3,
};

@interface Okhttp3TlsVersion : JavaLangEnum < NSCopying > {
 @public
  NSString *javaName_;
}

#pragma mark Public

+ (Okhttp3TlsVersion *)forJavaNameWithNSString:(NSString *)javaName;

- (NSString *)javaName;

+ (Okhttp3TlsVersion *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(Okhttp3TlsVersion)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT Okhttp3TlsVersion *Okhttp3TlsVersion_values_[];

inline Okhttp3TlsVersion *Okhttp3TlsVersion_get_TLS_1_2();
J2OBJC_ENUM_CONSTANT(Okhttp3TlsVersion, TLS_1_2)

inline Okhttp3TlsVersion *Okhttp3TlsVersion_get_TLS_1_1();
J2OBJC_ENUM_CONSTANT(Okhttp3TlsVersion, TLS_1_1)

inline Okhttp3TlsVersion *Okhttp3TlsVersion_get_TLS_1_0();
J2OBJC_ENUM_CONSTANT(Okhttp3TlsVersion, TLS_1_0)

inline Okhttp3TlsVersion *Okhttp3TlsVersion_get_SSL_3_0();
J2OBJC_ENUM_CONSTANT(Okhttp3TlsVersion, SSL_3_0)

J2OBJC_FIELD_SETTER(Okhttp3TlsVersion, javaName_, NSString *)

FOUNDATION_EXPORT Okhttp3TlsVersion *Okhttp3TlsVersion_forJavaNameWithNSString_(NSString *javaName);

FOUNDATION_EXPORT IOSObjectArray *Okhttp3TlsVersion_values();

FOUNDATION_EXPORT Okhttp3TlsVersion *Okhttp3TlsVersion_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT Okhttp3TlsVersion *Okhttp3TlsVersion_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3TlsVersion)

#endif

#pragma pop_macro("INCLUDE_ALL_Okhttp3TlsVersion")
