//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMSticker, FBMStickerInputView, NSString, UISearchBar, UIView;

@protocol FBMStickerInputViewDelegate <NSObject>
- (void)didSelectStickerStoreWith:(unsigned long long)arg1 sourceView:(UIView *)arg2;
- (void)stickerInputView:(FBMStickerInputView *)arg1 didSelectSticker:(FBMSticker *)arg2;

@optional
- (void)stickerInputView:(FBMStickerInputView *)arg1 didTapTabWithTitle:(NSString *)arg2;
- (void)stickerInputView:(FBMStickerInputView *)arg1 didEndSearching:(UISearchBar *)arg2 completion:(void (^)(void))arg3;
- (void)stickerInputView:(FBMStickerInputView *)arg1 didBeginSearching:(UISearchBar *)arg2 completion:(void (^)(void))arg3;
@end
