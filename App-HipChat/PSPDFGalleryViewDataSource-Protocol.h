//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PSPDFGalleryContentView, PSPDFGalleryView;

@protocol PSPDFGalleryViewDataSource <NSObject>
- (PSPDFGalleryContentView *)galleryView:(PSPDFGalleryView *)arg1 contentViewForItemAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfItemsInGalleryView:(PSPDFGalleryView *)arg1;
@end
