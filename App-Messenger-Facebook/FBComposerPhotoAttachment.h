//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface FBComposerPhotoAttachment : NSObject <NSCopying, NSCoding>
{
    id <FBPhotoAttachmentProtocol> _attachment;
}

@property(readonly, nonatomic) id <FBPhotoAttachmentProtocol> attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttachment:(id)arg1;

@end

