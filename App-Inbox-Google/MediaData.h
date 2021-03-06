//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSString, NSURL, UIImage;

@interface MediaData : NSObject <NSCopying>
{
    BOOL allowsMultiSelect_;
    NSData *fileData_;
    NSString *fileName_;
    NSURL *fileURL_;
    id <JBTMedia> media_;
    UIImage *thumbnail_;
    unsigned int type_;
    NSString *uniqueID_;
}

@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=uniqueID_;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=type_;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=thumbnail_;
@property(readonly, nonatomic) id <JBTMedia> media; // @synthesize media=media_;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=fileData_;
@property(readonly, nonatomic) BOOL allowsMultiSelect; // @synthesize allowsMultiSelect=allowsMultiSelect_;
- (void).cxx_destruct;
- (BOOL)allowsMultiSelectForMedia:(id)arg1;
- (unsigned int)mediaDataTypeFromMedia:(id)arg1;
- (id)fileURLFromMedia:(id)arg1;
- (id)fileNameFromMedia:(id)arg1;
@property(readonly, nonatomic) BOOL requiresThumbnail; // @dynamic requiresThumbnail;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=fileURL_;
@property(readonly, copy, nonatomic) NSString *fileName; // @synthesize fileName=fileName_;
- (void)loadFileData:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL shouldLoadFileData;
@property(readonly, nonatomic) BOOL shouldLoadThumbnail;
@property(readonly, copy, nonatomic) NSURL *thumbnailURL;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, nonatomic, getter=isInsertable) BOOL insertable;
@property(readonly, nonatomic) BOOL allowsInline;
- (id)initWithMedia:(id)arg1;
- (id)initWithType:(unsigned int)arg1 allowsMultiSelect:(BOOL)arg2 thumbnail:(id)arg3 fileName:(id)arg4 fileURL:(id)arg5;

@end

