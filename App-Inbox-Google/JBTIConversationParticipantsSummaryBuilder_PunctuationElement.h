//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTParticipantsSummary_Element.h"

@class JBTParticipantsSummary_Element_TypeEnum, NSString;

@interface JBTIConversationParticipantsSummaryBuilder_PunctuationElement : NSObject <JBTParticipantsSummary_Element>
{
    NSString *text_;
    JBTParticipantsSummary_Element_TypeEnum *type_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)getLength;
- (id)getText;
- (id)getType;
- (id)initWithJBTParticipantsSummary_Element_TypeEnum:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
