//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTClusterConfig_Builder.h"

@class JBTCClusterIdentifier, JBTClusterConfig_ExplanatoryMessageTypeEnum, JBTClusterConfig_ThrottleIntervalEnum, JBTClusterConfig_VisibilityEnum, JBTClusterTypeEnum, NSString;

@interface JBTIClustersClusterConfigImpl_Builder : NSObject <JBTClusterConfig_Builder>
{
    id <JBTId> id__;
    JBTClusterTypeEnum *type_;
    NSString *labelId_;
    JBTClusterConfig_VisibilityEnum *visibility_;
    JBTClusterConfig_ThrottleIntervalEnum *throttleInterval_;
    long long firstThrottledMs_;
    JBTClusterConfig_ExplanatoryMessageTypeEnum *explanatoryMessageTypeToDisplay_;
    id <JavaUtilList> messagesHiddenFromUser_;
    id <JavaUtilList> attributesEditedByUser_;
    float priority_;
    BOOL suppressNotifications_;
    id <JBTTopic> topic_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    id <JBTTimeHelper> timeHelper_;
    JBTCClusterIdentifier *clusterIdentifier_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_topic_;
+ (id)__annotations_throttleInterval_;
+ (id)__annotations_getThrottleInterval;
+ (id)__annotations_setThrottleIntervalWithJBTClusterConfig_ThrottleIntervalEnum_withLong__params;
- (void)dealloc;
- (id)build;
- (id)setTopicWithJBTTopic:(id)arg1;
- (BOOL)getSuppressNotifications;
- (id)setSuppressNotificationsWithBoolean:(BOOL)arg1;
- (float)getPriority;
- (id)setExplanatoryMessageTypeToDisplayWithJBTClusterConfig_ExplanatoryMessageTypeEnum:(id)arg1;
- (id)getExplanatoryMessageTypeToDisplay;
- (id)getThrottleInterval;
- (void)setThrottleIntervalWithJBTClusterConfig_ThrottleIntervalEnum:(id)arg1 withLong:(long long)arg2;
- (id)setWeeklyThrottleInterval;
- (id)setDailyThrottleInterval;
- (id)removeThrottleInterval;
- (BOOL)canSetThrottleInterval;
- (void)clearThrottleState;
- (id)getVisibility;
- (id)setVisibilityWithJBTClusterConfig_VisibilityEnum:(id)arg1;
- (id)getLabelId;
- (id)getId;
- (id)getClusterType;
- (id)setLabelIdWithNSString:(id)arg1;
- (id)setClusterTypeWithJBTClusterTypeEnum:(id)arg1;
- (id)setIdWithJBTId:(id)arg1;
- (void)validate;
- (id)initWithJBTIClustersClusterConfigImpl:(id)arg1;
- (id)initWithComGoogleCumulusCommonUtilClock:(id)arg1 withJBTTimeHelper:(id)arg2 withJBTCClusterIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
