//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBSVGKitData : FBValueObject <NSCopying>
{
    NSString *_bundle;
    NSString *_file;
}

@property(readonly, copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(readonly, copy, nonatomic) NSString *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)initWithBundle:(id)arg1 file:(id)arg2;

@end
