//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Okhttp3InternalTlsTrustRootIndex")
#ifdef RESTRICT_Okhttp3InternalTlsTrustRootIndex
#define INCLUDE_ALL_Okhttp3InternalTlsTrustRootIndex 0
#else
#define INCLUDE_ALL_Okhttp3InternalTlsTrustRootIndex 1
#endif
#undef RESTRICT_Okhttp3InternalTlsTrustRootIndex
#ifdef INCLUDE_Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex
#define INCLUDE_Okhttp3InternalTlsTrustRootIndex 1
#endif

#if !defined (Okhttp3InternalTlsTrustRootIndex_) && (INCLUDE_ALL_Okhttp3InternalTlsTrustRootIndex || defined(INCLUDE_Okhttp3InternalTlsTrustRootIndex))
#define Okhttp3InternalTlsTrustRootIndex_

@class IOSObjectArray;
@class JavaSecurityCertX509Certificate;
@protocol JavaxNetSslX509TrustManager;

@interface Okhttp3InternalTlsTrustRootIndex : NSObject

#pragma mark Public

- (instancetype)init;

- (JavaSecurityCertX509Certificate *)findByIssuerAndSignatureWithJavaSecurityCertX509Certificate:(JavaSecurityCertX509Certificate *)cert;

+ (Okhttp3InternalTlsTrustRootIndex *)getWithJavaSecurityCertX509CertificateArray:(IOSObjectArray *)caCerts;

+ (Okhttp3InternalTlsTrustRootIndex *)getWithJavaxNetSslX509TrustManager:(id<JavaxNetSslX509TrustManager>)trustManager;

@end

J2OBJC_EMPTY_STATIC_INIT(Okhttp3InternalTlsTrustRootIndex)

FOUNDATION_EXPORT void Okhttp3InternalTlsTrustRootIndex_init(Okhttp3InternalTlsTrustRootIndex *self);

FOUNDATION_EXPORT Okhttp3InternalTlsTrustRootIndex *Okhttp3InternalTlsTrustRootIndex_getWithJavaxNetSslX509TrustManager_(id<JavaxNetSslX509TrustManager> trustManager);

FOUNDATION_EXPORT Okhttp3InternalTlsTrustRootIndex *Okhttp3InternalTlsTrustRootIndex_getWithJavaSecurityCertX509CertificateArray_(IOSObjectArray *caCerts);

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3InternalTlsTrustRootIndex)

#endif

#if !defined (Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex_) && (INCLUDE_ALL_Okhttp3InternalTlsTrustRootIndex || defined(INCLUDE_Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex))
#define Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex_

@class IOSObjectArray;
@class JavaSecurityCertX509Certificate;

@interface Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex : Okhttp3InternalTlsTrustRootIndex

#pragma mark Public

- (instancetype)initWithJavaSecurityCertX509CertificateArray:(IOSObjectArray *)caCerts;

- (JavaSecurityCertX509Certificate *)findByIssuerAndSignatureWithJavaSecurityCertX509Certificate:(JavaSecurityCertX509Certificate *)cert;

@end

J2OBJC_EMPTY_STATIC_INIT(Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex)

FOUNDATION_EXPORT void Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex_initWithJavaSecurityCertX509CertificateArray_(Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex *self, IOSObjectArray *caCerts);

FOUNDATION_EXPORT Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex *new_Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex_initWithJavaSecurityCertX509CertificateArray_(IOSObjectArray *caCerts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex *create_Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex_initWithJavaSecurityCertX509CertificateArray_(IOSObjectArray *caCerts);

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex)

#endif

#pragma pop_macro("INCLUDE_ALL_Okhttp3InternalTlsTrustRootIndex")
