//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTEventListener.h"

@class JBTIItemsItemListImpl, NSString;

@interface JBTIItemsItemListImpl_DetailedProtoEventListener : NSObject <JBTEventListener>
{
    JBTIItemsItemListImpl *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTIItemsItemListImpl:(id)arg1;
- (void)onEventWithJBTEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

