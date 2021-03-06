//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAccessibilityInvalidationEventsListener.h"

@class NSString;

@interface FBFontFoundry : NSObject <FBAccessibilityInvalidationEventsListener>
{
    NSString *_contentSizeCategory;
}

+ (id)fontFoundryWithCurrentCategory;
+ (id)autoupdatingMainTheadFontFoundry;
+ (id)fontFoundryWithCategory:(id)arg1;
+ (id)fontForSize:(float)arg1 weight:(unsigned int)arg2 contentSizeCategory:(id)arg3;
+ (id)fontForStyle:(unsigned int)arg1 weight:(unsigned int)arg2 contentSizeCategory:(id)arg3;
+ (id)fontForSize:(float)arg1 weight:(unsigned int)arg2 multiplier:(float)arg3;
+ (id)fontForStyle:(unsigned int)arg1 weight:(unsigned int)arg2 multiplier:(float)arg3;
+ (id)scaledFontForSize:(float)arg1 weight:(unsigned int)arg2;
+ (id)scaledFontForStyle:(unsigned int)arg1 weight:(unsigned int)arg2;
+ (id)fontForSize:(float)arg1 weight:(unsigned int)arg2;
+ (id)fontForStyle:(unsigned int)arg1 weight:(unsigned int)arg2;
+ (id)feedFontForStyle:(int)arg1 contentSizeCategory:(id)arg2;
+ (id)feedFontForStyle:(int)arg1 weight:(unsigned int)arg2 contentSizeCategory:(id)arg3;
+ (id)feedFontForStyle:(int)arg1 size:(float)arg2 contentSizeCategory:(id)arg3;
+ (id)feedFontForStyle:(int)arg1;
+ (id)feedFontForStyle:(int)arg1 weight:(unsigned int)arg2;
+ (id)feedFontForStyle:(int)arg1 size:(float)arg2;
- (void).cxx_destruct;
- (float)scaledContentSize:(float)arg1;
- (id)fontForSize:(float)arg1 weight:(unsigned int)arg2;
- (id)fontForStyle:(unsigned int)arg1 weight:(unsigned int)arg2;
- (void)didReceiveFontInvalidation;
- (void)updateContentSizeCategory:(id)arg1;
- (id)initWithContentSizeCategory:(id)arg1;
- (id)feedFontForStyle:(int)arg1 weight:(unsigned int)arg2;
- (id)feedFontForStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

