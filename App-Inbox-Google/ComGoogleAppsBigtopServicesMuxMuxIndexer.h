//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonIndexIndexer.h"

@class ComGoogleAppsBigtopServicesMuxMuxClientRegistry, ComGoogleCumulusCommonIndexIndexSpec, NSString;

@interface ComGoogleAppsBigtopServicesMuxMuxIndexer : NSObject <ComGoogleCumulusCommonIndexIndexer>
{
    ComGoogleCumulusCommonIndexIndexSpec *indexSpec_;
    ComGoogleAppsBigtopServicesMuxMuxClientRegistry *muxRegistry_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)getRankWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1;
- (id)tokenizeWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1 withJavaUtilSet:(id)arg2 withJavaUtilCollection:(id)arg3 withComGoogleCumulusCommonIndexTokenizer_IndexUpdate:(id)arg4;
- (id)initWithComGoogleCumulusCommonIndexIndexSpec:(id)arg1 withComGoogleAppsBigtopServicesMuxMuxClientRegistry:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
