//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FBComposerInlinePrivacySurveyViewController, FBComposerPrivacySetting;

@protocol FBComposerInlinePrivacySurveyViewControllerDelegate
- (void)inlinePrivacySurveyViewControllerUserDidSelectPrimaryPrivacy:(FBComposerInlinePrivacySurveyViewController *)arg1;
- (void)inlinePrivacySurveyViewControllerUserDidSelectMoreOptions:(FBComposerInlinePrivacySurveyViewController *)arg1;
- (void)inlinePrivacySurveyViewController:(FBComposerInlinePrivacySurveyViewController *)arg1 userDidSelectSecondaryPrivacy:(FBComposerPrivacySetting *)arg2;
- (void)inlinePrivacySurveyViewControllerUserDidDismissView:(FBComposerInlinePrivacySurveyViewController *)arg1 withEvent:(unsigned int)arg2;
@end
