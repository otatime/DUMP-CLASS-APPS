//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface StickersInPhotoLog : NSObject
{
    BOOL _deleted;
    BOOL _shownInComposer;
    unsigned int _entryCount;
    unsigned int _numberOfCancels;
    unsigned int _stickersAdded;
    unsigned int _stickersRemoved;
    unsigned int _stickersRemovedFromCancel;
    unsigned int _totalNumberOfStickers;
}

@property(nonatomic) BOOL shownInComposer; // @synthesize shownInComposer=_shownInComposer;
@property(nonatomic) unsigned int totalNumberOfStickers; // @synthesize totalNumberOfStickers=_totalNumberOfStickers;
@property(nonatomic) unsigned int stickersRemovedFromCancel; // @synthesize stickersRemovedFromCancel=_stickersRemovedFromCancel;
@property(nonatomic) unsigned int stickersRemoved; // @synthesize stickersRemoved=_stickersRemoved;
@property(nonatomic) unsigned int stickersAdded; // @synthesize stickersAdded=_stickersAdded;
@property(nonatomic) unsigned int numberOfCancels; // @synthesize numberOfCancels=_numberOfCancels;
@property(nonatomic) BOOL deleted; // @synthesize deleted=_deleted;
@property(nonatomic) unsigned int entryCount; // @synthesize entryCount=_entryCount;

@end

