//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoSerializable.h"
#import "JavaObject.h"
#import "NSObject.h"

@protocol JavaIoExternalizable <JavaIoSerializable, NSObject, JavaObject>
- (void)writeExternalWithJavaIoObjectOutput:(id <JavaIoObjectOutput>)arg1;
- (void)readExternalWithJavaIoObjectInput:(id <JavaIoObjectInput>)arg1;
@end
