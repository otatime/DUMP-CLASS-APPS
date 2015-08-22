//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBContactSearchGroupParticipant : FBValueObject <NSCopying>
{
    NSString *_fbid;
    NSString *_name;
    NSString *_email;
}

@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *fbid; // @synthesize fbid=_fbid;
- (void).cxx_destruct;
- (id)initWithFbid:(id)arg1 name:(id)arg2 email:(id)arg3;

@end

