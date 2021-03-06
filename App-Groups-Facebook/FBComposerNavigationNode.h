//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerNavigationDestination, FBComposerNavigationNodePopoverControllerInfo, NSMutableArray, UIViewController;

@interface FBComposerNavigationNode : NSObject
{
    FBComposerNavigationNode *_parentNode;
    FBComposerNavigationDestination *_destination;
    unsigned int _method;
    UIViewController *_presentedViewController;
    id <FBComposerPickerController> _pickerController;
    FBComposerNavigationNodePopoverControllerInfo *_popoverControllerInfo;
    NSMutableArray *_childrenNodes;
}

@property(readonly, nonatomic) NSMutableArray *childrenNodes; // @synthesize childrenNodes=_childrenNodes;
@property(retain, nonatomic) FBComposerNavigationNodePopoverControllerInfo *popoverControllerInfo; // @synthesize popoverControllerInfo=_popoverControllerInfo;
@property(readonly, nonatomic) id <FBComposerPickerController> pickerController; // @synthesize pickerController=_pickerController;
@property(readonly, nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) unsigned int method; // @synthesize method=_method;
@property(readonly, nonatomic) FBComposerNavigationDestination *destination; // @synthesize destination=_destination;
@property(nonatomic) __weak FBComposerNavigationNode *parentNode; // @synthesize parentNode=_parentNode;
- (void).cxx_destruct;
- (id)initWithParentNode:(id)arg1 destination:(id)arg2 method:(unsigned int)arg3 presentedViewController:(id)arg4 pickerController:(id)arg5;

@end

