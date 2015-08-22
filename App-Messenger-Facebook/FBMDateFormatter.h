//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSingletonClassProvidable.h"

@class FBLocalizedDateFormats, NSCalendar, NSDateFormatter, NSString;

@interface FBMDateFormatter : NSObject <FBSingletonClassProvidable>
{
    NSDateFormatter *_dateFormatter;
    FBLocalizedDateFormats *_localizedDateFormats;
    NSCalendar *_autoupdatingCalendar;
}

- (void).cxx_destruct;
- (void)_onDateFormatsChanged:(id)arg1;
- (id)displayForPhotoAccessibilityLabel:(id)arg1;
- (id)displayForMessageDateInDetailsView:(id)arg1;
- (id)displayForTimeSeparatorMessageDate:(id)arg1;
- (id)displayForReadReceiptDate:(id)arg1;
- (id)displayForThreadDate:(id)arg1;
- (id)displayForMessageDate:(id)arg1;
- (id)displayForThreadDateInGroupsTab:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
