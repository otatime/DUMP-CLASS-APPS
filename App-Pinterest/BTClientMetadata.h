//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString;

@interface BTClientMetadata : NSObject <NSCopying, NSMutableCopying>
{
    int _integration;
    int _source;
}

+ (id)sourceToString:(int)arg1;
+ (id)integrationToString:(int)arg1;
@property(readonly, nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) int integration; // @synthesize integration=_integration;
@property(readonly, copy, nonatomic) NSString *sourceString;
@property(readonly, copy, nonatomic) NSString *integrationString;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

