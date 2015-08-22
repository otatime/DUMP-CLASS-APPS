//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "UITextViewDelegate.h"

@class NSString, UIImage, UILabel, UITextView;

@interface CBLReportBugViewController : CBLBaseViewController <UITextViewDelegate>
{
    UIImage *_screenshot;
    UILabel *_bugTitleLabel;
    UILabel *_reproTitleLabel;
    UITextView *_bugTitleInput;
    UITextView *_reproStepsInput;
}

@property(retain, nonatomic) UITextView *reproStepsInput; // @synthesize reproStepsInput=_reproStepsInput;
@property(retain, nonatomic) UITextView *bugTitleInput; // @synthesize bugTitleInput=_bugTitleInput;
@property(retain, nonatomic) UILabel *reproTitleLabel; // @synthesize reproTitleLabel=_reproTitleLabel;
@property(retain, nonatomic) UILabel *bugTitleLabel; // @synthesize bugTitleLabel=_bugTitleLabel;
@property(retain, nonatomic) UIImage *screenshot; // @synthesize screenshot=_screenshot;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)previewBug:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
