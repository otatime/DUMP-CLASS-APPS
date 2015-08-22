//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNTokenModel.h"

@class NSString;

@interface MNStringTokenModel : NSObject <MNTokenModel>
{
    NSString *_string;
    BOOL _shouldShowTokenSeparator;
}

- (void).cxx_destruct;
- (BOOL)shouldShowTokenSeparator;
- (id)displayString;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 shouldShowTokenSeparator:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
