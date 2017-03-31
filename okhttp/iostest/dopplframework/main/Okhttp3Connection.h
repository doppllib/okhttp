//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Okhttp3Connection")
#ifdef RESTRICT_Okhttp3Connection
#define INCLUDE_ALL_Okhttp3Connection 0
#else
#define INCLUDE_ALL_Okhttp3Connection 1
#endif
#undef RESTRICT_Okhttp3Connection

#if !defined (Okhttp3Connection_) && (INCLUDE_ALL_Okhttp3Connection || defined(INCLUDE_Okhttp3Connection))
#define Okhttp3Connection_

@class JavaNetSocket;
@class Okhttp3Handshake;
@class Okhttp3Protocol;
@class Okhttp3Route;

@protocol Okhttp3Connection < JavaObject >

- (Okhttp3Route *)route;

- (JavaNetSocket *)socket;

- (Okhttp3Handshake *)handshake;

- (Okhttp3Protocol *)protocol;

@end

J2OBJC_EMPTY_STATIC_INIT(Okhttp3Connection)

J2OBJC_TYPE_LITERAL_HEADER(Okhttp3Connection)

#endif

#pragma pop_macro("INCLUDE_ALL_Okhttp3Connection")
