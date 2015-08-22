//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GBTOutOfBoxPageDescription.h"

@class BTMOutOfBoxPageStyle, NSString, UIImage;

@interface GBTOutOfBoxTablePageDescription : NSObject <GBTOutOfBoxPageDescription>
{
    BTMOutOfBoxPageStyle *style_;
    NSString *title_;
    NSString *text_;
    UIImage *icon_;
    id <UITableViewDataSource> dataSource_;
    unsigned int pageId_;
}

+ (id)pageWithStyle:(id)arg1 title:(id)arg2 text:(id)arg3 icon:(id)arg4 dataSource:(id)arg5 pageId:(unsigned int)arg6;
+ (Class)rendererClass;
@property(readonly, nonatomic) unsigned int pageId; // @synthesize pageId=pageId_;
@property(readonly, nonatomic) __weak id <UITableViewDataSource> dataSource; // @synthesize dataSource=dataSource_;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=icon_;
@property(readonly, nonatomic) NSString *text; // @synthesize text=text_;
@property(readonly, nonatomic) NSString *title; // @synthesize title=title_;
@property(readonly, nonatomic) BTMOutOfBoxPageStyle *style; // @synthesize style=style_;
- (void).cxx_destruct;
- (BOOL)isTablePage;
- (id)initWithStyle:(id)arg1 title:(id)arg2 text:(id)arg3 icon:(id)arg4 dataSource:(id)arg5 pageId:(unsigned int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
