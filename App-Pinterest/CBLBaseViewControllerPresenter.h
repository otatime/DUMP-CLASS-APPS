//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CBLBaseViewControllerPresenter : NSObject
{
    id <CBLPresenterDelegate> _presenterDelegate;
    id _viewControllerDelegate;
}

@property(nonatomic) __weak id viewControllerDelegate; // @synthesize viewControllerDelegate=_viewControllerDelegate;
@property(nonatomic) id <CBLPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate=_presenterDelegate;
- (void).cxx_destruct;
- (struct CGRect)encodedFromRectInQueryParameters:(id)arg1;
- (void)presentHost:(id)arg1 withPath:(id)arg2 withParameters:(id)arg3;

@end

