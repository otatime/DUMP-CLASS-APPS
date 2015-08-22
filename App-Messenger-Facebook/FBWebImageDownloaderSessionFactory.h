//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBWebImageDownloaderFactoryProtocol.h"

@class FBUserSession, NSString;

@interface FBWebImageDownloaderSessionFactory : NSObject <FBWebImageDownloaderFactoryProtocol>
{
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (BOOL)canStreamURL:(id)arg1;
- (id)downloaderForType:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
