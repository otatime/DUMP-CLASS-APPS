//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class FBFormElement, UILabel;

@interface FBFormElementView : UIControl
{
    FBFormElement *_element;
    UILabel *_label;
}

+ (float)heightForElement:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) FBFormElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)_didSelectElement:(id)arg1;
- (BOOL)canRecycle;
- (void)prepareForReuse;
- (void)prepareForElement:(id)arg1;
- (id)init;

@end
