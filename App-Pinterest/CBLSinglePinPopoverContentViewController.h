//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

@class CBLPin, CBLPinCellContentView, CBLPinCellDisplayOptions, UITapGestureRecognizer;

@interface CBLSinglePinPopoverContentViewController : CBLBaseViewController
{
    CBLPin *_pin;
    CBLPinCellContentView *_contentView;
    CBLPinCellDisplayOptions *_pinCellDisplayOptions;
    UITapGestureRecognizer *_tapGesture;
    id <CBLSinglePinPopoverContentDelegate> _delegate;
}

@property(nonatomic) __weak id <CBLSinglePinPopoverContentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) CBLPinCellDisplayOptions *pinCellDisplayOptions; // @synthesize pinCellDisplayOptions=_pinCellDisplayOptions;
@property(retain, nonatomic) CBLPinCellContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CBLPin *pin; // @synthesize pin=_pin;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWasTapped:(id)arg1;
- (id)init;

@end

