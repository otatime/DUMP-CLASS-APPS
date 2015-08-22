//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaSqlSQLWarning.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface JavaSqlDataTruncation : JavaSqlSQLWarning <JavaIoSerializable>
{
    int index_;
    BOOL parameter_;
    BOOL read_;
    int dataSize_;
    int transferSize_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (int)getTransferSize;
- (BOOL)getRead;
- (BOOL)getParameter;
- (int)getIndex;
- (int)getDataSize;
- (id)initWithInt:(int)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 withInt:(int)arg4 withInt:(int)arg5 withJavaLangThrowable:(id)arg6;
- (id)initWithInt:(int)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 withInt:(int)arg4 withInt:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
