//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSAttributedString, NSObject<OS_dispatch_queue>, NSString, QTMColorGroup, UIColor, UIImage;

@interface GOOHUDMessage : NSObject <NSCopying>
{
    BOOL _hasSetTextAlignment;
    int _textAlignment;
    NSAttributedString *_attributedText;
    UIColor *_backgroundColor;
    QTMColorGroup *_colorGroup;
    UIImage *_image;
    NSArray *_actions;
    int _displayType;
    CDUnknownBlockType _completionHandler;
    NSString *_category;
    NSString *_accessibilityLabel;
    double _duration;
}

+ (id)messageWithAttributedText:(id)arg1;
+ (id)messageWithText:(id)arg1;
@property(nonatomic) BOOL hasSetTextAlignment; // @synthesize hasSetTextAlignment=_hasSetTextAlignment;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) QTMColorGroup *colorGroup; // @synthesize colorGroup=_colorGroup;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)executeActionHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeCompletionHandlerWithUserInteraction:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *voiceNotificationText;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)viewClass;
- (id)init;

@end
