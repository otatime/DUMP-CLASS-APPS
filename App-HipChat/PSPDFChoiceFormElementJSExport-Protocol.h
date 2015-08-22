//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSArray, NSNumber, NSObject<NSCopying>, NSString;

@protocol PSPDFChoiceFormElementJSExport <JSExport>
@property(nonatomic) BOOL multipleSelection;
@property(nonatomic) BOOL doNotSpellCheck;
@property(nonatomic) BOOL commitOnSelChange;
@property(copy, nonatomic) NSObject<NSCopying> *currentValueIndices;
@property(readonly, copy, nonatomic) NSString *js_type;
- (void)insertItemAt:(id)arg1 exportValue:(id)arg2 index:(NSNumber *)arg3;
- (id)getItemAt:(int)arg1 exportValue:(NSNumber *)arg2;
- (void)deleteItemAt:(NSNumber *)arg1;
- (void)clearItems;
- (void)setItems:(NSArray *)arg1;
- (unsigned int)numItems;

@optional
- (void)insertItemAt:(id)arg1 exportValue:(id)arg2 index:(NSNumber *)arg3 __JS_EXPORT_AS__insertItemAt:(id)arg4;
- (id)getItemAt:(int)arg1 exportValue:(NSNumber *)arg2 __JS_EXPORT_AS__getItemAt:(id)arg3;
@end
