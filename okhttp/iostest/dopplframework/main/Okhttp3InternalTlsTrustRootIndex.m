//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "Okhttp3InternalTlsTrustRootIndex.h"
#include "java/lang/Exception.h"
#include "java/security/PublicKey.h"
#include "java/security/cert/X509Certificate.h"
#include "java/util/ArrayList.h"
#include "java/util/LinkedHashMap.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "javax/net/ssl/X509TrustManager.h"
#include "javax/security/auth/x500/X500Principal.h"

@interface Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex () {
 @public
  id<JavaUtilMap> subjectToCaCerts_;
}

@end

J2OBJC_FIELD_SETTER(Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex, subjectToCaCerts_, id<JavaUtilMap>)

@implementation Okhttp3InternalTlsTrustRootIndex

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  Okhttp3InternalTlsTrustRootIndex_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (JavaSecurityCertX509Certificate *)findByIssuerAndSignatureWithJavaSecurityCertX509Certificate:(JavaSecurityCertX509Certificate *)cert {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
  return 0;
}

+ (Okhttp3InternalTlsTrustRootIndex *)getWithJavaxNetSslX509TrustManager:(id<JavaxNetSslX509TrustManager>)trustManager {
  return Okhttp3InternalTlsTrustRootIndex_getWithJavaxNetSslX509TrustManager_(trustManager);
}

+ (Okhttp3InternalTlsTrustRootIndex *)getWithJavaSecurityCertX509CertificateArray:(IOSObjectArray *)caCerts {
  return Okhttp3InternalTlsTrustRootIndex_getWithJavaSecurityCertX509CertificateArray_(caCerts);
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LJavaSecurityCertX509Certificate;", 0x401, 0, 1, -1, -1, -1, -1 },
    { NULL, "LOkhttp3InternalTlsTrustRootIndex;", 0x9, 2, 3, -1, -1, -1, -1 },
    { NULL, "LOkhttp3InternalTlsTrustRootIndex;", 0x89, 2, 4, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(findByIssuerAndSignatureWithJavaSecurityCertX509Certificate:);
  methods[2].selector = @selector(getWithJavaxNetSslX509TrustManager:);
  methods[3].selector = @selector(getWithJavaSecurityCertX509CertificateArray:);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "findByIssuerAndSignature", "LJavaSecurityCertX509Certificate;", "get", "LJavaxNetSslX509TrustManager;", "[LJavaSecurityCertX509Certificate;", "LOkhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex;" };
  static const J2ObjcClassInfo _Okhttp3InternalTlsTrustRootIndex = { "TrustRootIndex", "okhttp3.internal.tls", ptrTable, methods, NULL, 7, 0x401, 4, 0, -1, 5, -1, -1, -1 };
  return &_Okhttp3InternalTlsTrustRootIndex;
}

@end

void Okhttp3InternalTlsTrustRootIndex_init(Okhttp3InternalTlsTrustRootIndex *self) {
  NSObject_init(self);
}

Okhttp3InternalTlsTrustRootIndex *Okhttp3InternalTlsTrustRootIndex_getWithJavaxNetSslX509TrustManager_(id<JavaxNetSslX509TrustManager> trustManager) {
  Okhttp3InternalTlsTrustRootIndex_initialize();
  return Okhttp3InternalTlsTrustRootIndex_getWithJavaSecurityCertX509CertificateArray_([((id<JavaxNetSslX509TrustManager>) nil_chk(trustManager)) getAcceptedIssuers]);
}

Okhttp3InternalTlsTrustRootIndex *Okhttp3InternalTlsTrustRootIndex_getWithJavaSecurityCertX509CertificateArray_(IOSObjectArray *caCerts) {
  Okhttp3InternalTlsTrustRootIndex_initialize();
  return create_Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex_initWithJavaSecurityCertX509CertificateArray_(caCerts);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(Okhttp3InternalTlsTrustRootIndex)

@implementation Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex

- (instancetype)initWithJavaSecurityCertX509CertificateArray:(IOSObjectArray *)caCerts {
  Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex_initWithJavaSecurityCertX509CertificateArray_(self, caCerts);
  return self;
}

- (JavaSecurityCertX509Certificate *)findByIssuerAndSignatureWithJavaSecurityCertX509Certificate:(JavaSecurityCertX509Certificate *)cert {
  JavaxSecurityAuthX500X500Principal *issuer = [((JavaSecurityCertX509Certificate *) nil_chk(cert)) getIssuerX500Principal];
  id<JavaUtilList> subjectCaCerts = [((id<JavaUtilMap>) nil_chk(subjectToCaCerts_)) getWithId:issuer];
  if (subjectCaCerts == nil) return nil;
  for (JavaSecurityCertX509Certificate * __strong caCert in subjectCaCerts) {
    id<JavaSecurityPublicKey> publicKey = [((JavaSecurityCertX509Certificate *) nil_chk(caCert)) getPublicKey];
    @try {
      [cert verifyWithJavaSecurityPublicKey:publicKey];
      return caCert;
    }
    @catch (JavaLangException *ignored) {
    }
  }
  return nil;
}

- (void)dealloc {
  RELEASE_(subjectToCaCerts_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x81, -1, 0, -1, -1, -1, -1 },
    { NULL, "LJavaSecurityCertX509Certificate;", 0x1, 1, 2, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithJavaSecurityCertX509CertificateArray:);
  methods[1].selector = @selector(findByIssuerAndSignatureWithJavaSecurityCertX509Certificate:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "subjectToCaCerts_", "LJavaUtilMap;", .constantValue.asLong = 0, 0x12, -1, -1, 3, -1 },
  };
  static const void *ptrTable[] = { "[LJavaSecurityCertX509Certificate;", "findByIssuerAndSignature", "LJavaSecurityCertX509Certificate;", "Ljava/util/Map<Ljavax/security/auth/x500/X500Principal;Ljava/util/List<Ljava/security/cert/X509Certificate;>;>;", "LOkhttp3InternalTlsTrustRootIndex;" };
  static const J2ObjcClassInfo _Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex = { "BasicTrustRootIndex", "okhttp3.internal.tls", ptrTable, methods, fields, 7, 0x18, 2, 1, 4, -1, -1, -1, -1 };
  return &_Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex;
}

@end

void Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex_initWithJavaSecurityCertX509CertificateArray_(Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex *self, IOSObjectArray *caCerts) {
  Okhttp3InternalTlsTrustRootIndex_init(self);
  JreStrongAssignAndConsume(&self->subjectToCaCerts_, new_JavaUtilLinkedHashMap_init());
  {
    IOSObjectArray *a__ = caCerts;
    JavaSecurityCertX509Certificate * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
    JavaSecurityCertX509Certificate * const *e__ = b__ + a__->size_;
    while (b__ < e__) {
      JavaSecurityCertX509Certificate *caCert = *b__++;
      JavaxSecurityAuthX500X500Principal *subject = [((JavaSecurityCertX509Certificate *) nil_chk(caCert)) getSubjectX500Principal];
      id<JavaUtilList> subjectCaCerts = [self->subjectToCaCerts_ getWithId:subject];
      if (subjectCaCerts == nil) {
        subjectCaCerts = create_JavaUtilArrayList_initWithInt_(1);
        [self->subjectToCaCerts_ putWithId:subject withId:subjectCaCerts];
      }
      [subjectCaCerts addWithId:caCert];
    }
  }
}

Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex *new_Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex_initWithJavaSecurityCertX509CertificateArray_(IOSObjectArray *caCerts) {
  J2OBJC_NEW_IMPL(Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex, initWithJavaSecurityCertX509CertificateArray_, caCerts)
}

Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex *create_Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex_initWithJavaSecurityCertX509CertificateArray_(IOSObjectArray *caCerts) {
  J2OBJC_CREATE_IMPL(Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex, initWithJavaSecurityCertX509CertificateArray_, caCerts)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(Okhttp3InternalTlsTrustRootIndex_BasicTrustRootIndex)
