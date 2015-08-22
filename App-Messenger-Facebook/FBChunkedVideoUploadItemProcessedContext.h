//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMediaUploadItemProcessedContext.h"

@class NSString, NSURL;

@interface FBChunkedVideoUploadItemProcessedContext : NSObject <FBMediaUploadItemProcessedContext>
{
    unsigned int _fileSize;
    NSURL *_fileURL;
}

@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
- (void).cxx_destruct;
- (id)loggableContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
