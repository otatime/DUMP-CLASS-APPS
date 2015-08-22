//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface RecommendationDetail : NSObject <TBase, NSCoding>
{
    NSString *__idString;
    NSString *__algoTag;
    NSString *__source;
    BOOL __idString_isset;
    BOOL __algoTag_isset;
    BOOL __source_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSource;
- (BOOL)sourceIsSet;
@property(retain, nonatomic, getter=source, setter=setSource:) NSString *source;
- (void)unsetAlgoTag;
- (BOOL)algoTagIsSet;
@property(retain, nonatomic, getter=algoTag, setter=setAlgoTag:) NSString *algoTag;
- (void)unsetIdString;
- (BOOL)idStringIsSet;
@property(retain, nonatomic, getter=idString, setter=setIdString:) NSString *idString;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdString:(id)arg1 algoTag:(id)arg2 source:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

