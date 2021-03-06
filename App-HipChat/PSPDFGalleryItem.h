//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString, NSURL, PSPDFGalleryItemConfiguration;

@interface PSPDFGalleryItem : NSObject
{
    BOOL _controlsEnabled;
    NSURL *_contentURL;
    NSString *_caption;
    NSDictionary *_options;
    unsigned int _contentState;
    id _content;
    NSError *_error;
    float _progress;
    PSPDFGalleryItemConfiguration *_configuration;
}

+ (Class)itemClassFromFileCategory:(int)arg1;
+ (Class)itemClassFromLinkType:(unsigned char)arg1;
+ (Class)itemClassFromType:(id)arg1;
+ (id)optionsForAnnotation:(id)arg1;
+ (id)itemFromLinkAnnotation:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)itemFromLinkAnnotation:(id)arg1 error:(id *)arg2;
+ (id)itemsFromJSONData:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)itemsFromJSONData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) PSPDFGalleryItemConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) BOOL controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id content; // @synthesize content=_content;
@property(nonatomic) unsigned int contentState; // @synthesize contentState=_contentState;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void).cxx_destruct;
- (id)resolveItemToDifferentItemClass:(Class)arg1;
@property(readonly, nonatomic, getter=hasValidContent) BOOL validContent;
- (void)setContent:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithContentURL:(id)arg1 caption:(id)arg2 options:(id)arg3;
- (id)init;

@end

