//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGroupsLandingEditViewControllerConfig.h"

@class UIColor;

@interface THGroupsLandingEditViewControllerConfig : NSObject <FBGroupsLandingEditViewControllerConfig>
{
    UIColor *_backgroundColor;
    UIColor *_footerTextColor;
    UIColor *_footerBackgroundColor;
}

@property(retain, nonatomic) UIColor *footerBackgroundColor; // @synthesize footerBackgroundColor=_footerBackgroundColor;
@property(retain, nonatomic) UIColor *footerTextColor; // @synthesize footerTextColor=_footerTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)sectionHeaderWithTitle:(id)arg1;
- (id)pogImageForGroupID:(id)arg1;
- (id)init;

@end
