//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

@class NSURL;

@interface MNOpenInBrowserActivity : UIActivity
{
    NSURL *_url;
}

+ (int)activityCategory;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

@end

