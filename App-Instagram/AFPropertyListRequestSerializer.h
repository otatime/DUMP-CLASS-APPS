//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPRequestSerializer.h"

@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer
{
    unsigned int _format;
    unsigned int _writeOptions;
}

+ (id)serializerWithFormat:(unsigned int)arg1 writeOptions:(unsigned int)arg2;
+ (id)serializer;
@property(nonatomic) unsigned int writeOptions; // @synthesize writeOptions=_writeOptions;
@property(nonatomic) unsigned int format; // @synthesize format=_format;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;

@end

