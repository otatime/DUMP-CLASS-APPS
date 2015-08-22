//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNComposerExtensionOverflowStrategy.h"

@class MNComposerOverflowExtension, NSArray, NSString;

@interface MNComposerExtensionDefaultOverflowStrategy : NSObject <MNComposerExtensionOverflowStrategy>
{
    NSArray *_extensionsToDisplay;
    int _numberOfExtensionsToDisplay;
    MNComposerOverflowExtension *_overflowExtension;
    NSArray *_extensions;
}

@property(readonly, copy, nonatomic) NSArray *extensionsToDisplay; // @synthesize extensionsToDisplay=_extensionsToDisplay;
@property(copy, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;
@property(readonly, nonatomic) MNComposerOverflowExtension *overflowExtension; // @synthesize overflowExtension=_overflowExtension;
- (void).cxx_destruct;
- (unsigned int)_maxNumberOfNonOverflowingExtensionsToDisplay;
- (void)_updateNumberOfExtensionsToDisplay;
- (unsigned int)numberOfExtensionsNeedsDisplay;
- (BOOL)extensionIsInOverflow:(id)arg1;
- (unsigned int)indexOfExtensionInExtensionsToDisplay:(id)arg1;
- (void)setSelectedExtension:(id)arg1;
- (void)setNumberOfExtensionsToDisplay:(int)arg1;
- (id)init;
- (id)initWithOverflowExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

