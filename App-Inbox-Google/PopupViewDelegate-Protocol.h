//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class PopupView;

@protocol PopupViewDelegate
- (void)popupViewDidFinish:(PopupView *)arg1;
- (void)popupViewDidCancel:(PopupView *)arg1 withAnimation:(BOOL)arg2 completion:(void (^)(void))arg3;
@end
