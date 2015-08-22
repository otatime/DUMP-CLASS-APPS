//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBDisplayableMediaViewProvider.h"

@class NSString, UIView<FBClonePhotoView>;

@interface FBClonePhotoViewProvider : NSObject <FBDisplayableMediaViewProvider>
{
    id <FBClonePhotoViewProviderDelegate> _delegate;
    BOOL _didAddInfo;
    UIView<FBClonePhotoView> *_view;
}

- (void).cxx_destruct;
- (void)didFinishAnimatingViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3;
- (void)didAddMediaViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3;
- (id)needsMediaViewInfoForSourceInfo:(id)arg1 sender:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

