//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class MNMessagesSyncAttachment, MNMessagesSyncMessageMetadata, NSString;

@interface MNMessagesSyncDeltaThreadImage : NSObject <TBase, NSCoding>
{
    MNMessagesSyncMessageMetadata *__messageMetadata;
    MNMessagesSyncAttachment *__image;
    BOOL __messageMetadata_isset;
    BOOL __image_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetImage;
- (BOOL)imageIsSet;
@property(retain, nonatomic, getter=image, setter=setImage:) MNMessagesSyncAttachment *image;
- (void)unsetMessageMetadata;
- (BOOL)messageMetadataIsSet;
@property(retain, nonatomic, getter=messageMetadata, setter=setMessageMetadata:) MNMessagesSyncMessageMetadata *messageMetadata;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageMetadata:(id)arg1 image:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

