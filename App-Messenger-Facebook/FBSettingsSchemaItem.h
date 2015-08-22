//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FBSettingsSchemaItem : NSObject
{
    NSMutableDictionary *_data;
    NSString *_type;
    NSString *_key;
}

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (BOOL)enabled;
- (int)storeType;
- (void)setSettingObject:(id)arg1;
- (id)settingObject;
- (id)settingString;
- (id)settingKey;
- (id)settingTitle;
- (void)objectFromUserPreference:(id)arg1 sessionPreference:(id)arg2 userDefaults:(id)arg3 storeExternal:(id)arg4;
- (void)objectToUserPreference:(id)arg1 sessionPreference:(id)arg2 userDefaults:(id)arg3 storeExternal:(id)arg4;
- (id)initWithData:(id)arg1;

@end
