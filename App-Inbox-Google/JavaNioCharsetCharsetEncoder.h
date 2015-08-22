//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSByteArray, JavaNioCharsetCharset, JavaNioCharsetCharsetDecoder, JavaNioCharsetCodingErrorAction;

@interface JavaNioCharsetCharsetEncoder : NSObject
{
    JavaNioCharsetCharset *cs_;
    float averageBytesPerChar_;
    float maxBytesPerChar_;
    IOSByteArray *replacementBytes_;
    int status_;
    BOOL finished_;
    JavaNioCharsetCodingErrorAction *malformedInputAction_;
    JavaNioCharsetCodingErrorAction *unmappableCharacterAction_;
    JavaNioCharsetCharsetDecoder *decoder_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)unmappableCharacterAction;
- (id)reset;
- (id)replaceWithWithByteArray:(id)arg1;
- (id)replacement;
- (id)onUnmappableCharacterWithJavaNioCharsetCodingErrorAction:(id)arg1;
- (id)onMalformedInputWithJavaNioCharsetCodingErrorAction:(id)arg1;
- (float)maxBytesPerChar;
- (id)malformedInputAction;
- (id)flushWithJavaNioByteBuffer:(id)arg1;
- (id)encodeLoopWithJavaNioCharBuffer:(id)arg1 withJavaNioByteBuffer:(id)arg2;
- (id)encodeWithJavaNioCharBuffer:(id)arg1 withJavaNioByteBuffer:(id)arg2 withBoolean:(BOOL)arg3;
- (id)encodeWithJavaNioCharBuffer:(id)arg1;
- (id)charset;
- (BOOL)canEncodeWithJavaLangCharSequence:(id)arg1;
- (BOOL)implCanEncodeWithJavaNioCharBuffer:(id)arg1;
- (BOOL)canEncodeWithChar:(unsigned short)arg1;
- (float)averageBytesPerChar;
- (id)initWithJavaNioCharsetCharset:(id)arg1 withFloat:(float)arg2 withFloat:(float)arg3 withByteArray:(id)arg4;
- (id)initWithJavaNioCharsetCharset:(id)arg1 withFloat:(float)arg2 withFloat:(float)arg3;

@end
