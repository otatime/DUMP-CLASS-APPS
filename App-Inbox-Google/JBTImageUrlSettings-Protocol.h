//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTImageUrlSettings_CropTypeEnum, NSString;

@protocol JBTImageUrlSettings <NSObject, JavaObject>
- (id <JBTImageUrlSettings_Builder>)toBuilder;
- (NSString *)getDefaultProtocol;
- (BOOL)isOriginalSize;
- (JBTImageUrlSettings_CropTypeEnum *)getCropType;
- (BOOL)hasCrop;
- (int)getHeight;
- (int)getWidth;
@end
