//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Visitor.h"

@class JavaLangStringBuilder, NSString;

@interface ComGoogleAppsBigtopSyncClientImplProducersElementProducerUtils_$1 : NSObject <ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Visitor>
{
    int indentCount_;
    JavaLangStringBuilder *val$builder_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJavaLangStringBuilder:(id)arg1;
- (BOOL)shouldVisitUpstreamProducersWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1;
- (void)exitWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1;
- (void)indent;
- (void)enterWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
