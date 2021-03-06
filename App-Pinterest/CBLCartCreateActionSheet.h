//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLCustomActionSheet.h"

@class CBLBuyableVariant, CBLPin, UIViewController;

@interface CBLCartCreateActionSheet : CBLCustomActionSheet
{
    CBLPin *_pin;
    CBLBuyableVariant *_variant;
    int _vaultType;
    UIViewController *_viewController;
    CDUnknownBlockType _cartCreateSuccess;
    CDUnknownBlockType _cartCreateFailure;
}

@property(copy, nonatomic) CDUnknownBlockType cartCreateFailure; // @synthesize cartCreateFailure=_cartCreateFailure;
@property(copy, nonatomic) CDUnknownBlockType cartCreateSuccess; // @synthesize cartCreateSuccess=_cartCreateSuccess;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) int vaultType; // @synthesize vaultType=_vaultType;
@property(retain, nonatomic) CBLBuyableVariant *variant; // @synthesize variant=_variant;
@property(retain, nonatomic) CBLPin *pin; // @synthesize pin=_pin;
- (void).cxx_destruct;

@end

