//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonIndexAbstractSyncIndexIterator.h"

@class ComGoogleCumulusSyncClientMemoryFtsSegment, ComGoogleCumulusSyncClientMemorySegment_TermDocIterator;

@interface ComGoogleCumulusSyncClientMemoryFtsSegment_PhraseIterator : ComGoogleCumulusCommonIndexAbstractSyncIndexIterator
{
    ComGoogleCumulusSyncClientMemoryFtsSegment *this$0_;
    ComGoogleCumulusSyncClientMemorySegment_TermDocIterator *firstTokenIterator_;
    BOOL partial_;
    id <JavaUtilIterator> phraseIterator_;
    id <JavaUtilCollection> phraseTokens_;
}

- (void)dealloc;
- (BOOL)confirmPhraseMatchWithJavaUtilIterator:(id)arg1 withIntArray:(id)arg2 withJavaUtilList:(id)arg3 withBoolean:(BOOL)arg4;
- (id)verifyPrefixMatchWithNSString:(id)arg1 withIntArray:(id)arg2 withJavaUtilList:(id)arg3;
- (id)verifyTokenMatchWithNSString:(id)arg1 withIntArray:(id)arg2 withJavaUtilList:(id)arg3;
- (id)popFirstToken;
- (BOOL)advanceToInternal;
- (id)initWithComGoogleCumulusSyncClientMemoryFtsSegment:(id)arg1 withJavaUtilCollection:(id)arg2 withBoolean:(BOOL)arg3;

@end
