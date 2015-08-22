//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UnifiedMediaGalleryLog : NSObject
{
    BOOL _deleted;
    BOOL _shownInComposer;
    unsigned int _composerEntryCount;
    unsigned int _composerEditingEntryCount;
    unsigned int _cancellationSheetEntryCount;
    unsigned int _cropTapCount;
    unsigned int _filterTapCount;
    unsigned int _simplePickerEntryCount;
    unsigned int _stickerTapCount;
    unsigned int _tagTapCount;
    unsigned int _textTapCount;
    unsigned int _doodleTapCount;
    double _timeSpentFromComposer;
    double _timeSpentFromSimplePicker;
    double _timeSpentFromCancellationSheet;
}

@property(nonatomic) BOOL shownInComposer; // @synthesize shownInComposer=_shownInComposer;
@property(nonatomic) double timeSpentFromCancellationSheet; // @synthesize timeSpentFromCancellationSheet=_timeSpentFromCancellationSheet;
@property(nonatomic) double timeSpentFromSimplePicker; // @synthesize timeSpentFromSimplePicker=_timeSpentFromSimplePicker;
@property(nonatomic) double timeSpentFromComposer; // @synthesize timeSpentFromComposer=_timeSpentFromComposer;
@property(nonatomic) unsigned int doodleTapCount; // @synthesize doodleTapCount=_doodleTapCount;
@property(nonatomic) unsigned int textTapCount; // @synthesize textTapCount=_textTapCount;
@property(nonatomic) unsigned int tagTapCount; // @synthesize tagTapCount=_tagTapCount;
@property(nonatomic) unsigned int stickerTapCount; // @synthesize stickerTapCount=_stickerTapCount;
@property(nonatomic) unsigned int simplePickerEntryCount; // @synthesize simplePickerEntryCount=_simplePickerEntryCount;
@property(nonatomic) unsigned int filterTapCount; // @synthesize filterTapCount=_filterTapCount;
@property(nonatomic) BOOL deleted; // @synthesize deleted=_deleted;
@property(nonatomic) unsigned int cropTapCount; // @synthesize cropTapCount=_cropTapCount;
@property(nonatomic) unsigned int cancellationSheetEntryCount; // @synthesize cancellationSheetEntryCount=_cancellationSheetEntryCount;
@property(nonatomic) unsigned int composerEditingEntryCount; // @synthesize composerEditingEntryCount=_composerEditingEntryCount;
@property(nonatomic) unsigned int composerEntryCount; // @synthesize composerEntryCount=_composerEntryCount;
- (id)init;

@end

