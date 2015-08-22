//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNMediaCollectionFetching.h"
#import "MNRecentContentListening.h"

@class MNPhotoImageRequester, MNRecentContentStore, NSArray, NSString;

@interface MNRecentContentFetcher : NSObject <MNRecentContentListening, FBClassProvidable, MNMediaCollectionFetching>
{
    MNRecentContentStore *_recentContentStore;
    NSArray *_attachments;
    id <FBMAttachmentURLFormatting> _urlFormatter;
    MNPhotoImageRequester *_imageRequester;
    BOOL _needsRefetch;
    id <MNMediaCollectionFetchingDelegate> _delegate;
}

@property(nonatomic) __weak id <MNMediaCollectionFetchingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (void)recentContentDidUpdate;
@property(readonly, nonatomic) BOOL needsRefetch; // @synthesize needsRefetch=_needsRefetch;
@property(readonly, copy, nonatomic) NSArray *mediaCollection;
- (void)cancel;
- (void)fetchCollection;
- (void)dealloc;
- (id)initWithRecentContentStore:(id)arg1 urlFormatter:(id)arg2 imageRequest:(id)arg3;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

