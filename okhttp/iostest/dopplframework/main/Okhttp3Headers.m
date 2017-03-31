//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "Okhttp3Headers.h"
#include "Okhttp3InternalHttpHttpDate.h"
#include "Okhttp3InternalUtil.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Integer.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/StringBuilder.h"
#include "java/util/ArrayList.h"
#include "java/util/Arrays.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"
#include "java/util/Date.h"
#include "java/util/List.h"
#include "java/util/Locale.h"
#include "java/util/Map.h"
#include "java/util/Set.h"
#include "java/util/TreeMap.h"
#include "java/util/TreeSet.h"

@interface Okhttp3Headers () {
 @public
  IOSObjectArray *namesAndValues_;
}

- (instancetype)initWithOkhttp3Headers_Builder:(Okhttp3Headers_Builder *)builder;

- (instancetype)initWithNSStringArray:(IOSObjectArray *)namesAndValues;

+ (NSString *)getWithNSStringArray:(IOSObjectArray *)namesAndValues
                      withNSString:(NSString *)name;

@end

J2OBJC_FIELD_SETTER(Okhttp3Headers, namesAndValues_, IOSObjectArray *)

__attribute__((unused)) static void Okhttp3Headers_initWithOkhttp3Headers_Builder_(Okhttp3Headers *self, Okhttp3Headers_Builder *builder);

__attribute__((unused)) static Okhttp3Headers *new_Okhttp3Headers_initWithOkhttp3Headers_Builder_(Okhttp3Headers_Builder *builder) NS_RETURNS_RETAINED;

__attribute__((unused)) static Okhttp3Headers *create_Okhttp3Headers_initWithOkhttp3Headers_Builder_(Okhttp3Headers_Builder *builder);

__attribute__((unused)) static void Okhttp3Headers_initWithNSStringArray_(Okhttp3Headers *self, IOSObjectArray *namesAndValues);

__attribute__((unused)) static Okhttp3Headers *new_Okhttp3Headers_initWithNSStringArray_(IOSObjectArray *namesAndValues) NS_RETURNS_RETAINED;

__attribute__((unused)) static Okhttp3Headers *create_Okhttp3Headers_initWithNSStringArray_(IOSObjectArray *namesAndValues);

__attribute__((unused)) static NSString *Okhttp3Headers_getWithNSStringArray_withNSString_(IOSObjectArray *namesAndValues, NSString *name);

@interface Okhttp3Headers_Builder () {
 @public
  id<JavaUtilList> namesAndValues_;
}

- (void)checkNameAndValueWithNSString:(NSString *)name
                         withNSString:(NSString *)value;

@end

J2OBJC_FIELD_SETTER(Okhttp3Headers_Builder, namesAndValues_, id<JavaUtilList>)

__attribute__((unused)) static void Okhttp3Headers_Builder_checkNameAndValueWithNSString_withNSString_(Okhttp3Headers_Builder *self, NSString *name, NSString *value);

@implementation Okhttp3Headers

- (instancetype)initWithOkhttp3Headers_Builder:(Okhttp3Headers_Builder *)builder {
  Okhttp3Headers_initWithOkhttp3Headers_Builder_(self, builder);
  return self;
}

- (instancetype)initWithNSStringArray:(IOSObjectArray *)namesAndValues {
  Okhttp3Headers_initWithNSStringArray_(self, namesAndValues);
  return self;
}

- (NSString *)getWithNSString:(NSString *)name {
  return Okhttp3Headers_getWithNSStringArray_withNSString_(namesAndValues_, name);
}

- (JavaUtilDate *)getDateWithNSString:(NSString *)name {
  NSString *value = [self getWithNSString:name];
  return value != nil ? Okhttp3InternalHttpHttpDate_parseWithNSString_(value) : nil;
}

- (jint)size {
  return ((IOSObjectArray *) nil_chk(namesAndValues_))->size_ / 2;
}

- (NSString *)nameWithInt:(jint)index {
  return IOSObjectArray_Get(nil_chk(namesAndValues_), index * 2);
}

- (NSString *)valueWithInt:(jint)index {
  return IOSObjectArray_Get(nil_chk(namesAndValues_), index * 2 + 1);
}

- (id<JavaUtilSet>)names {
  JavaUtilTreeSet *result = create_JavaUtilTreeSet_initWithJavaUtilComparator_(JreLoadStatic(NSString, CASE_INSENSITIVE_ORDER));
  for (jint i = 0, size = [self size]; i < size; i++) {
    [result addWithId:[self nameWithInt:i]];
  }
  return JavaUtilCollections_unmodifiableSetWithJavaUtilSet_(result);
}

- (id<JavaUtilList>)valuesWithNSString:(NSString *)name {
  id<JavaUtilList> result = nil;
  for (jint i = 0, size = [self size]; i < size; i++) {
    if ([((NSString *) nil_chk(name)) java_equalsIgnoreCase:[self nameWithInt:i]]) {
      if (result == nil) result = create_JavaUtilArrayList_initWithInt_(2);
      [result addWithId:[self valueWithInt:i]];
    }
  }
  return result != nil ? JavaUtilCollections_unmodifiableListWithJavaUtilList_(result) : JavaUtilCollections_emptyList();
}

- (Okhttp3Headers_Builder *)newBuilder {
  Okhttp3Headers_Builder *result = create_Okhttp3Headers_Builder_init();
  JavaUtilCollections_addAllWithJavaUtilCollection_withNSObjectArray_(result->namesAndValues_, namesAndValues_);
  return result;
}

- (jboolean)isEqual:(id)other {
  return [other isKindOfClass:[Okhttp3Headers class]] && JavaUtilArrays_equalsWithNSObjectArray_withNSObjectArray_(((Okhttp3Headers *) nil_chk(((Okhttp3Headers *) cast_chk(other, [Okhttp3Headers class]))))->namesAndValues_, namesAndValues_);
}

- (NSUInteger)hash {
  return JavaUtilArrays_hashCodeWithNSObjectArray_(namesAndValues_);
}

- (NSString *)description {
  JavaLangStringBuilder *result = create_JavaLangStringBuilder_init();
  for (jint i = 0, size = [self size]; i < size; i++) {
    [((JavaLangStringBuilder *) nil_chk([((JavaLangStringBuilder *) nil_chk([((JavaLangStringBuilder *) nil_chk([result appendWithNSString:[self nameWithInt:i]])) appendWithNSString:@": "])) appendWithNSString:[self valueWithInt:i]])) appendWithNSString:@"\n"];
  }
  return [result description];
}

- (id<JavaUtilMap>)toMultimap {
  id<JavaUtilMap> result = create_JavaUtilTreeMap_initWithJavaUtilComparator_(JreLoadStatic(NSString, CASE_INSENSITIVE_ORDER));
  for (jint i = 0, size = [self size]; i < size; i++) {
    NSString *name = [((NSString *) nil_chk([self nameWithInt:i])) java_lowercaseStringWithJRELocale:JreLoadStatic(JavaUtilLocale, US)];
    id<JavaUtilList> values = [result getWithId:name];
    if (values == nil) {
      values = create_JavaUtilArrayList_initWithInt_(2);
      [result putWithId:name withId:values];
    }
    [values addWithId:[self valueWithInt:i]];
  }
  return result;
}

+ (NSString *)getWithNSStringArray:(IOSObjectArray *)namesAndValues
                      withNSString:(NSString *)name {
  return Okhttp3Headers_getWithNSStringArray_withNSString_(namesAndValues, name);
}

+ (Okhttp3Headers *)ofWithNSStringArray:(IOSObjectArray *)namesAndValues {
  return Okhttp3Headers_ofWithNSStringArray_(namesAndValues);
}

+ (Okhttp3Headers *)ofWithJavaUtilMap:(id<JavaUtilMap>)headers {
  return Okhttp3Headers_ofWithJavaUtilMap_(headers);
}

- (void)dealloc {
  RELEASE_(namesAndValues_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x2, -1, 0, -1, -1, -1, -1 },
    { NULL, NULL, 0x2, -1, 1, -1, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 2, 3, -1, -1, -1, -1 },
    { NULL, "LJavaUtilDate;", 0x1, 4, 3, -1, -1, -1, -1 },
    { NULL, "I", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 5, 6, -1, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 7, 6, -1, -1, -1, -1 },
    { NULL, "LJavaUtilSet;", 0x1, -1, -1, -1, 8, -1, -1 },
    { NULL, "LJavaUtilList;", 0x1, 9, 3, -1, 10, -1, -1 },
    { NULL, "LOkhttp3Headers_Builder;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, 11, 12, -1, -1, -1, -1 },
    { NULL, "I", 0x1, 13, -1, -1, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 14, -1, -1, -1, -1, -1 },
    { NULL, "LJavaUtilMap;", 0x1, -1, -1, -1, 15, -1, -1 },
    { NULL, "LNSString;", 0xa, 2, 16, -1, -1, -1, -1 },
    { NULL, "LOkhttp3Headers;", 0x89, 17, 1, -1, -1, -1, -1 },
    { NULL, "LOkhttp3Headers;", 0x9, 17, 18, -1, 19, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithOkhttp3Headers_Builder:);
  methods[1].selector = @selector(initWithNSStringArray:);
  methods[2].selector = @selector(getWithNSString:);
  methods[3].selector = @selector(getDateWithNSString:);
  methods[4].selector = @selector(size);
  methods[5].selector = @selector(nameWithInt:);
  methods[6].selector = @selector(valueWithInt:);
  methods[7].selector = @selector(names);
  methods[8].selector = @selector(valuesWithNSString:);
  methods[9].selector = @selector(newBuilder);
  methods[10].selector = @selector(isEqual:);
  methods[11].selector = @selector(hash);
  methods[12].selector = @selector(description);
  methods[13].selector = @selector(toMultimap);
  methods[14].selector = @selector(getWithNSStringArray:withNSString:);
  methods[15].selector = @selector(ofWithNSStringArray:);
  methods[16].selector = @selector(ofWithJavaUtilMap:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "namesAndValues_", "[LNSString;", .constantValue.asLong = 0, 0x12, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "LOkhttp3Headers_Builder;", "[LNSString;", "get", "LNSString;", "getDate", "name", "I", "value", "()Ljava/util/Set<Ljava/lang/String;>;", "values", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", "equals", "LNSObject;", "hashCode", "toString", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", "[LNSString;LNSString;", "of", "LJavaUtilMap;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)Lokhttp3/Headers;" };
  static const J2ObjcClassInfo _Okhttp3Headers = { "Headers", "okhttp3", ptrTable, methods, fields, 7, 0x11, 17, 1, -1, 0, -1, -1, -1 };
  return &_Okhttp3Headers;
}

@end

void Okhttp3Headers_initWithOkhttp3Headers_Builder_(Okhttp3Headers *self, Okhttp3Headers_Builder *builder) {
  NSObject_init(self);
  JreStrongAssign(&self->namesAndValues_, [((id<JavaUtilList>) nil_chk(((Okhttp3Headers_Builder *) nil_chk(builder))->namesAndValues_)) toArrayWithNSObjectArray:[IOSObjectArray arrayWithLength:[builder->namesAndValues_ size] type:NSString_class_()]]);
}

Okhttp3Headers *new_Okhttp3Headers_initWithOkhttp3Headers_Builder_(Okhttp3Headers_Builder *builder) {
  J2OBJC_NEW_IMPL(Okhttp3Headers, initWithOkhttp3Headers_Builder_, builder)
}

Okhttp3Headers *create_Okhttp3Headers_initWithOkhttp3Headers_Builder_(Okhttp3Headers_Builder *builder) {
  J2OBJC_CREATE_IMPL(Okhttp3Headers, initWithOkhttp3Headers_Builder_, builder)
}

void Okhttp3Headers_initWithNSStringArray_(Okhttp3Headers *self, IOSObjectArray *namesAndValues) {
  NSObject_init(self);
  JreStrongAssign(&self->namesAndValues_, namesAndValues);
}

Okhttp3Headers *new_Okhttp3Headers_initWithNSStringArray_(IOSObjectArray *namesAndValues) {
  J2OBJC_NEW_IMPL(Okhttp3Headers, initWithNSStringArray_, namesAndValues)
}

Okhttp3Headers *create_Okhttp3Headers_initWithNSStringArray_(IOSObjectArray *namesAndValues) {
  J2OBJC_CREATE_IMPL(Okhttp3Headers, initWithNSStringArray_, namesAndValues)
}

NSString *Okhttp3Headers_getWithNSStringArray_withNSString_(IOSObjectArray *namesAndValues, NSString *name) {
  Okhttp3Headers_initialize();
  for (jint i = ((IOSObjectArray *) nil_chk(namesAndValues))->size_ - 2; i >= 0; i -= 2) {
    if ([((NSString *) nil_chk(name)) java_equalsIgnoreCase:IOSObjectArray_Get(namesAndValues, i)]) {
      return IOSObjectArray_Get(namesAndValues, i + 1);
    }
  }
  return nil;
}

Okhttp3Headers *Okhttp3Headers_ofWithNSStringArray_(IOSObjectArray *namesAndValues) {
  Okhttp3Headers_initialize();
  if (namesAndValues == nil) @throw create_JavaLangNullPointerException_initWithNSString_(@"namesAndValues == null");
  if (namesAndValues->size_ % 2 != 0) {
    @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"Expected alternating header names and values");
  }
  namesAndValues = [namesAndValues java_clone];
  for (jint i = 0; i < ((IOSObjectArray *) nil_chk(namesAndValues))->size_; i++) {
    if (IOSObjectArray_Get(namesAndValues, i) == nil) @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"Headers cannot be null");
    IOSObjectArray_Set(namesAndValues, i, [((NSString *) nil_chk(IOSObjectArray_Get(namesAndValues, i))) java_trim]);
  }
  for (jint i = 0; i < namesAndValues->size_; i += 2) {
    NSString *name = IOSObjectArray_Get(namesAndValues, i);
    NSString *value = IOSObjectArray_Get(namesAndValues, i + 1);
    if (((jint) [((NSString *) nil_chk(name)) length]) == 0 || [name java_indexOf:0x0000] != -1 || [((NSString *) nil_chk(value)) java_indexOf:0x0000] != -1) {
      @throw create_JavaLangIllegalArgumentException_initWithNSString_(JreStrcat("$$$$", @"Unexpected header: ", name, @": ", value));
    }
  }
  return create_Okhttp3Headers_initWithNSStringArray_(namesAndValues);
}

Okhttp3Headers *Okhttp3Headers_ofWithJavaUtilMap_(id<JavaUtilMap> headers) {
  Okhttp3Headers_initialize();
  if (headers == nil) @throw create_JavaLangNullPointerException_initWithNSString_(@"headers == null");
  IOSObjectArray *namesAndValues = [IOSObjectArray arrayWithLength:[headers size] * 2 type:NSString_class_()];
  jint i = 0;
  for (id<JavaUtilMap_Entry> __strong header in nil_chk([headers entrySet])) {
    if ([((id<JavaUtilMap_Entry>) nil_chk(header)) getKey] == nil || [header getValue] == nil) {
      @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"Headers cannot be null");
    }
    NSString *name = [((NSString *) nil_chk([header getKey])) java_trim];
    NSString *value = [((NSString *) nil_chk([header getValue])) java_trim];
    if (((jint) [((NSString *) nil_chk(name)) length]) == 0 || [name java_indexOf:0x0000] != -1 || [((NSString *) nil_chk(value)) java_indexOf:0x0000] != -1) {
      @throw create_JavaLangIllegalArgumentException_initWithNSString_(JreStrcat("$$$$", @"Unexpected header: ", name, @": ", value));
    }
    IOSObjectArray_Set(namesAndValues, i, name);
    IOSObjectArray_Set(namesAndValues, i + 1, value);
    i += 2;
  }
  return create_Okhttp3Headers_initWithNSStringArray_(namesAndValues);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(Okhttp3Headers)

@implementation Okhttp3Headers_Builder

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  Okhttp3Headers_Builder_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (Okhttp3Headers_Builder *)addLenientWithNSString:(NSString *)line {
  jint index = [((NSString *) nil_chk(line)) java_indexOfString:@":" fromIndex:1];
  if (index != -1) {
    return [self addLenientWithNSString:[line java_substring:0 endIndex:index] withNSString:[line java_substring:index + 1]];
  }
  else if ([line hasPrefix:@":"]) {
    return [self addLenientWithNSString:@"" withNSString:[line java_substring:1]];
  }
  else {
    return [self addLenientWithNSString:@"" withNSString:line];
  }
}

- (Okhttp3Headers_Builder *)addWithNSString:(NSString *)line {
  jint index = [((NSString *) nil_chk(line)) java_indexOfString:@":"];
  if (index == -1) {
    @throw create_JavaLangIllegalArgumentException_initWithNSString_(JreStrcat("$$", @"Unexpected header: ", line));
  }
  return [self addWithNSString:[((NSString *) nil_chk([line java_substring:0 endIndex:index])) java_trim] withNSString:[line java_substring:index + 1]];
}

- (Okhttp3Headers_Builder *)addWithNSString:(NSString *)name
                               withNSString:(NSString *)value {
  Okhttp3Headers_Builder_checkNameAndValueWithNSString_withNSString_(self, name, value);
  return [self addLenientWithNSString:name withNSString:value];
}

- (Okhttp3Headers_Builder *)addLenientWithNSString:(NSString *)name
                                      withNSString:(NSString *)value {
  [((id<JavaUtilList>) nil_chk(namesAndValues_)) addWithId:name];
  [namesAndValues_ addWithId:[((NSString *) nil_chk(value)) java_trim]];
  return self;
}

- (Okhttp3Headers_Builder *)removeAllWithNSString:(NSString *)name {
  for (jint i = 0; i < [((id<JavaUtilList>) nil_chk(namesAndValues_)) size]; i += 2) {
    if ([((NSString *) nil_chk(name)) java_equalsIgnoreCase:[namesAndValues_ getWithInt:i]]) {
      [namesAndValues_ removeWithInt:i];
      [namesAndValues_ removeWithInt:i];
      i -= 2;
    }
  }
  return self;
}

- (Okhttp3Headers_Builder *)setWithNSString:(NSString *)name
                               withNSString:(NSString *)value {
  Okhttp3Headers_Builder_checkNameAndValueWithNSString_withNSString_(self, name, value);
  [self removeAllWithNSString:name];
  [self addLenientWithNSString:name withNSString:value];
  return self;
}

- (void)checkNameAndValueWithNSString:(NSString *)name
                         withNSString:(NSString *)value {
  Okhttp3Headers_Builder_checkNameAndValueWithNSString_withNSString_(self, name, value);
}

- (NSString *)getWithNSString:(NSString *)name {
  for (jint i = [((id<JavaUtilList>) nil_chk(namesAndValues_)) size] - 2; i >= 0; i -= 2) {
    if ([((NSString *) nil_chk(name)) java_equalsIgnoreCase:[namesAndValues_ getWithInt:i]]) {
      return [namesAndValues_ getWithInt:i + 1];
    }
  }
  return nil;
}

- (Okhttp3Headers *)build {
  return create_Okhttp3Headers_initWithOkhttp3Headers_Builder_(self);
}

- (void)dealloc {
  RELEASE_(namesAndValues_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LOkhttp3Headers_Builder;", 0x0, 0, 1, -1, -1, -1, -1 },
    { NULL, "LOkhttp3Headers_Builder;", 0x1, 2, 1, -1, -1, -1, -1 },
    { NULL, "LOkhttp3Headers_Builder;", 0x1, 2, 3, -1, -1, -1, -1 },
    { NULL, "LOkhttp3Headers_Builder;", 0x0, 0, 3, -1, -1, -1, -1 },
    { NULL, "LOkhttp3Headers_Builder;", 0x1, 4, 1, -1, -1, -1, -1 },
    { NULL, "LOkhttp3Headers_Builder;", 0x1, 5, 3, -1, -1, -1, -1 },
    { NULL, "V", 0x2, 6, 3, -1, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 7, 1, -1, -1, -1, -1 },
    { NULL, "LOkhttp3Headers;", 0x1, -1, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(addLenientWithNSString:);
  methods[2].selector = @selector(addWithNSString:);
  methods[3].selector = @selector(addWithNSString:withNSString:);
  methods[4].selector = @selector(addLenientWithNSString:withNSString:);
  methods[5].selector = @selector(removeAllWithNSString:);
  methods[6].selector = @selector(setWithNSString:withNSString:);
  methods[7].selector = @selector(checkNameAndValueWithNSString:withNSString:);
  methods[8].selector = @selector(getWithNSString:);
  methods[9].selector = @selector(build);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "namesAndValues_", "LJavaUtilList;", .constantValue.asLong = 0, 0x12, -1, -1, 8, -1 },
  };
  static const void *ptrTable[] = { "addLenient", "LNSString;", "add", "LNSString;LNSString;", "removeAll", "set", "checkNameAndValue", "get", "Ljava/util/List<Ljava/lang/String;>;", "LOkhttp3Headers;" };
  static const J2ObjcClassInfo _Okhttp3Headers_Builder = { "Builder", "okhttp3", ptrTable, methods, fields, 7, 0x19, 10, 1, 9, -1, -1, -1, -1 };
  return &_Okhttp3Headers_Builder;
}

@end

void Okhttp3Headers_Builder_init(Okhttp3Headers_Builder *self) {
  NSObject_init(self);
  JreStrongAssignAndConsume(&self->namesAndValues_, new_JavaUtilArrayList_initWithInt_(20));
}

Okhttp3Headers_Builder *new_Okhttp3Headers_Builder_init() {
  J2OBJC_NEW_IMPL(Okhttp3Headers_Builder, init)
}

Okhttp3Headers_Builder *create_Okhttp3Headers_Builder_init() {
  J2OBJC_CREATE_IMPL(Okhttp3Headers_Builder, init)
}

void Okhttp3Headers_Builder_checkNameAndValueWithNSString_withNSString_(Okhttp3Headers_Builder *self, NSString *name, NSString *value) {
  if (name == nil) @throw create_JavaLangNullPointerException_initWithNSString_(@"name == null");
  if ([name java_isEmpty]) @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"name is empty");
  for (jint i = 0, length = ((jint) [name length]); i < length; i++) {
    jchar c = [name charAtWithInt:i];
    if (c <= 0x001f || c >= 0x007f) {
      @throw create_JavaLangIllegalArgumentException_initWithNSString_(Okhttp3InternalUtil_formatWithNSString_withNSObjectArray_(@"Unexpected char %#04x at %d in header name: %s", [IOSObjectArray arrayWithObjects:(id[]){ JavaLangInteger_valueOfWithInt_((jint) c), JavaLangInteger_valueOfWithInt_(i), name } count:3 type:NSObject_class_()]));
    }
  }
  if (value == nil) @throw create_JavaLangNullPointerException_initWithNSString_(@"value == null");
  for (jint i = 0, length = ((jint) [value length]); i < length; i++) {
    jchar c = [value charAtWithInt:i];
    if (c <= 0x001f || c >= 0x007f) {
      @throw create_JavaLangIllegalArgumentException_initWithNSString_(Okhttp3InternalUtil_formatWithNSString_withNSObjectArray_(@"Unexpected char %#04x at %d in %s value: %s", [IOSObjectArray arrayWithObjects:(id[]){ JavaLangInteger_valueOfWithInt_((jint) c), JavaLangInteger_valueOfWithInt_(i), name, value } count:4 type:NSObject_class_()]));
    }
  }
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(Okhttp3Headers_Builder)
