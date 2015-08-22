//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSMutableData, NSString;

@interface GCDWebServerMIMEStreamParser : NSObject
{
    NSData *_boundary;
    NSString *_defaultcontrolName;
    int _state;
    NSMutableData *_data;
    NSMutableArray *_arguments;
    NSMutableArray *_files;
    NSString *_controlName;
    NSString *_fileName;
    NSString *_contentType;
    NSString *_tmpPath;
    int _tmpFile;
    GCDWebServerMIMEStreamParser *_subParser;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)isAtEnd;
- (BOOL)appendBytes:(const void *)arg1 length:(unsigned int)arg2;
- (BOOL)_parseData;
- (void)dealloc;
- (id)initWithBoundary:(id)arg1 defaultControlName:(id)arg2 arguments:(id)arg3 files:(id)arg4;

@end
