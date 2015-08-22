//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BTMOutOfBoxPageDescription.h"

@class BTMOutOfBoxPageStyle, NSAttributedString, NSString, UIImage;

@interface BTMOutOfBoxStaticPageDescription : NSObject <BTMOutOfBoxPageDescription>
{
    BTMOutOfBoxPageStyle *_style;
    int _textAlignment;
    float _topMargin;
    UIImage *_image;
    NSAttributedString *_text;
}

+ (Class)rendererClass;
+ (id)pageWithStyle:(id)arg1 topMargin:(float)arg2 image:(id)arg3 text:(id)arg4 textAlignment:(int)arg5;
+ (id)pageWithStyle:(id)arg1 topMargin:(float)arg2 image:(id)arg3 text:(id)arg4;
@property(readonly, copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) float topMargin; // @synthesize topMargin=_topMargin;
@property(readonly, nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) BTMOutOfBoxPageStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)initWithStyle:(id)arg1 topMargin:(float)arg2 image:(id)arg3 text:(id)arg4 textAlignment:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
