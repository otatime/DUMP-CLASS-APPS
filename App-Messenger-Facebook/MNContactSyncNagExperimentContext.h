//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface MNContactSyncNagExperimentContext : FBExperimentContext
{
    BOOL _shouldPresentContactSyncPrimerDialogNag;
    BOOL _shouldPresentContactSyncInstructionsNag;
    BOOL _shouldPresentContactSyncNagBeforePushNag;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL shouldPresentContactSyncNagBeforePushNag; // @synthesize shouldPresentContactSyncNagBeforePushNag=_shouldPresentContactSyncNagBeforePushNag;
@property(readonly, nonatomic) BOOL shouldPresentContactSyncInstructionsNag; // @synthesize shouldPresentContactSyncInstructionsNag=_shouldPresentContactSyncInstructionsNag;
@property(readonly, nonatomic) BOOL shouldPresentContactSyncPrimerDialogNag; // @synthesize shouldPresentContactSyncPrimerDialogNag=_shouldPresentContactSyncPrimerDialogNag;

@end

