//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountContext, Message, NSAttributedString, NSMutableAttributedString, NSString, UIFont;

@interface ChatDisplayMessage : NSObject
{
    NSMutableAttributedString *_messageBodyString;
    NSAttributedString *_messageNameString;
    NSAttributedString *_messageDateString;
    id <ChatDisplayMessageDelegate> _displayMessageDelegate;
    Message *_message;
    int _bodyFontType;
    AccountContext *_accountContext;
    UIFont *_bodyFont;
    NSString *_messageSubstitution;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *messageSubstitution; // @synthesize messageSubstitution=_messageSubstitution;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) int bodyFontType; // @synthesize bodyFontType=_bodyFontType;
@property(retain, nonatomic) Message *message; // @synthesize message=_message;
@property(nonatomic) __weak id <ChatDisplayMessageDelegate> displayMessageDelegate; // @synthesize displayMessageDelegate=_displayMessageDelegate;
@property(copy, nonatomic) NSAttributedString *messageDateString; // @synthesize messageDateString=_messageDateString;
@property(copy, nonatomic) NSAttributedString *messageNameString; // @synthesize messageNameString=_messageNameString;
@property(retain, nonatomic) NSMutableAttributedString *messageBodyString; // @synthesize messageBodyString=_messageBodyString;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToChatDisplayMessage:(id)arg1;
- (void)pruneTextToRemove;
- (id)centeredParagraphStyle;
- (void)applyCommandStyleWithCommandMatch:(id)arg1;
- (void)applyHTMLStyleWithHTMLMatch:(id)arg1;
- (void)applyEmoticonStyleWithEmoticonMatch:(id)arg1;
- (void)applyMentionStyleWithMentionMatch:(id)arg1;
- (void)styleMessageResults:(id)arg1;
- (id)matchersForMessageType:(int)arg1;
- (int)messageTypeWithTypeString:(id)arg1;
- (id)parseMessage:(id)arg1 withBody:(id)arg2;
- (id)createMessageDateString;
- (id)createDisplayNameString;
- (void)createMessageBodyString;
- (id)initWithAccountContext:(id)arg1 message:(id)arg2 substitution:(id)arg3;

@end
