//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class NSMutableDictionary, NSString;

@interface MNThreadComposingMessagesModel : NSObject <FBSessionClassProvidable>
{
    NSMutableDictionary *_composingStickerForThread;
}

- (void).cxx_destruct;
- (id)composingStickerForThreadDescriptor:(id)arg1;
- (void)setComposingSticker:(id)arg1 forThreadDescriptor:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

