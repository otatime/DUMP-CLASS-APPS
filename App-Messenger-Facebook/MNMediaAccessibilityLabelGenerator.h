//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class FBMDateFormatter, NSString;

@interface MNMediaAccessibilityLabelGenerator : NSObject <FBClassProvidable>
{
    FBMDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (id)generateAccessibilityLabelForMediaType:(unsigned int)arg1 withCreationDate:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

