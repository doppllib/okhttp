//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Okhttp3InternalTlsDistinguishedNameParser")
#ifdef RESTRICT_Okhttp3InternalTlsDistinguishedNameParser
#define INCLUDE_ALL_Okhttp3InternalTlsDistinguishedNameParser 0
#else
#define INCLUDE_ALL_Okhttp3InternalTlsDistinguishedNameParser 1
#endif
#undef RESTRICT_Okhttp3InternalTlsDistinguishedNameParser

#if !defined (Okhttp3InternalTlsDistinguishedNameParser_) && (INCLUDE_ALL_Okhttp3InternalTlsDistinguishedNameParser || defined(INCLUDE_Okhttp3InternalTlsDistinguishedNameParser))
#define Okhttp3InternalTlsDistinguishedNameParser_

@class JavaxSecurityAuthX500X500Principal;

@interface Okhttp3InternalTlsDistinguishedNameParser : NSObject

#pragma mark Public

- (instancetype)initWithJavaxSecurityAuthX500X500Principal:(JavaxSecurityAuthX500X500Principal *)principal;

- (NSString *)findMostSpecificWithNSString:(NSString *)attributeType;

@end

J2OBJC_EMPTY_STATIC_INIT(Okhttp3InternalTlsDistinguishedNameParser)

FOUNDATION_EXPORT void Okhttp3InternalTlsDistinguishedNameParser_initWithJavaxSecurityAuthX500X500Principal_(Okhttp3InternalTlsDistinguishedNameParser *self, JavaxSecurityAuthX500X500Principal *principal);

FOUNDATION_EXPORT Okhttp3InternalTlsDistinguishedNameParser *new_Okhttp3InternalTlsDistinguishedNameParser_initWithJavaxSecurityAuthX500X500Principal_(JavaxSecurityAuthX500X500Principal *principal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT Okhttp3InternalTlsDistinguishedNameParser *create_Okhttp3InternalTlsDistinguishedNameParser_initWithJavaxSecurityAuthX500X500Principal_(JavaxSecurityAuthX500X500Principal *principal);

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3InternalTlsDistinguishedNameParser)

#endif

#pragma pop_macro("INCLUDE_ALL_Okhttp3InternalTlsDistinguishedNameParser")
