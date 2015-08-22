//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString, UIColor, UIFont;

@interface MNPaymentsTransferStatusModelForTransactionHistoryCell : FBValueObject <NSCopying>
{
    BOOL _shouldShowTimestamp;
    NSString *_statusText;
    UIColor *_statusTextColor;
    UIFont *_statusTextFont;
}

@property(readonly, nonatomic) BOOL shouldShowTimestamp; // @synthesize shouldShowTimestamp=_shouldShowTimestamp;
@property(readonly, copy, nonatomic) UIFont *statusTextFont; // @synthesize statusTextFont=_statusTextFont;
@property(readonly, copy, nonatomic) UIColor *statusTextColor; // @synthesize statusTextColor=_statusTextColor;
@property(readonly, copy, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
- (void).cxx_destruct;
- (id)initWithStatusText:(id)arg1 statusTextColor:(id)arg2 statusTextFont:(id)arg3 shouldShowTimestamp:(BOOL)arg4;

@end

