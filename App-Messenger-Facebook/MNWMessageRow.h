//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBMMessageDescriptor, FBMStringWithRedactedDescription, MNWMessageAttachment, NSString;

@interface MNWMessageRow : FBValueObject <NSCopying, NSCoding>
{
    BOOL _isFromMe;
    FBMMessageDescriptor *_messageDescriptor;
    NSString *_senderId;
    FBMStringWithRedactedDescription *_messageBody;
    MNWMessageAttachment *_attachment;
    unsigned int _sendState;
}

@property(readonly, nonatomic) unsigned int sendState; // @synthesize sendState=_sendState;
@property(readonly, copy, nonatomic) MNWMessageAttachment *attachment; // @synthesize attachment=_attachment;
@property(readonly, copy, nonatomic) FBMStringWithRedactedDescription *messageBody; // @synthesize messageBody=_messageBody;
@property(readonly, nonatomic) BOOL isFromMe; // @synthesize isFromMe=_isFromMe;
@property(readonly, copy, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(readonly, copy, nonatomic) FBMMessageDescriptor *messageDescriptor; // @synthesize messageDescriptor=_messageDescriptor;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMessageDescriptor:(id)arg1 senderId:(id)arg2 isFromMe:(BOOL)arg3 messageBody:(id)arg4 attachment:(id)arg5 sendState:(unsigned int)arg6;
- (id)initWithCoder:(id)arg1;

@end

