//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTPlidDecrypter.h"

@class NSString;

@interface JBTIConversationPlidDecrypterImpl : NSObject <JBTPlidDecrypter>
{
    id <JCGCuChannel> channel_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_decryptPlidWithNSString_withJBTCallback_withJBTSpan__params;
+ (id)__annotations_initWithJCGCuChannel_;
+ (id)__annotations;
+ (id)wrapResponseWithComGoogleAppsBigtopServicesGmailBigTopPlidDecryptResponse:(id)arg1;
- (void)dealloc;
- (void)decryptPlidWithNSString:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)initWithJCGCuChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
