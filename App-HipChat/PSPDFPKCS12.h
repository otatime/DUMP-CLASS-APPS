//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface PSPDFPKCS12 : NSObject
{
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)unlockWithPassword:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)initWithData:(id)arg1;

@end

