//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class NSString;

@protocol JBTClientProvidedMedia_Builder <NSObject, JavaObject>
- (id <JBTClientProvidedMedia>)build;
- (id <JBTClientProvidedMedia_Builder>)setMimeTypeWithNSString:(NSString *)arg1;
- (id <JBTClientProvidedMedia_Builder>)setThumbnailUrlWithNSString:(NSString *)arg1;
- (id <JBTClientProvidedMedia_Builder>)setDownloadUrlWithNSString:(NSString *)arg1;
- (id <JBTClientProvidedMedia_Builder>)setFileNameWithNSString:(NSString *)arg1;
@end
