//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTGenericSmartMail.h"
#import "JavaObject.h"
#import "NSObject.h"

@class JBTVideo_SourceEnum, NSString;

@protocol JBTVideo <JBTGenericSmartMail, NSObject, JavaObject>
- (NSString *)getUrl;
- (id <JBTImage>)getThumbnail;
- (id <JBTOrganization>)getSourceOrganization;
- (NSString *)getDuration;
- (JBTVideo_SourceEnum *)getSource;
- (NSString *)getTitle;
@end
