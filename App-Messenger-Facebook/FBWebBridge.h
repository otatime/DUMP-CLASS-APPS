//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FBWebBridge : NSObject
{
    NSArray *_attachedBridgeMethodSets;
    NSArray *_availableBridgeMethodSets;
    id _performer;
}

+ (BOOL)isBridgeRequestURL:(id)arg1;
@property(nonatomic) __weak id performer; // @synthesize performer=_performer;
@property(copy, nonatomic) NSArray *availableBridgeMethodSets; // @synthesize availableBridgeMethodSets=_availableBridgeMethodSets;
@property(copy, nonatomic) NSArray *attachedBridgeMethodSets; // @synthesize attachedBridgeMethodSets=_attachedBridgeMethodSets;
- (void).cxx_destruct;
- (void)attachToWebView:(id)arg1;
- (void)executeBridgeRequestURL:(id)arg1;
- (void)_executeBridgeRequest:(id)arg1;
- (id)_invocationForSelector:(SEL)arg1 arguments:(id)arg2;
- (BOOL)_selectorNameIsAllowed:(id)arg1;
- (id)initWithMethodSets:(id)arg1 performer:(id)arg2;

@end

