//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface Range : NSObject
{
    NSString *_fromValue;
    NSString *_toValue;
}

@property(copy, nonatomic) NSString *toValue; // @synthesize toValue=_toValue;
@property(copy, nonatomic) NSString *fromValue; // @synthesize fromValue=_fromValue;
- (void).cxx_destruct;
- (id)initWithFrom:(id)arg1 to:(id)arg2;

@end

