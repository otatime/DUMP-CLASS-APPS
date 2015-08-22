//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, PSPDFSectionModel, UIView;

@interface PSPDFCellModel : NSObject
{
    BOOL _editing;
    PSPDFSectionModel *_section;
    NSString *_title;
    NSString *_subtitle;
    UIView *_accessoryView;
    Class _cellClass;
    int _selectionStyle;
    int _accessoryType;
    float _height;
    NSDictionary *_userInfo;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _createBlock;
    CDUnknownBlockType _actionBlock;
    NSArray *_editingCellModels;
}

+ (id)cellWithTitle:(id)arg1;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(copy, nonatomic) NSArray *editingCellModels; // @synthesize editingCellModels=_editingCellModels;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) CDUnknownBlockType createBlock; // @synthesize createBlock=_createBlock;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) int accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) int selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak PSPDFSectionModel *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (float)heightForWidth:(float)arg1;
@property(nonatomic, getter=isChecked) BOOL checked;
- (id)description;
- (id)init;

@end
