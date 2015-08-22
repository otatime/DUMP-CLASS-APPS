//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

#import "CBLRemoteModelCollectionElement.h"

@class CBLUser, NSDate, NSString;

@interface CBLComment : CBLModelObject <CBLRemoteModelCollectionElement>
{
    CBLUser *_commenter;
    NSDate *_createdAt;
    NSString *_identifier;
    NSString *_text;
}

+ (id)propertyTransformerClasses;
+ (id)propertyAliases;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) CBLUser *commenter; // @synthesize commenter=_commenter;
- (void).cxx_destruct;
- (id)namespacedIdentifier;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

