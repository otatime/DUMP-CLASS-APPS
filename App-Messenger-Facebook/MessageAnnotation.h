//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class FBMMutableMessage, FBMParticipantNameFormatter, NSString;

@interface MessageAnnotation : NSObject <MKAnnotation>
{
    FBMMutableMessage *_message;
    double _latitude;
    double _longitude;
    FBMParticipantNameFormatter *_nameFormatter;
}

@property(retain, nonatomic) FBMParticipantNameFormatter *nameFormatter; // @synthesize nameFormatter=_nameFormatter;
@property(readonly, nonatomic) FBMMutableMessage *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 nameFormatter:(id)arg2 latitude:(double)arg3 longitude:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

