//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MNTableViewCellStyle;

@interface MNPeoplePickerStyleConfiguration : NSObject <NSCopying>
{
    CDUnknownBlockType _peoplePickerViewCreationBlock;
    MNTableViewCellStyle *_peopleCellStyle;
}

@property(readonly, copy, nonatomic) MNTableViewCellStyle *peopleCellStyle; // @synthesize peopleCellStyle=_peopleCellStyle;
@property(readonly, copy, nonatomic) CDUnknownBlockType peoplePickerViewCreationBlock; // @synthesize peoplePickerViewCreationBlock=_peoplePickerViewCreationBlock;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPeopleCellStyle:(id)arg1 peoplePickerViewCreationBlock:(CDUnknownBlockType)arg2;

@end

