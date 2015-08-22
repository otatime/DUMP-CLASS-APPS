//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface MNGroupSuggestionItem : FBValueObject <NSCopying>
{
    unsigned int _type;
    NSString *_name;
    NSString *_title;
    NSString *_subtitle;
}

@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned int)arg1 name:(id)arg2 title:(id)arg3 subtitle:(id)arg4;

@end

