//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NRMATrace;

@interface NRMAThreadTransition : NSObject
{
    SEL _selector;
    id _target;
    id _argument;
    NRMATrace *_parent;
}

@property(nonatomic) NRMATrace *parent; // @synthesize parent=_parent;
@property(nonatomic) id argument; // @synthesize argument=_argument;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;

@end

