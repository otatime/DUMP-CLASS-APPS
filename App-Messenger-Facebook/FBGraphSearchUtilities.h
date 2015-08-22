//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBGraphSearchUtilities : NSObject
{
}

+ (id)_getGrammarTypeFromEntityObject:(id)arg1;
+ (id)getGrammarTypeFromEntityModelObject:(id)arg1;
+ (id)getGrammarTypeFromEntityAvatar:(id)arg1;
+ (id)_shredFragments:(id)arg1;
+ (id)_structuredTextToUniqueString:(id)arg1;
+ (BOOL)structuredText:(id)arg1 isEqualToStructuredText:(id)arg2;
+ (id)handleTextAddAt:(unsigned int)arg1 text:(id)arg2 existingStructuredText:(id)arg3;
+ (id)handleTextDeleteAt:(struct _NSRange)arg1 existingStructuredText:(id)arg2;
+ (id)splitResultString:(id)arg1 includeSpace:(BOOL)arg2 pairQuote:(BOOL)arg3;
+ (id)_dedupeMe:(id)arg1 myFBID:(id)arg2;
+ (id)normalizeSemantic:(id)arg1 myFBID:(id)arg2;

@end

