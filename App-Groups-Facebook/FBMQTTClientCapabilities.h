//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBMQTTClientCapabilities : NSObject
{
    unsigned int _capabilities;
}

- (void)removeAllCapabilities;
- (unsigned int)getCapabilities;
- (void)removeCapabilities:(unsigned int)arg1;
- (void)addCapabilities:(unsigned int)arg1;
- (id)init;

@end
