//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SmartMailInteractionSupport.h"
#import "UITextViewDelegate.h"

@class NSAttributedString, NSString, SmartMailInteractionForwarder, TaskAssistView, UIButton, UIImageView, UILabel, UITextView;

@interface TaskEntryView : UIView <UITextViewDelegate, SmartMailInteractionSupport>
{
    UILabel *addTaskLabel_;
    UIButton *clearButton_;
    SmartMailInteractionForwarder *forwarder_;
    struct CGRect keyboardFrame_;
    BOOL showingGreyAvatar_;
    TaskAssistView *taskAssistView_;
    UIImageView *taskEntryAvatarView_;
    UIView *taskEntryBottomSeparatorView_;
    UIView *taskEntryTopSeparatorView_;
    UITextView *taskTextView_;
    BOOL showEmptyUI_;
    BOOL usesGreyDefaultAvatar_;
    UIView *entryBackgroundView_;
    id <TaskEntryViewDelegate> _delegate;
}

+ (float)backgroundHeight;
@property(nonatomic) __weak id <TaskEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL usesGreyDefaultAvatar; // @synthesize usesGreyDefaultAvatar=usesGreyDefaultAvatar_;
@property(nonatomic) BOOL showEmptyUI; // @synthesize showEmptyUI=showEmptyUI_;
@property(retain, nonatomic) UIView *entryBackgroundView; // @synthesize entryBackgroundView=entryBackgroundView_;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)setupKeyboard;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)greyAvatarImage;
- (void)updateAvatarImage;
- (void)clearPressed:(id)arg1;
- (void)setTaskAssistHidden:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)createSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak id <SmartMailInteractionSupport> smartMailDelegate;
@property(copy, nonatomic) NSAttributedString *taskAttributedText; // @dynamic taskAttributedText;
@property(copy, nonatomic) NSString *taskText;
@property(nonatomic) BOOL showReminderIcon;
@property(nonatomic) BOOL showClearButton;
@property(nonatomic) BOOL canDismissAssist; // @dynamic canDismissAssist;
- (void)prepareForReuse;
- (void)updateTaskEntryViewWithSmartmailComponents:(id)arg1 item:(id)arg2;
@property(nonatomic) BOOL editable;
- (void)setEntryModeEnabled:(BOOL)arg1;
- (void)dismissNativeAutocomplete;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (float)taskTextViewWidthForEntryViewWidth:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

