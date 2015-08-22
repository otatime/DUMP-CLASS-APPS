//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewControllerPresenter.h"

#import "CBLNuxViewControllerDelegate.h"

@class CBLExperience, NSString;

@interface CBLNuxViewControllerPresenter : CBLBaseViewControllerPresenter <CBLNuxViewControllerDelegate>
{
    CBLExperience *_experience;
}

@property(retain, nonatomic) CBLExperience *experience; // @synthesize experience=_experience;
- (void).cxx_destruct;
- (void)nuxViewControllerDidCancel:(id)arg1;
- (void)nuxViewControllerDidFinish:(id)arg1;
- (void)presentNuxExperience:(id)arg1;
- (void)presentHost:(id)arg1 withPath:(id)arg2 withParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
