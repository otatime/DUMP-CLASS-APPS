//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBWebRTCConfigExperimentContext : FBExperimentContext
{
    int _min_supported_version;
    int _outgoing_call_timeout_milli;
    int _incoming_call_timeout_milli;
    int _disconnect_call_timeout_milli;
    int _signal_disconnect_call_timeout_milli;
    int _show_call_ui_timeout_milli;
    int _voip_connection_prune_level;
    int _max_jitter_buffer;
    int _webrtc_ack_timeout_milli;
    int _webrtc_number_retries_on_error;
    int _voip_audio_debug_sampling;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) int voip_audio_debug_sampling; // @synthesize voip_audio_debug_sampling=_voip_audio_debug_sampling;
@property(readonly, nonatomic) int webrtc_number_retries_on_error; // @synthesize webrtc_number_retries_on_error=_webrtc_number_retries_on_error;
@property(readonly, nonatomic) int webrtc_ack_timeout_milli; // @synthesize webrtc_ack_timeout_milli=_webrtc_ack_timeout_milli;
@property(readonly, nonatomic) int max_jitter_buffer; // @synthesize max_jitter_buffer=_max_jitter_buffer;
@property(readonly, nonatomic) int voip_connection_prune_level; // @synthesize voip_connection_prune_level=_voip_connection_prune_level;
@property(readonly, nonatomic) int show_call_ui_timeout_milli; // @synthesize show_call_ui_timeout_milli=_show_call_ui_timeout_milli;
@property(readonly, nonatomic) int signal_disconnect_call_timeout_milli; // @synthesize signal_disconnect_call_timeout_milli=_signal_disconnect_call_timeout_milli;
@property(readonly, nonatomic) int disconnect_call_timeout_milli; // @synthesize disconnect_call_timeout_milli=_disconnect_call_timeout_milli;
@property(readonly, nonatomic) int incoming_call_timeout_milli; // @synthesize incoming_call_timeout_milli=_incoming_call_timeout_milli;
@property(readonly, nonatomic) int outgoing_call_timeout_milli; // @synthesize outgoing_call_timeout_milli=_outgoing_call_timeout_milli;
@property(readonly, nonatomic) int min_supported_version; // @synthesize min_supported_version=_min_supported_version;

@end

