//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VOIPConfiguration : NSObject
{
    BOOL _mqttEnabled;
    BOOL _keepPersistentConnection;
    BOOL _enableVOIP;
    BOOL _wifiCallingOnly;
    BOOL _updateForegroundKeepAlive;
    BOOL _webInteropSupported;
    BOOL _useWebrtcTimeout;
    BOOL _isBackgroundKeepAliveDisabled;
    BOOL _isSetToDefaults;
    BOOL _setMqttTestHostNameAndPort;
    BOOL _setMqttLatestHostName;
    BOOL _setMqttSwedenHostName;
    BOOL _failConnectionFast;
    BOOL _setMqttKeepAliveMinIdleTimeSecond;
    int _keepAliveTimeout;
    int _subscribeTimeout;
    int _mqttFastReconnectTimes;
    int _foregroundKeepAliveTime;
    int _mqttMaxDisconnectOnBgPing;
    NSString *_mqttHostName;
    int _mqttPort;
    double _pubAckTimeout;
    double _responseTimeout;
    double _numMsgSendRetries;
    double _graphSendTimeout;
    double _graphSendAttachmentTimeout;
    double _pingResponseTimeout;
    double _connectTimeout;
    double _mqttFastReconnectInterval;
    double _mqttBgReconnectInterval;
    double _mqttReconnectBgBackoffInterval;
    double _webrtcPubAckTimeout;
    double _webrtcResponseTimeout;
    double _mqttConnectionStatusUpdateDelay;
    double _mqttKeepAliveMinIdleTimeSecond;
}

@property(nonatomic) BOOL setMqttKeepAliveMinIdleTimeSecond; // @synthesize setMqttKeepAliveMinIdleTimeSecond=_setMqttKeepAliveMinIdleTimeSecond;
@property(nonatomic) double mqttKeepAliveMinIdleTimeSecond; // @synthesize mqttKeepAliveMinIdleTimeSecond=_mqttKeepAliveMinIdleTimeSecond;
@property(nonatomic) BOOL failConnectionFast; // @synthesize failConnectionFast=_failConnectionFast;
@property(nonatomic) int mqttPort; // @synthesize mqttPort=_mqttPort;
@property(copy, nonatomic) NSString *mqttHostName; // @synthesize mqttHostName=_mqttHostName;
@property(nonatomic) BOOL setMqttSwedenHostName; // @synthesize setMqttSwedenHostName=_setMqttSwedenHostName;
@property(nonatomic) BOOL setMqttLatestHostName; // @synthesize setMqttLatestHostName=_setMqttLatestHostName;
@property(nonatomic) BOOL setMqttTestHostNameAndPort; // @synthesize setMqttTestHostNameAndPort=_setMqttTestHostNameAndPort;
@property(nonatomic) double mqttConnectionStatusUpdateDelay; // @synthesize mqttConnectionStatusUpdateDelay=_mqttConnectionStatusUpdateDelay;
@property(nonatomic) BOOL isSetToDefaults; // @synthesize isSetToDefaults=_isSetToDefaults;
@property(nonatomic) BOOL isBackgroundKeepAliveDisabled; // @synthesize isBackgroundKeepAliveDisabled=_isBackgroundKeepAliveDisabled;
@property(nonatomic) BOOL useWebrtcTimeout; // @synthesize useWebrtcTimeout=_useWebrtcTimeout;
@property(nonatomic) double webrtcResponseTimeout; // @synthesize webrtcResponseTimeout=_webrtcResponseTimeout;
@property(nonatomic) double webrtcPubAckTimeout; // @synthesize webrtcPubAckTimeout=_webrtcPubAckTimeout;
@property(nonatomic) double mqttReconnectBgBackoffInterval; // @synthesize mqttReconnectBgBackoffInterval=_mqttReconnectBgBackoffInterval;
@property(nonatomic) int mqttMaxDisconnectOnBgPing; // @synthesize mqttMaxDisconnectOnBgPing=_mqttMaxDisconnectOnBgPing;
@property(nonatomic) BOOL webInteropSupported; // @synthesize webInteropSupported=_webInteropSupported;
@property(nonatomic) int foregroundKeepAliveTime; // @synthesize foregroundKeepAliveTime=_foregroundKeepAliveTime;
@property(nonatomic) BOOL updateForegroundKeepAlive; // @synthesize updateForegroundKeepAlive=_updateForegroundKeepAlive;
@property(nonatomic) double mqttBgReconnectInterval; // @synthesize mqttBgReconnectInterval=_mqttBgReconnectInterval;
@property(nonatomic) double mqttFastReconnectInterval; // @synthesize mqttFastReconnectInterval=_mqttFastReconnectInterval;
@property(nonatomic) int mqttFastReconnectTimes; // @synthesize mqttFastReconnectTimes=_mqttFastReconnectTimes;
@property(nonatomic) double connectTimeout; // @synthesize connectTimeout=_connectTimeout;
@property(nonatomic) double pingResponseTimeout; // @synthesize pingResponseTimeout=_pingResponseTimeout;
@property(nonatomic) double graphSendAttachmentTimeout; // @synthesize graphSendAttachmentTimeout=_graphSendAttachmentTimeout;
@property(nonatomic) double graphSendTimeout; // @synthesize graphSendTimeout=_graphSendTimeout;
@property(nonatomic) BOOL wifiCallingOnly; // @synthesize wifiCallingOnly=_wifiCallingOnly;
@property(nonatomic) double numMsgSendRetries; // @synthesize numMsgSendRetries=_numMsgSendRetries;
@property(nonatomic) double responseTimeout; // @synthesize responseTimeout=_responseTimeout;
@property(nonatomic) double pubAckTimeout; // @synthesize pubAckTimeout=_pubAckTimeout;
@property(nonatomic) int subscribeTimeout; // @synthesize subscribeTimeout=_subscribeTimeout;
@property(nonatomic) int keepAliveTimeout; // @synthesize keepAliveTimeout=_keepAliveTimeout;
@property(nonatomic) BOOL enableVOIP; // @synthesize enableVOIP=_enableVOIP;
@property(nonatomic) BOOL keepPersistentConnection; // @synthesize keepPersistentConnection=_keepPersistentConnection;
@property(nonatomic) BOOL mqttEnabled; // @synthesize mqttEnabled=_mqttEnabled;
- (void).cxx_destruct;
- (id)getSocketConfig;
- (unsigned int)hash;
- (BOOL)isEqualToObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithResultsDictionary:(id)arg1;
- (void)setDefaults;

@end

