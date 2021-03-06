//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonConfigConfiguration_Bundle.h"

@class NSString;

@interface ComGoogleCumulusFrameworkConfigClientIndexedDbBundle : NSObject <ComGoogleCumulusCommonConfigConfiguration_Bundle>
{
    NSString *databaseName_;
    int schemaMinorVersion_;
    int lastAcceptedMinorVersion_;
    id <ComGoogleCumulusApiPluginStoreComponentFactory> indexSpecFactory_;
    id <JavaUtilCollection> indexFields_;
    id <ComGoogleCumulusSyncClientIndexPreprocessor> indexPreprocessor_;
    id <ComGoogleCumulusCommonIndexIndexer> indexer_;
    id <ComGoogleCumulusApiPluginStoreComponentFactory> asyncIndexerFactory_;
    id <JavaUtilCollection> optimizedSliceGroups_;
}

+ (void)initialize;
- (void)dealloc;
- (void)addToWithComGoogleCumulusCommonConfigConfiguration_Builder:(id)arg1;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaUtilCollection:(id)arg4 withComGoogleCumulusSyncClientIndexPreprocessor:(id)arg5 withComGoogleCumulusCommonIndexIndexer:(id)arg6 withJavaUtilCollection:(id)arg7;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withComGoogleCumulusApiPluginStoreComponentFactory:(id)arg4 withComGoogleCumulusApiPluginStoreComponentFactory:(id)arg5 withComGoogleCumulusSyncClientIndexPreprocessor:(id)arg6 withJavaUtilCollection:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

