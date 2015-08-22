//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSURL;

@protocol ZZChannel
@property(readonly, nonatomic) NSURL *URL;
- (id <ZZChannelOutput>)newOutput:(out id *)arg1;
- (NSData *)newInput:(out id *)arg1;
- (void)removeAsTemporary;
- (BOOL)replaceWithChannel:(id <ZZChannel>)arg1 error:(out id *)arg2;
- (id)temporaryChannel:(out id *)arg1;
@end

