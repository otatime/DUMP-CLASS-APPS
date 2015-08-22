//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangComparable.h"

@class ComGoogleCumulusSyncClientMemorySegment, IOSIntArray, NSString;

@interface ComGoogleCumulusSyncClientMemorySegment_TermDocIterator : NSObject <JavaLangComparable>
{
    ComGoogleCumulusSyncClientMemorySegment *this$0_;
    id <JavaUtilList> sortedDeletedDocIds_;
    id <JavaUtilIterator> valueIterator_;
    IOSIntArray *currentDocId_;
    id currentAuxiliaryData_;
    int deletedDocIndex_;
    IOSIntArray *currentDeletedDocId_;
}

- (void)dealloc;
- (int)compareToWithId:(id)arg1;
- (BOOL)advance;
- (BOOL)hasValue;
- (id)getAuxiliaryData;
- (id)getDocId;
- (void)resetWithId:(id)arg1;
- (void)resetStateWithIntArray:(id)arg1;
- (id)initWithComGoogleCumulusSyncClientMemorySegment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
