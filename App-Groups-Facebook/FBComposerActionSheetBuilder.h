//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FBComposerActionSheetBuilder : NSObject
{
    NSString *_title;
    NSString *_cancelButtonTitle;
    NSArray *_buttons;
}

+ (id)composerActionSheetFromExistingComposerActionSheet:(id)arg1;
+ (id)composerActionSheet;
- (void).cxx_destruct;
- (id)withButtons:(id)arg1;
- (id)withCancelButtonTitle:(id)arg1;
- (id)withTitle:(id)arg1;
- (id)build;

@end
