//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class JBTCContactInferenceInfo, JBTCContactRef_KindEnum, JBTCContactRef_TypeEnum, JCSGooglePlusData, NSString;

@protocol JBTCContactRefOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JBTCContactInferenceInfo *)getContactInferenceInfo;
- (BOOL)hasContactInferenceInfo;
- (BOOL)getInferred;
- (BOOL)hasInferred;
- (JBTCContactRef_KindEnum *)getKind;
- (BOOL)hasKind;
- (double)getEmailAffinity;
- (BOOL)hasEmailAffinity;
- (JCSGooglePlusData *)getGooglePlusData;
- (BOOL)hasGooglePlusData;
- (NSString *)getLabel;
- (BOOL)hasLabel;
- (NSString *)getName;
- (BOOL)hasName;
- (NSString *)getRef;
- (BOOL)hasRef;
- (JBTCContactRef_TypeEnum *)getType;
- (BOOL)hasType;
@end
