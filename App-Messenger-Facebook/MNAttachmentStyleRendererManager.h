//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class FBLazyCreator, NSString;

@interface MNAttachmentStyleRendererManager : NSObject <FBSessionClassProvidable>
{
    FBLazyCreator *_styleMapProviderCreator;
}

- (void).cxx_destruct;
- (id)attachmentSnippetCreatorForStyle:(id)arg1;
- (id)attachmentViewFactoryForStyle:(id)arg1;
- (id)attachmentViewModelCreatorForStyle:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithAttachmentStyleMapProviderProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

