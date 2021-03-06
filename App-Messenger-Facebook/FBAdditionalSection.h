//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FBAdditionalSection : NSObject
{
    BOOL _isLoaded;
    BOOL _hidingMore;
    BOOL _showHeader;
    NSString *_name;
    NSString *_indexString;
    int _showAllCutoff;
    NSArray *_data;
    id <FBAdditionalSectionDelegate> _delegate;
    CDUnknownBlockType _loadDataCompletionBlock;
}

@property(nonatomic) BOOL showHeader; // @synthesize showHeader=_showHeader;
@property(copy, nonatomic) CDUnknownBlockType loadDataCompletionBlock; // @synthesize loadDataCompletionBlock=_loadDataCompletionBlock;
@property(nonatomic) __weak id <FBAdditionalSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL hidingMore; // @synthesize hidingMore=_hidingMore;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(readonly, nonatomic) int showAllCutoff; // @synthesize showAllCutoff=_showAllCutoff;
@property(readonly, nonatomic) BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property(readonly, copy, nonatomic) NSString *indexString; // @synthesize indexString=_indexString;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)logSectionConversion;
- (id)title;
- (BOOL)showPartialData;
- (BOOL)showLoading;
- (BOOL)hasFaceboxes;
- (void)updateFinalData:(id)arg1;
- (void)loadSectionData;
- (id)initWithName:(id)arg1 indexString:(id)arg2 maxSuggestionsToShow:(unsigned int)arg3;

@end

