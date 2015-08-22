//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSOutputStream, NSString, PBArray, PBGeneratedMessage;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
};

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPFieldData {
    char *_field1;
    char *_field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    union {
        int _field1;
        long long _field2;
        float _field3;
        double _field4;
        char _field5;
        id _field6;
        void *_field7;
    } _field6;
    unsigned int _field7;
    unsigned int _field8;
    char *_field9;
    char *_field10;
    char *_field11;
};

struct CGPRepeatedField {
    struct CGPRepeatedFieldData *data;
};

struct CGPRepeatedFieldData;

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct ComGoogleProtobufByteString {
    Class _field1;
    int _field2;
    char _field3[0];
};

struct ComGoogleProtobufDescriptors_Descriptor {
    Class _field1;
    Class _field2;
    Class _field3;
    unsigned int _field4;
    unsigned long _field5;
    id _field6;
    id _field7;
};

struct ComGoogleProtobufDescriptors_EnumDescriptor {
    Class _field1;
    int _field2;
    id _field3;
};

struct ComGoogleProtobufDescriptors_EnumValueDescriptor {
    Class _field1;
    id _field2;
    int _field3;
};

struct ComGoogleProtobufDescriptors_FieldDescriptor {
    Class _field1;
    struct CGPFieldData *_field2;
    unsigned int _field3;
    unsigned int _field4;
    id _field5;
    id _field6;
};

struct ComGoogleProtobufExtension {
    Class _field1;
    id _field2;
};

struct ComGoogleProtobufExtensionRegistry {
    Class _field1;
};

struct ComGoogleProtobufExtensionRegistryLite {
    Class _field1;
};

struct DB;

struct DateFormat;

struct Format;

struct J2ObjCEnclosingMethodInfo {
    char *_field1;
    char *_field2;
};

struct J2ObjcClassInfo {
    unsigned int _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    unsigned short _field5;
    unsigned short _field6;
    struct J2ObjcMethodInfo *_field7;
    unsigned short _field8;
    struct J2ObjcFieldInfo *_field9;
    unsigned short _field10;
    char **_field11;
    unsigned short _field12;
    char **_field13;
    struct J2ObjCEnclosingMethodInfo *_field14;
    char *_field15;
};

struct J2ObjcFieldInfo {
    char *_field1;
    char *_field2;
    unsigned short _field3;
    char *_field4;
    void *_field5;
    char *_field6;
    CDUnion_a5829cf6 _field7;
};

struct J2ObjcMethodInfo {
    char *_field1;
    char *_field2;
    char *_field3;
    unsigned short _field4;
    char *_field5;
    char *_field6;
};

struct JavaWorkQueueWrapper {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    id _field3;
    struct RefPtr<WebCore::WorkQueueCallback> _field4;
};

struct JreStringBuilder {
    unsigned short *buffer_;
    int bufferSize_;
    int count_;
};

struct Locale {
    CDUnknownFunctionPointerType *_field1;
    char _field2[12];
    char _field3[6];
    char _field4[4];
    int _field5;
    char *_field6;
    char _field7[157];
    char *_field8;
    char _field9;
};

struct MessageFormat {
    CDUnknownFunctionPointerType *_field1;
    char _field2[157];
    char _field3[157];
    struct Locale _field4;
    struct MessagePattern _field5;
    struct Format **_field6;
    int _field7;
    int *_field8;
    int _field9;
    int _field10;
    char _field11;
    struct NumberFormat *_field12;
    struct DateFormat *_field13;
    struct UHashtable *_field14;
    struct UHashtable *_field15;
    struct PluralSelectorProvider _field16;
    struct PluralSelectorProvider _field17;
};

struct MessagePattern {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    struct UnicodeString _field3;
    struct MessagePatternPartsList *_field4;
    struct Part *_field5;
    int _field6;
    struct MessagePatternDoubleList *_field7;
    double *_field8;
    int _field9;
    char _field10;
    char _field11;
    char _field12;
};

struct MessagePatternDoubleList;

struct MessagePatternPartsList;

struct NumberFormat;

struct OwnPtr<WebCore::ScriptExecutionContext::Task> {
    struct Task *ptr_;
};

struct PBExtensionDescription {
    char *_field1;
    int _field2;
    char *_field3;
    int _field4;
    CDUnion_227e00bb _field5;
    char *_field6;
    unsigned int _field7;
    char *_field8;
};

struct PBInputBufferState {
    char *bytes;
    unsigned int bufferSize;
    unsigned int bufferPos;
    unsigned int currentLimit;
};

struct PBMessageEnumDescription {
    char *_field1;
};

struct PBMessageEnumValueDescription {
    char *_field1;
    int _field2;
};

struct PBMessageExtensionRangeDescription {
    unsigned int _field1;
    unsigned int _field2;
};

struct PBMessageFieldDescription {
    char *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
    unsigned int _field6;
    char *_field7;
    CDUnion_227e00bb _field8;
    union {
        char *_field1;
        CDUnknownFunctionPointerType _field2;
    } _field9;
};

struct PBOutputBufferState {
    char *bytes;
    unsigned int size;
    unsigned int position;
    NSOutputStream *output;
};

struct Part;

struct PassOwnPtr<WebCore::ScriptExecutionContext::Task> {
    struct Task *_field1;
};

struct PluralRules;

struct PluralSelectorProvider {
    CDUnknownFunctionPointerType *_field1;
    struct MessageFormat *_field2;
    struct PluralRules *_field3;
    int _field4;
};

struct RefPtr<WebCore::WorkQueueCallback> {
    struct WorkQueueCallback *_field1;
};

struct Task;

struct UHashtable;

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct UnicodeString {
    CDUnknownFunctionPointerType *_field1;
    union StackBufferOrFields _field2;
};

struct WorkQueueCallback;

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct in_addr {
    unsigned int _field1;
};

struct leveldbImpl {
    struct DB *_field1;
};

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};

struct map<ComGoogleProtobufDescriptors_FieldDescriptor *, CGPExtensionValue, CGPExtensionMapComparator, std::__1::allocator<std::__1::pair<ComGoogleProtobufDescriptors_FieldDescriptor *const, CGPExtensionValue>>> {
    struct __tree<std::__1::__value_type<ComGoogleProtobufDescriptors_FieldDescriptor *, CGPExtensionValue>, std::__1::__map_value_compare<ComGoogleProtobufDescriptors_FieldDescriptor *, std::__1::__value_type<ComGoogleProtobufDescriptors_FieldDescriptor *, CGPExtensionValue>, CGPExtensionMapComparator, true>, std::__1::allocator<std::__1::__value_type<ComGoogleProtobufDescriptors_FieldDescriptor *, CGPExtensionValue>>> {
        struct __tree_node<std::__1::__value_type<ComGoogleProtobufDescriptors_FieldDescriptor *, CGPExtensionValue>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<ComGoogleProtobufDescriptors_FieldDescriptor *, CGPExtensionValue>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<ComGoogleProtobufDescriptors_FieldDescriptor *, std::__1::__value_type<ComGoogleProtobufDescriptors_FieldDescriptor *, CGPExtensionValue>, CGPExtensionMapComparator, true>> {
            unsigned long __first_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>, ComGoogleProtobufDescriptors_FieldDescriptor *, std::__1::less<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>, ComGoogleProtobufDescriptors_FieldDescriptor *>>> {
    struct __tree<std::__1::__value_type<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>, ComGoogleProtobufDescriptors_FieldDescriptor *>, std::__1::__map_value_compare<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>, std::__1::__value_type<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>, ComGoogleProtobufDescriptors_FieldDescriptor *>, std::__1::less<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>, ComGoogleProtobufDescriptors_FieldDescriptor *>>> {
        struct __tree_node<std::__1::__value_type<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>, ComGoogleProtobufDescriptors_FieldDescriptor *>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>, ComGoogleProtobufDescriptors_FieldDescriptor *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>, std::__1::__value_type<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>, ComGoogleProtobufDescriptors_FieldDescriptor *>, std::__1::less<std::__1::pair<const ComGoogleProtobufDescriptors_Descriptor *, int>>, true>> {
            unsigned long __first_;
        } __pair3_;
    } __tree_;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    unsigned short _field2;
} CDStruct_6a59ab51;

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    unsigned int respondToPrepareForReuse:1;
    unsigned int respondToUpdateWithVisibilityRatio:1;
} CDStruct_abd22bad;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double _field1;
    int _field2;
} CDStruct_cdff19b3;

typedef struct {
    float pageIndicatorBottomOffset;
    float parallaxScale;
    float paginationAreaHeight;
    float textMargin;
    float nextPageButtonRightMargin;
    float nextPageButtonBottomMargin;
    float nextPageButtonFadeMultiplier;
} CDStruct_6c258dd9;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    int year;
    char month;
    char day;
    char hour;
    char minute;
    double second;
} CDStruct_b0fa4487;

typedef struct {
    float _field1;
    struct CGSize _field2;
    float _field3;
    float _field4;
    struct CGSize _field5;
    float _field6;
} CDStruct_03236302;

typedef struct {
    struct CGPoint _field1;
    struct CGPoint _field2;
} CDStruct_6fa32076;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
} CDStruct_98a477ba;

// Template types
typedef struct PassOwnPtr<WebCore::ScriptExecutionContext::Task> {
    struct Task *_field1;
} PassOwnPtr_a847e08f;

#pragma mark Named Unions

union StackBufferOrFields {
    struct {
        short _field1;
        unsigned short _field2[13];
    } _field1;
    struct {
        short _field1;
        unsigned short *_field2;
        int _field3;
        int _field4;
    } _field2;
};

#pragma mark Typedef'd Unions

typedef union {
    void *_field1;
    char _field2;
    unsigned short _field3;
    short _field4;
    int _field5;
    long long _field6;
    float _field7;
    double _field8;
    char _field9;
} CDUnion_a5829cf6;

typedef union {
    char valueBool;
    unsigned int valueFixed32;
    int valueSFixed32;
    float valueFloat;
    unsigned long long valueFixed64;
    long long valueSFixed64;
    double valueDouble;
    int valueInt32;
    long long valueInt64;
    int valueSInt32;
    long long valueSInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    NSData *valueData;
    NSString *valueString;
    PBGeneratedMessage *valueMessage;
    PBGeneratedMessage *valueGroup;
    int valueEnum;
    PBArray *valueArray;
    id valueObject;
} CDUnion_227e00bb;
