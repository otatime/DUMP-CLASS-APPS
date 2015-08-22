//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface FBComposerLongPressSimultaneousGestureEvent : NSObject <NSCopying>
{
    unsigned int _subtype;
    struct CGPoint _tapped_locationInViewWhenTapped;
}

+ (id)tappedWithLocationInViewWhenTapped:(struct CGPoint)arg1;
+ (id)notTapped;
+ (id)actioned;
- (void)matchTapped:(CDUnknownBlockType)arg1 notTapped:(CDUnknownBlockType)arg2 actioned:(CDUnknownBlockType)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
