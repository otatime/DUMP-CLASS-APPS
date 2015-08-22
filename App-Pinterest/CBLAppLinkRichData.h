//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class CBLAppLinkDeviceRichData, NSURL;

@interface CBLAppLinkRichData : CBLModelObject
{
    CBLAppLinkDeviceRichData *_iPad;
    CBLAppLinkDeviceRichData *_iPhone;
    CBLAppLinkDeviceRichData *_iOS;
}

+ (id)propertyAliases;
@property(readonly, nonatomic) CBLAppLinkDeviceRichData *iOS; // @synthesize iOS=_iOS;
@property(readonly, nonatomic) CBLAppLinkDeviceRichData *iPhone; // @synthesize iPhone=_iPhone;
@property(readonly, nonatomic) CBLAppLinkDeviceRichData *iPad; // @synthesize iPad=_iPad;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *sanitizedAppURL;

@end
