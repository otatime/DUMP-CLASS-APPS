//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NIFormElement.h"

@class NSString;

@interface NISwitchFormElement : NIFormElement
{
    BOOL _value;
    NSString *_labelText;
    id _didChangeTarget;
    SEL _didChangeSelector;
}

+ (id)switchElementWithID:(int)arg1 labelText:(id)arg2 value:(BOOL)arg3;
+ (id)switchElementWithID:(int)arg1 labelText:(id)arg2 value:(BOOL)arg3 didChangeTarget:(id)arg4 didChangeSelector:(SEL)arg5;
@property(nonatomic) SEL didChangeSelector; // @synthesize didChangeSelector=_didChangeSelector;
@property(nonatomic) id didChangeTarget; // @synthesize didChangeTarget=_didChangeTarget;
@property(nonatomic) BOOL value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (Class)cellClass;

@end
