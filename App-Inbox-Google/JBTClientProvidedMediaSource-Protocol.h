//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTMediaList_TypeEnum;

@protocol JBTClientProvidedMediaSource <NSObject, JavaObject>
- (void)getClientProvidedMediasWithInt:(int)arg1 withJBTClientProvidedMedia_Builder_Factory:(id <JBTClientProvidedMedia_Builder_Factory>)arg2 withJBTCallback:(id <JBTCallback>)arg3;
- (JBTMediaList_TypeEnum *)getMediaListType;
@end
