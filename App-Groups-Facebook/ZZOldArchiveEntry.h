//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZZArchiveEntry.h"

@class NSDate, NSString;

@interface ZZOldArchiveEntry : ZZArchiveEntry
{
    struct ZZCentralFileHeader *_centralFileHeader;
    struct ZZLocalFileHeader *_localFileHeader;
    unsigned int _encoding;
    int _encryptionMode;
}

- (id)newWriterCanSkipLocalFile:(BOOL)arg1;
- (struct CGDataProvider *)newDataProviderWithPassword:(id)arg1 error:(out id *)arg2;
- (id)newDataWithPassword:(id)arg1 error:(out id *)arg2;
- (id)newStreamWithPassword:(id)arg1 error:(out id *)arg2;
- (id)streamForData:(id)arg1 withPassword:(id)arg2 error:(out id *)arg3;
- (BOOL)checkEncryptionAndCompression:(out id *)arg1;
- (BOOL)check:(out id *)arg1;
@property(readonly, nonatomic) NSString *fileName;
@property(readonly, nonatomic) unsigned short fileMode;
@property(readonly, nonatomic) unsigned int uncompressedSize;
@property(readonly, nonatomic) unsigned int compressedSize;
@property(readonly, nonatomic) unsigned int crc32;
@property(readonly, nonatomic) NSDate *lastModified;
@property(readonly, nonatomic) BOOL encrypted;
@property(readonly, nonatomic) BOOL compressed;
- (unsigned short)compressionMethod;
- (id)stringWithBytes:(char *)arg1 length:(unsigned int)arg2;
- (id)fileData;
- (id)initWithCentralFileHeader:(struct ZZCentralFileHeader *)arg1 localFileHeader:(struct ZZLocalFileHeader *)arg2 encoding:(unsigned int)arg3;

@end

