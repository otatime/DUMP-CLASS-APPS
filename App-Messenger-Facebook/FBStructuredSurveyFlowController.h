//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMemStructuredSurvey, FBStructuredSurveyState, NSNumber;

@interface FBStructuredSurveyFlowController : NSObject
{
    FBMemStructuredSurvey *_survey;
    FBStructuredSurveyState *_state;
    NSNumber *_totalQuestionsInSurvey;
}

- (void).cxx_destruct;
- (void)storeAnswers:(id)arg1 forQuestions:(id)arg2;
- (id)questionsForCurrentState;
- (id)_seenQuestionIDs;
- (unsigned int)nextQuestionNumber;
- (id)_currentPage;
- (BOOL)isFinalPage;
- (unsigned int)currentPageIndex;
- (unsigned int)totalQuestionsInSurvey;
@property(readonly, nonatomic) FBStructuredSurveyState *state;
@property(readonly, nonatomic) __weak FBMemStructuredSurvey *survey;
- (id)initWithSurvey:(id)arg1;

@end
