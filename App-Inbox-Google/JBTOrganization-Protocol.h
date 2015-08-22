//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTSmartMailComponent.h"
#import "JavaObject.h"
#import "NSObject.h"

@class JBTOrganization_OpenStateEnum, NSString;

@protocol JBTOrganization <JBTSmartMailComponent, NSObject, JavaObject>
- (id <JBTImage>)getLogo;
- (id <JBTTime>)getNextBusinessHourTimeChange;
- (JBTOrganization_OpenStateEnum *)getOpenState;
- (BOOL)isOpen;
- (BOOL)hasBusinessHours;
- (id <JBTPhoneNumber>)getPhoneNumber;
- (id <JBTAddress>)getAddress;
- (NSString *)getUrl;
- (NSString *)getName;
@end
