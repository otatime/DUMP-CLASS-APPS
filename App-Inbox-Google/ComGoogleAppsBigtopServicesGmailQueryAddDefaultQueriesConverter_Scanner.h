//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncQueryTreeNodeTreeTraverser.h"

@class ComGoogleAppsBigtopServicesGmailQueryAddDefaultQueriesConverter;

@interface ComGoogleAppsBigtopServicesGmailQueryAddDefaultQueriesConverter_Scanner : ComGoogleAppsBigtopSyncQueryTreeNodeTreeTraverser
{
    ComGoogleAppsBigtopServicesGmailQueryAddDefaultQueriesConverter *this$0_;
    BOOL mentionsSpam_;
    BOOL mentionsTrash_;
    BOOL mentionsChats_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopServicesGmailQueryAddDefaultQueriesConverter:(id)arg1;
- (id)maybeWrapWithComGoogleAppsBigtopSyncQueryNodesNode:(id)arg1;
- (id)onFieldEqualsNodeWithComGoogleAppsBigtopSyncQueryNodesFieldEqualsNode:(id)arg1;

@end
