//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBCameraCloseEventHandler : NSObject
{
    id <FBCameraGenericEvent> _closeEvent;
    id <FBCameraCloseEventHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCameraCloseEventHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_closeButtonDidTap;
- (id)initWithCloseEvent:(id)arg1;

@end

