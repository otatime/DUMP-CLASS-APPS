//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface UIButton (AFNetworkingCropSize)
+ (void)setSharedImageCache:(id)arg1;
+ (id)sharedImageCache;
- (void)cancelBackgroundImageRequestOperationForState:(unsigned int)arg1;
- (void)cancelImageRequestOperationForState:(unsigned int)arg1;
- (void)setBackgroundImageForState:(unsigned int)arg1 withURLRequest:(id)arg2 cropSize:(struct CGSize)arg3 placeholderImage:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)setBackgroundImageForState:(unsigned int)arg1 withURL:(id)arg2 cropSize:(struct CGSize)arg3 placeholderImage:(id)arg4;
- (void)setBackgroundImageForState:(unsigned int)arg1 withURL:(id)arg2 cropSize:(struct CGSize)arg3;
- (void)setImageForState:(unsigned int)arg1 withURLRequest:(id)arg2 cropSize:(struct CGSize)arg3 placeholderImage:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)setImageForState:(unsigned int)arg1 withURL:(id)arg2 cropSize:(struct CGSize)arg3 placeholderImage:(id)arg4;
- (void)setImageForState:(unsigned int)arg1 withURL:(id)arg2 cropSize:(struct CGSize)arg3;
@property(retain, nonatomic) id <AFURLResponseSerialization> imageResponseSerializer;
@end
