//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSAttributedString, NSString, NSURL;

@interface MNCommerceThreadDetailsOrderViewModel : FBValueObject <NSCopying>
{
    NSString *_orderId;
    NSString *_name;
    NSAttributedString *_desc;
    NSURL *_previewURL;
}

@property(readonly, copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(readonly, copy, nonatomic) NSAttributedString *desc; // @synthesize desc=_desc;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)initWithOrderId:(id)arg1 name:(id)arg2 desc:(id)arg3 previewURL:(id)arg4;

@end

