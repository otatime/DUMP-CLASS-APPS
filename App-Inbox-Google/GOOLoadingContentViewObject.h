//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GOOContentViewObject.h"
#import "NICellObject.h"

@class NSString;

@interface GOOLoadingContentViewObject : NSObject <NICellObject, GOOContentViewObject>
{
    NSString *_accessibilityIdentifier;
    struct UIEdgeInsets _padding;
}

+ (id)loadingContentViewObject;
@property(retain, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)init;
- (Class)cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned int elementKind;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
