//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UITableViewCell;

@interface NIDrawRectBlockView : UIView
{
    CDUnknownBlockType _block;
    id _object;
    UITableViewCell *_cell;
}

@property(nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
