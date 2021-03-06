//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBRestorableNavigationInfo, NSObject, NSString;

@interface FBRestorableClass : FBValueObject <NSCopying, NSCoding>
{
    NSString *_className;
    NSObject *_initializationData;
    FBRestorableNavigationInfo *_navigationInfo;
}

@property(readonly, copy, nonatomic) FBRestorableNavigationInfo *navigationInfo; // @synthesize navigationInfo=_navigationInfo;
@property(readonly, copy, nonatomic) NSObject *initializationData; // @synthesize initializationData=_initializationData;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (id)initWithClassName:(id)arg1 initializationData:(id)arg2 navigationInfo:(id)arg3;

@end

