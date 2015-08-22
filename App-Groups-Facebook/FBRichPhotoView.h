//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBNetworkerRequestDelegate.h"
#import "FBPagingViewContentView.h"
#import "FBTagDecoratorDelegate.h"
#import "FBWebImageViewListener.h"
#import "FBZoomingPhotoViewDelegate.h"

@class FBMemPhoto, FBPhotoLoadingProgressView, FBPhotoTaggingSearchController, FBPhotosConsumptionReferrer, FBScenePath, FBTagDecorator, FBUserSession, FBWebPhotoView, FBZoomingPhotoView, NSDate, NSMutableSet, NSSet, NSString, NSTimer, UIActivityIndicatorView, UIButton, UIImage;

@interface FBRichPhotoView : UIView <FBZoomingPhotoViewDelegate, FBTagDecoratorDelegate, FBNetworkerRequestDelegate, FBWebImageViewListener, FBPagingViewContentView>
{
    UIButton *_retryButton;
    FBTagDecorator *_tagDecorator;
    float _lastProgress;
    BOOL _showingTags;
    unsigned int _minimumViewablePhotoImageFlag;
    NSDate *_spinnerDisplayTime;
    BOOL _canEditTag;
    BOOL _canSyncTaggables;
    NSMutableSet *_newTags;
    UIView *_tapToTagLabel;
    struct CGSize _photoSize;
    BOOL _needsToDelegateDidSetTags;
    FBZoomingPhotoView *_zoomView;
    FBPhotosConsumptionReferrer *_referrer;
    FBUserSession *_session;
    double _loadTime;
    FBPhotoLoadingProgressView *_progressView;
    UIActivityIndicatorView *_simpleSpinnerView;
    BOOL _streamingImageSourceEnabled;
    BOOL _showFaceboxesByDefault;
    FBMemPhoto *_photo;
    FBWebPhotoView *_photoView;
    id <FBRichPhotoViewDelegate> _delegate;
    id <FBRichPhotoViewSpinnerLoggingDelegate> _spinnerLoggingDelegate;
    FBScenePath *_scenePath;
    float _zoomScale;
    unsigned int _viewTagMode;
    NSTimer *_hideTapToTagLabelTimer;
    id <FBQueriedNodeFieldsProtocol> _target;
    NSString *_sessionID;
    NSString *_focusedFaceboxFBID;
    FBPhotoTaggingSearchController *_taggingSearchController;
}

+ (unsigned int)defaultImageFlags;
@property(retain, nonatomic) FBPhotoTaggingSearchController *taggingSearchController; // @synthesize taggingSearchController=_taggingSearchController;
@property(copy, nonatomic) NSString *focusedFaceboxFBID; // @synthesize focusedFaceboxFBID=_focusedFaceboxFBID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) id <FBQueriedNodeFieldsProtocol> target; // @synthesize target=_target;
@property(retain, nonatomic) NSTimer *hideTapToTagLabelTimer; // @synthesize hideTapToTagLabelTimer=_hideTapToTagLabelTimer;
@property(retain, nonatomic) NSDate *spinnerDisplayTime; // @synthesize spinnerDisplayTime=_spinnerDisplayTime;
@property(readonly, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(nonatomic) BOOL showFaceboxesByDefault; // @synthesize showFaceboxesByDefault=_showFaceboxesByDefault;
@property(nonatomic) unsigned int viewTagMode; // @synthesize viewTagMode=_viewTagMode;
@property(copy, nonatomic, getter=getNewTags) NSSet *newTags; // @synthesize newTags=_newTags;
@property(nonatomic) BOOL canSyncTaggables; // @synthesize canSyncTaggables=_canSyncTaggables;
@property(nonatomic) BOOL canEditTag; // @synthesize canEditTag=_canEditTag;
@property(nonatomic) float zoomScale; // @synthesize zoomScale=_zoomScale;
@property(retain, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
@property(nonatomic) __weak id <FBRichPhotoViewSpinnerLoggingDelegate> spinnerLoggingDelegate; // @synthesize spinnerLoggingDelegate=_spinnerLoggingDelegate;
@property(nonatomic) __weak id <FBRichPhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBWebPhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) FBMemPhoto *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didStartWithStatus:(id)arg2;
- (void)_voiceoverChanged;
- (void)_delegateDidSetTags;
- (CDUnknownBlockType)extraBlockForAnalytics;
- (void)_logTagSuggestionDismissEvent:(id)arg1 photoFBID:(id)arg2 faceboxFBID:(id)arg3 tagSuggestionFBID:(id)arg4;
- (void)_logTagDeleteEvent:(id)arg1 fromPhotoFBID:(id)arg2 photoOwner:(id)arg3 taggedUser:(id)arg4 viewerFBID:(id)arg5;
- (void)_logDisplayPhoto:(id)arg1 imageFlag:(unsigned int)arg2 acceptable:(BOOL)arg3;
- (void)_logStartLoadPhoto:(id)arg1;
- (void)webImageView:(id)arg1 didFailDownloadingWithError:(id)arg2;
- (void)webImageView:(id)arg1 didUpdateLoadProgress:(float)arg2;
- (void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2;
- (void)_dismissTagSuggestionForFaceboxesEdge:(id)arg1 photoFBID:(id)arg2;
- (void)_updateSpinner;
- (void)_hideSpinner;
- (void)_showSpinner;
- (BOOL)_shouldShowSpinner;
- (void)_showRetryButton;
- (void)_resetAllTags;
- (void)_updateFaceboxes;
- (void)_updatePhotoDownloadRequestScenePath;
- (void)_finishTagging;
- (void)_consistentNewTagsEdgesToMemPhoto:(id)arg1;
- (void)setFaceboxesHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowingTags:(BOOL)arg1 animated:(BOOL)arg2;
- (id)tagAnalyticsModule;
- (id)passthroughViewsForFaceAlertsNUX;
- (BOOL)tagDecoratorCanShowNUX:(id)arg1;
- (BOOL)tagDecorator:(id)arg1 shouldShowTagGuideForUser:(id)arg2;
- (void)tagDecoratorTaggingInterfaceWillAppear:(id)arg1;
- (void)tagDecoratorTaggingInterfaceDidDisappear:(id)arg1;
- (void)tagDecoratorTaggingInterfaceWillDisappear:(id)arg1;
- (void)tagDecorator:(id)arg1 didRemoveTagsEdge:(id)arg2;
- (void)removeLocalTagsEdge:(id)arg1;
- (void)tagDecorator:(id)arg1 didRejectTagForFaceboxesEdge:(id)arg2;
- (id)tagDecorator:(id)arg1 addFaceRect:(struct CGRect)arg2 toAvatar:(id)arg3 text:(id)arg4 loggingSuffix:(id)arg5;
- (void)tagDecorator:(id)arg1 didTapFaceboxesEdge:(id)arg2;
- (void)tagDecorator:(id)arg1 didTapTagsEdge:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)zoomingPhotoViewDidLayoutSubviews:(id)arg1;
- (void)_didTapRetryButton:(id)arg1;
- (void)resetZoom:(BOOL)arg1;
- (void)maximumZoomToPoint:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)didLoseCenterFocus;
- (void)prepareForReuse;
- (void)_uploadNewTags;
- (void)handleHideTapToTagLabelTimeout:(id)arg1;
- (void)hideTapToTagLabel;
- (void)showTapToTagLabel;
- (void)photoTapped:(id)arg1;
- (BOOL)hasTagAtPoint:(struct CGPoint)arg1;
- (id)simpleSpinnerView;
- (id)progressView;
- (id)getLoadingIndicatorView;
- (id)currentLoadingIndicatorView;
- (void)setTemporaryDisplayedImageIfNeeded:(id)arg1 forImageFlag:(unsigned int)arg2 photo:(id)arg3;
@property(readonly, nonatomic) UIImage *displayedImage;
- (void)closeNUX;
- (void)_updateTaggingSearchControllerForTarget;
- (void)willMoveToWindow:(id)arg1;
- (void)updatePhotoTaggingSearchController;
@property(copy, nonatomic) NSString *module;
- (void)_updatePhoto;
- (BOOL)_shouldReloadPhoto:(id)arg1;
- (void)_updateFaceboxConfiguration;
- (BOOL)_showFaceboxesWhenOpenPhoto;
@property(nonatomic) BOOL tagGuideEnabled;
@property(readonly, nonatomic) BOOL isZoomedIn;
@property(readonly, nonatomic) BOOL isZoomed;
@property(readonly, nonatomic) BOOL isSpinnerOn;
- (void)layoutSubviews;
- (unsigned int)minimumViewablePhotoImageFlag;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 referrer:(id)arg2 session:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
