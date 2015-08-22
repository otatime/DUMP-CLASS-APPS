//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@interface MNBubbleContentLayout : FBValueObject <NSCopying>
{
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (id)initWithContentSize:(struct CGSize)arg1 contentInsets:(struct UIEdgeInsets)arg2;

@end
