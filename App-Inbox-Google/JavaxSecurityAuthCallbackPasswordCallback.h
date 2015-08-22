//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaxSecurityAuthCallbackCallback.h"

@class IOSCharArray, NSString;

@interface JavaxSecurityAuthCallbackPasswordCallback : NSObject <JavaxSecurityAuthCallbackCallback, JavaIoSerializable>
{
    BOOL echoOn_;
    NSString *prompt_;
    IOSCharArray *inputPassword_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)clearPassword;
- (id)getPassword;
- (void)setPasswordWithCharArray:(id)arg1;
- (BOOL)isEchoOn;
- (id)getPrompt;
- (id)initWithNSString:(id)arg1 withBoolean:(BOOL)arg2;
- (void)setPromptWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
