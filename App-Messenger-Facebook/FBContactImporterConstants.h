//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession;

@interface FBContactImporterConstants : NSObject
{
    FBUserSession *_session;
}

+ (double)megaphoneInChatBarIntervalBetweenShowingsWithSession:(id)arg1;
+ (int)megaphoneInChatBarMaxNumberOfTimesShownWithSession:(id)arg1;
+ (BOOL)isMegaphoneEnabledInChatBarWithSession:(id)arg1;
+ (int)continuousContactUploadReferenceForName:(id)arg1;
+ (int)contactImporterFlowForName:(id)arg1;
+ (id)nameForContactImporterFlow:(int)arg1;
- (void).cxx_destruct;
- (id)initWithSession:(id)arg1;

@end

