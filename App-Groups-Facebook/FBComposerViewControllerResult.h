//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FBComposerPublisherData, FBCompositionModelBundle;

@interface FBComposerViewControllerResult : NSObject <NSCopying>
{
    unsigned int _subtype;
    FBCompositionModelBundle *_finishedComposing_compositionModelBundle;
    FBComposerPublisherData *_finishedComposing_publicationToBeSentToServer;
}

+ (id)userTappedOutsidePopover;
+ (id)finishedComposingWithCompositionModelBundle:(id)arg1 publicationToBeSentToServer:(id)arg2;
+ (id)cancelledThroughVoiceoverGesture;
+ (id)back;
- (void).cxx_destruct;
- (void)matchBack:(CDUnknownBlockType)arg1 userTappedOutsidePopover:(CDUnknownBlockType)arg2 cancelledThroughVoiceoverGesture:(CDUnknownBlockType)arg3 finishedComposing:(CDUnknownBlockType)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
