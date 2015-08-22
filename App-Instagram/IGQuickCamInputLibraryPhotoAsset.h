//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGQuickCamInputLibraryAsset.h"
#import "IGQuickCamInputPhotoAsset.h"

@class ALAsset, NSString, PHAsset;

@interface IGQuickCamInputLibraryPhotoAsset : NSObject <IGQuickCamInputLibraryAsset, IGQuickCamInputPhotoAsset>
{
    PHAsset *_phAsset;
    ALAsset *_alAsset;
}

@property(retain, nonatomic) ALAsset *alAsset; // @synthesize alAsset=_alAsset;
@property(retain, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
