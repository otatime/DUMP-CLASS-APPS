//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaUtilTreeMap;

@interface ComGoogleCumulusSyncClientMemoryFieldIndex : NSObject
{
    JavaUtilTreeMap *index_;
    id <JavaUtilMap> docIdStrToFieldValue_;
}

- (void)dealloc;
- (id)init;
- (id)newHighFieldWithJavaLangComparable:(id)arg1;
- (id)newLowFieldWithJavaLangComparable:(id)arg1;
- (void)deleteDocumentWithIntArray:(id)arg1;
- (void)addWithInt:(int)arg1 withJavaLangComparable:(id)arg2;
- (void)addWithIntArray:(id)arg1 withJavaLangComparable:(id)arg2;
- (id)getRangeIterableWithJavaLangComparable:(id)arg1 withJavaLangComparable:(id)arg2 withInt:(int)arg3;
- (id)getRangeIterableWithJavaLangComparable:(id)arg1 withJavaLangComparable:(id)arg2;
- (id)getIterableWithJavaLangComparable:(id)arg1;

@end
