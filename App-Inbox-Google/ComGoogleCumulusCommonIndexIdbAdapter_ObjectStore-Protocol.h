//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusCommonIndexIdbAdapter_CursorDirectionEnum, NSString;

@protocol ComGoogleCumulusCommonIndexIdbAdapter_ObjectStore <NSObject, JavaObject>
- (id <JavaUtilList>)getIndexNames;
- (id <ComGoogleCumulusCommonIndexIdbAdapter_Request>)delete__WithComGoogleCumulusCommonIndexIdbAdapter_Key:(id <ComGoogleCumulusCommonIndexIdbAdapter_Key>)arg1;
- (id <ComGoogleCumulusCommonIndexIdbAdapter_Request>)putWithComGoogleCumulusCommonIndexIdbAdapter_Value:(id <ComGoogleCumulusCommonIndexIdbAdapter_Value>)arg1 withComGoogleCumulusCommonIndexIdbAdapter_Key:(id <ComGoogleCumulusCommonIndexIdbAdapter_Key>)arg2;
- (id <ComGoogleCumulusCommonIndexIdbAdapter_Request>)getWithComGoogleCumulusCommonIndexIdbAdapter_Key:(id <ComGoogleCumulusCommonIndexIdbAdapter_Key>)arg1;
- (id <ComGoogleCumulusCommonIndexIdbAdapter_Index>)indexWithNSString:(NSString *)arg1;
- (id <ComGoogleCumulusCommonIndexIdbAdapter_Index>)createIndexWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withComGoogleCumulusCommonIndexIdbAdapter_IndexParameters:(id <ComGoogleCumulusCommonIndexIdbAdapter_IndexParameters>)arg3;
- (id <ComGoogleCumulusCommonIndexIdbAdapter_Request>)openCursorWithComGoogleCumulusCommonIndexIdbAdapter_KeyRange:(id <ComGoogleCumulusCommonIndexIdbAdapter_KeyRange>)arg1 withComGoogleCumulusCommonIndexIdbAdapter_CursorDirectionEnum:(ComGoogleCumulusCommonIndexIdbAdapter_CursorDirectionEnum *)arg2;
- (id <ComGoogleCumulusCommonIndexIdbAdapter_Request>)openCursorWithComGoogleCumulusCommonIndexIdbAdapter_KeyRange:(id <ComGoogleCumulusCommonIndexIdbAdapter_KeyRange>)arg1;
@end

