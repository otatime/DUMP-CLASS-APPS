//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSBundle, NSDictionary, NSString;

@interface CardIOLocalizer : NSObject
{
    NSString *_languageOrLocale;
    NSBundle *_bundle;
    NSDictionary *_stringsDictionary;
    NSArray *_sortedKeys;
}

+ (void)preload;
+ (int)textAlignmentForLanguageOrLocale:(id)arg1;
+ (id)fallbackLocalizerForBundle:(id)arg1;
+ (id)localizerForLanguageOrLocale:(id)arg1 forBundle:(id)arg2;
@property(retain, nonatomic) NSArray *sortedKeys; // @synthesize sortedKeys=_sortedKeys;
@property(retain, nonatomic) NSDictionary *stringsDictionary; // @synthesize stringsDictionary=_stringsDictionary;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(copy, nonatomic) NSString *languageOrLocale; // @synthesize languageOrLocale=_languageOrLocale;
- (void).cxx_destruct;
- (id)filterOutCommonErrors:(id)arg1;
- (id)localizeString:(id)arg1 adaptedForCountry:(id)arg2;
- (id)initWithLanguageOrLocale:(id)arg1 forBundle:(id)arg2;

@end

