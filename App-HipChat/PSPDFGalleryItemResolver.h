//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface PSPDFGalleryItemResolver : NSObject
{
    NSOperationQueue *_queue;
    double _timeoutIntervalForRequest;
}

@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
- (void).cxx_destruct;
- (id)completionOperationWithMutableResolvedItems:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)resolveOperationForUnknownItem:(id)arg1 mutableResolvedItems:(id)arg2;
- (void)cancel;
- (void)resolveItemsByIssuingHTTPRequests:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)resolveItemsByParsingContentURL:(id)arg1;
- (void)resolveItems:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setUpQueue;
- (id)init;

@end

