//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMagicStoryEditProtocol.h"

@class NSString;

@interface FBMagicStoryEditRemove : NSObject <FBMagicStoryEditProtocol>
{
    unsigned int _index;
}

- (id)applyToLayout:(id)arg1 collectionBeforeEdit:(id)arg2 editedCollection:(id)arg3;
- (id)applyToCollection:(id)arg1;
- (id)initWithIndex:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

