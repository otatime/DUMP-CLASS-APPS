//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBComposerAlbumAttachmentBuilder : NSObject
{
    NSString *_title;
    NSString *_caption;
}

+ (id)composerAlbumAttachmentFromExistingComposerAlbumAttachment:(id)arg1;
+ (id)composerAlbumAttachment;
- (void).cxx_destruct;
- (id)withCaption:(id)arg1;
- (id)withTitle:(id)arg1;
- (id)build;

@end
