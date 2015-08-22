//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class NSString;

@interface FBMemorialContactIntroIntentTarget : FBIntentTarget
{
    NSString *_FBID;
    NSString *_memorializedPersonFirstName;
    NSString *_memorialContactName;
    NSString *_gender;
}

+ (id)memorialContactIntroTargetWithFBID:(id)arg1 memorializedPersonFirstName:(id)arg2 memorialContactName:(id)arg3 gender:(id)arg4;
@property(readonly, copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) NSString *memorialContactName; // @synthesize memorialContactName=_memorialContactName;
@property(readonly, copy, nonatomic) NSString *memorializedPersonFirstName; // @synthesize memorializedPersonFirstName=_memorializedPersonFirstName;
@property(readonly, copy, nonatomic) NSString *FBID; // @synthesize FBID=_FBID;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fallbackURLs;

@end

