//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface MNRichShareBuilder : NSObject
{
    NSString *_title;
    NSString *_body;
    NSString *_attribution;
    NSURL *_imageURL;
    NSString *_href;
    NSURL *_deepLinkURL;
    NSURL *_attributionDeepLinkURL;
    struct CGSize _imageSize;
    BOOL _shouldUseLargeModes;
}

+ (id)richShareFromExistingRichShare:(id)arg1;
+ (id)richShare;
- (void).cxx_destruct;
- (id)withShouldUseLargeModes:(BOOL)arg1;
- (id)withImageSize:(struct CGSize)arg1;
- (id)withAttributionDeepLinkURL:(id)arg1;
- (id)withDeepLinkURL:(id)arg1;
- (id)withHref:(id)arg1;
- (id)withImageURL:(id)arg1;
- (id)withAttribution:(id)arg1;
- (id)withBody:(id)arg1;
- (id)withTitle:(id)arg1;
- (id)build;

@end

