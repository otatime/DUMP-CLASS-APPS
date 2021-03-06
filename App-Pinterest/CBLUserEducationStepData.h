//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class CBLUserEducationStepBackgroundViewData, CBLUserEducationStepForegroundCardData;

@interface CBLUserEducationStepData : CBLModelObject
{
    CBLUserEducationStepBackgroundViewData *_backgroundViewData;
    CBLUserEducationStepForegroundCardData *_foregroundCardData;
    int _viewId;
}

+ (id)propertyAliases;
@property(readonly, nonatomic) int viewId; // @synthesize viewId=_viewId;
@property(retain) CBLUserEducationStepForegroundCardData *foregroundCardData; // @synthesize foregroundCardData=_foregroundCardData;
@property(retain) CBLUserEducationStepBackgroundViewData *backgroundViewData; // @synthesize backgroundViewData=_backgroundViewData;
- (void).cxx_destruct;

@end

