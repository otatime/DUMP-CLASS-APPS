//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBComposerAuthor, NSDictionary, NSString;

@interface FBCompositionModelBundle : FBValueObject <NSCopying, NSCoding>
{
    FBComposerAuthor *_author;
    NSString *_editedStoryCacheID;
    int _editedStoryEditHistoryTotalCount;
    NSDictionary *_mentionedGraphQLTypeNamesByGraphQLID;
    NSString *_sourceType;
    unsigned int _postDestinationType;
}

@property(readonly, nonatomic) unsigned int postDestinationType; // @synthesize postDestinationType=_postDestinationType;
@property(readonly, copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, copy, nonatomic) NSDictionary *mentionedGraphQLTypeNamesByGraphQLID; // @synthesize mentionedGraphQLTypeNamesByGraphQLID=_mentionedGraphQLTypeNamesByGraphQLID;
@property(readonly, nonatomic) int editedStoryEditHistoryTotalCount; // @synthesize editedStoryEditHistoryTotalCount=_editedStoryEditHistoryTotalCount;
@property(readonly, copy, nonatomic) NSString *editedStoryCacheID; // @synthesize editedStoryCacheID=_editedStoryCacheID;
@property(readonly, copy, nonatomic) FBComposerAuthor *author; // @synthesize author=_author;
- (void).cxx_destruct;
- (id)initWithAuthor:(id)arg1 editedStoryCacheID:(id)arg2 editedStoryEditHistoryTotalCount:(int)arg3 mentionedGraphQLTypeNamesByGraphQLID:(id)arg4 sourceType:(id)arg5 postDestinationType:(unsigned int)arg6;

@end

