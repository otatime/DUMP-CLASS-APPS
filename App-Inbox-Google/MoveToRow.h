//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTTopicTypeEnum, NSString;

@interface MoveToRow : NSObject
{
    BOOL _hasSeparator;
    BOOL _disabled;
    unsigned int _actionType;
    id <JBTClusterConfig> _cluster;
    NSString *_sectionTitle;
    JBTTopicTypeEnum *_topicType;
}

@property(retain, nonatomic) JBTTopicTypeEnum *topicType; // @synthesize topicType=_topicType;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) BOOL hasSeparator; // @synthesize hasSeparator=_hasSeparator;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain, nonatomic) id <JBTClusterConfig> cluster; // @synthesize cluster=_cluster;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;

@end

