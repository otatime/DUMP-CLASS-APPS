//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilZipInflaterInputStream.h"

#import "JavaUtilZipZipConstants.h"

@class IOSByteArray, IOSCharArray, JavaUtilZipCRC32, JavaUtilZipZipEntry, NSString;

@interface JavaUtilZipZipInputStream : JavaUtilZipInflaterInputStream <JavaUtilZipZipConstants>
{
    BOOL entriesEnd_;
    BOOL hasDD_;
    int entryIn_;
    int inRead_;
    int lastRead_;
    JavaUtilZipZipEntry *currentEntry_;
    IOSByteArray *hdrBuf_;
    JavaUtilZipCRC32 *crc_;
    IOSByteArray *nameBuf_;
    IOSCharArray *charBuf_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)checkClosed;
- (id)createZipEntryWithNSString:(id)arg1;
- (int)available;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)peekShortWithInt:(int)arg1;
- (id)getNextEntry;
- (void)readAndVerifyDataDescriptorWithInt:(int)arg1 withInt:(int)arg2;
- (void)closeEntry;
- (void)close;
- (id)initWithJavaIoInputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

