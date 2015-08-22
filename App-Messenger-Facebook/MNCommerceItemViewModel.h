//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface MNCommerceItemViewModel : FBValueObject <NSCopying>
{
    BOOL _showPreview;
    NSString *_name;
    NSString *_metaline1;
    NSString *_metaline2;
    NSString *_metaline3;
    unsigned int _status;
    NSURL *_previewURL;
    unsigned int _style;
    NSURL *_targetURL;
}

@property(readonly, copy, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
@property(readonly, nonatomic) unsigned int style; // @synthesize style=_style;
@property(readonly, nonatomic) BOOL showPreview; // @synthesize showPreview=_showPreview;
@property(readonly, copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(readonly, nonatomic) unsigned int status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *metaline3; // @synthesize metaline3=_metaline3;
@property(readonly, copy, nonatomic) NSString *metaline2; // @synthesize metaline2=_metaline2;
@property(readonly, copy, nonatomic) NSString *metaline1; // @synthesize metaline1=_metaline1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 metaline1:(id)arg2 metaline2:(id)arg3 metaline3:(id)arg4 status:(unsigned int)arg5 previewURL:(id)arg6 showPreview:(BOOL)arg7 style:(unsigned int)arg8 targetURL:(id)arg9;

@end

