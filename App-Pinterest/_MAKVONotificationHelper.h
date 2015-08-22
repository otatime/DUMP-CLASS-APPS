//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MAKVOObservation.h"

@class NSSet, NSString;

@interface _MAKVONotificationHelper : NSObject <MAKVOObservation>
{
    id _observer;
    id _target;
    NSSet *_keyPaths;
    unsigned int _options;
    SEL _selector;
    id _userInfo;
}

- (void).cxx_destruct;
- (void)remove;
- (BOOL)isValid;
- (void)deregister;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithObserver:(id)arg1 object:(id)arg2 keyPaths:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 options:(unsigned int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

