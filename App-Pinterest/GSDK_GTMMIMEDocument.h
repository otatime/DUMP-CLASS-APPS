//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface GSDK_GTMMIMEDocument : NSObject
{
    NSMutableArray *parts_;
    unsigned long long length_;
    NSString *boundary_;
    unsigned int randomSeed_;
}

+ (id)MIMEDocument;
- (void).cxx_destruct;
- (void)generateInputStream:(id *)arg1 length:(unsigned long long *)arg2 boundary:(id *)arg3;
@property(copy, nonatomic) NSString *boundary;
- (unsigned int)random;
- (void)seedRandomWith:(unsigned int)arg1;
- (void)addPartWithHeaders:(id)arg1 body:(id)arg2;
- (id)description;
- (id)init;

@end

