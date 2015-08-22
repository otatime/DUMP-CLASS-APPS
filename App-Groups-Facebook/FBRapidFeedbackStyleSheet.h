//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBStructuredSurveyUIStyleSheet.h"

@class NSDictionary, UIColor;

@interface FBRapidFeedbackStyleSheet : FBStructuredSurveyUIStyleSheet
{
    BOOL _showTopBottomOverlaysShadow;
    BOOL _verticallyCentered;
    UIColor *_popupBackgroundColor;
    UIColor *_popupBarBackgroundColor;
    NSDictionary *_popupIntroOutroTextAttributes;
    NSDictionary *_popupIntroOutroActionTextAttributes;
    UIColor *_continueButtonTitleColor;
    UIColor *_fullScreenBackgroundColor;
    float _fullScreenBackgroundAlphaExpanded;
    float _fullScreenBackgroundAlpha;
    float _leftRightOuterPopoverIndent;
    float _iPadSurveyWidth;
    struct UIEdgeInsets _innerPopoverInsets;
    struct UIEdgeInsets _innerPopoverExpandedInsets;
}

+ (id)defaultStyleSheet;
@property(nonatomic) struct UIEdgeInsets innerPopoverExpandedInsets; // @synthesize innerPopoverExpandedInsets=_innerPopoverExpandedInsets;
@property(nonatomic) struct UIEdgeInsets innerPopoverInsets; // @synthesize innerPopoverInsets=_innerPopoverInsets;
@property(nonatomic) float iPadSurveyWidth; // @synthesize iPadSurveyWidth=_iPadSurveyWidth;
@property(nonatomic, getter=isVerticallyCentered) BOOL verticallyCentered; // @synthesize verticallyCentered=_verticallyCentered;
@property(nonatomic) BOOL showTopBottomOverlaysShadow; // @synthesize showTopBottomOverlaysShadow=_showTopBottomOverlaysShadow;
@property(nonatomic) float leftRightOuterPopoverIndent; // @synthesize leftRightOuterPopoverIndent=_leftRightOuterPopoverIndent;
@property(nonatomic) float fullScreenBackgroundAlpha; // @synthesize fullScreenBackgroundAlpha=_fullScreenBackgroundAlpha;
@property(nonatomic) float fullScreenBackgroundAlphaExpanded; // @synthesize fullScreenBackgroundAlphaExpanded=_fullScreenBackgroundAlphaExpanded;
@property(retain, nonatomic) UIColor *fullScreenBackgroundColor; // @synthesize fullScreenBackgroundColor=_fullScreenBackgroundColor;
@property(retain, nonatomic) UIColor *continueButtonTitleColor; // @synthesize continueButtonTitleColor=_continueButtonTitleColor;
@property(copy, nonatomic) NSDictionary *popupIntroOutroActionTextAttributes; // @synthesize popupIntroOutroActionTextAttributes=_popupIntroOutroActionTextAttributes;
@property(copy, nonatomic) NSDictionary *popupIntroOutroTextAttributes; // @synthesize popupIntroOutroTextAttributes=_popupIntroOutroTextAttributes;
@property(retain, nonatomic) UIColor *popupBarBackgroundColor; // @synthesize popupBarBackgroundColor=_popupBarBackgroundColor;
@property(retain, nonatomic) UIColor *popupBackgroundColor; // @synthesize popupBackgroundColor=_popupBackgroundColor;
- (void).cxx_destruct;
- (id)init;

@end
