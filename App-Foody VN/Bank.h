//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface Bank : NSObject
{
    NSString *bankId;
    NSString *bankName;
    NSArray *cardList;
}

@property(retain, nonatomic) NSArray *cardList; // @synthesize cardList;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName;
@property(copy, nonatomic) NSString *bankId; // @synthesize bankId;
- (void).cxx_destruct;

@end

