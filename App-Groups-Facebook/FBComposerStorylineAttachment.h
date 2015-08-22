//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface FBComposerStorylineAttachment : FBValueObject <NSCopying, NSCoding>
{
    NSString *_title;
    NSString *_coverPhotoURI;
    NSString *_storylinePayload;
}

@property(readonly, copy, nonatomic) NSString *storylinePayload; // @synthesize storylinePayload=_storylinePayload;
@property(readonly, copy, nonatomic) NSString *coverPhotoURI; // @synthesize coverPhotoURI=_coverPhotoURI;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 coverPhotoURI:(id)arg2 storylinePayload:(id)arg3;

@end
