//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBDataDeserializing.h"

@class NSSet;

@interface FBJSONResponseDeserializer : NSObject <FBDataDeserializing>
{
    NSSet *_expectedTypes;
}

+ (id)setForExpectedTypeEnum:(int)arg1;
- (void).cxx_destruct;
- (id)_parseJSONDataFragment:(id)arg1 error:(id *)arg2;
- (void)deserialize:(id)arg1 responseProcessor:(id)arg2 callbackQueue:(id)arg3 completionCallback:(CDUnknownBlockType)arg4 failureCallback:(CDUnknownBlockType)arg5;
- (id)description;
- (id)initWithExpectedTypes:(int)arg1;

@end

