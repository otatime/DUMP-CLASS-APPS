//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBDataValidating.h"

@class NSIndexSet, NSString;

@interface FBHTTPResponseCodeDataValidator : NSObject <FBDataValidating>
{
    NSIndexSet *_range;
}

@property(readonly, nonatomic) NSIndexSet *range; // @synthesize range=_range;
- (void).cxx_destruct;
- (BOOL)validateData:(id)arg1 responseProcessor:(id)arg2 error:(id *)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithRange:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
