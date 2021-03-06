//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@interface FBPaymentsCardTextAndImageViewConfiguration : FBValueObject <NSCopying>
{
    BOOL _shouldClearContents;
    BOOL _shouldValidateText;
}

@property(readonly, nonatomic) BOOL shouldValidateText; // @synthesize shouldValidateText=_shouldValidateText;
@property(readonly, nonatomic) BOOL shouldClearContents; // @synthesize shouldClearContents=_shouldClearContents;
- (id)initWithShouldClearContents:(BOOL)arg1 shouldValidateText:(BOOL)arg2;

@end

