/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMachPort, VideoConference, GKNATObserver, ICEResultWaitQueue, NSMutableArray;

@interface VideoConferenceManager : NSObject <NSMachPortDelegate> {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } stateLock;
    NSMutableArray *vcList;
    VideoConference *activeConference;
    VideoConference *conferenceWithMic;
    ICEResultWaitQueue *resultQueue;
    struct tagHANDLE { int x1; } *hAUIO;
    struct tagHANDLE { int x1; } *hSIP;
    int audioRefCount;
    int sipRefCount;
    BOOL shouldSetupAudioSession;
    BOOL enableSpeakerPhone;
    int internalSampleRate;
    int hardwareSampleRate;
    int internalBlockSize;
    int encodeBitrate;
    int clientPID;
    BOOL isUsingSuppression;
    BOOL isForcingAudioBitrate;
    GKNATObserver *natObserver;
    BOOL isTetheredDisplayMode;
    struct opaqueCMSession { } *cmSession;
    int cmSessionRefCount;
    BOOL tearDownCMSession;
    NSMachPort *cmSessionMachPort;
    int startToken;
    int stopToken;
    struct dispatch_queue_s { } *cmSessionQueue;
}

@property BOOL isForcingAudioBitrate;
@property BOOL isUsingSuppression;
@property int clientPID;
@property(readonly) NSMutableArray * vcList;
@property int internalSampleRate;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property BOOL shouldSetupAudioSession;
@property(readonly) ICEResultWaitQueue * resultQueue;
@property VideoConference * conferenceWithMic;
@property VideoConference * activeConference;

+ (id)defaultVideoConferenceManager;

- (BOOL)isSpeakerPhoneEnabled;
- (int)internalSampleRate;
- (id)vcList;
- (int)clientPID;
- (BOOL)isUsingSuppression;
- (BOOL)isForcingAudioBitrate;
- (void)createSIP;
- (void)startSIP;
- (void)stopSIP;
- (id)conferenceForCallID:(int)arg1;
- (BOOL)hasVideoConference:(id)arg1;
- (id)conferenceForParticipantID:(id)arg1;
- (BOOL)projectionModeEnabledState;
- (id)conferenceForIncomingConnectionResult:(struct tagCONNRESULT { int x1; int x2; int x3; int x4; unsigned short x5; unsigned short x6; struct tagIPPORT { int x_7_1_1; BOOL x_7_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { int x_8_1_1; BOOL x_8_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; unsigned int x13; }*)arg1;
- (BOOL)startAudioIO:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1 sampleRate:(int)arg2 minSamplesPerFrame:(int)arg3 audioBundle:(int)arg4 remoteVCCallInfo:(id)arg5 error:(id*)arg6;
- (BOOL)tearDownAudioIO:(BOOL)arg1;
- (void)setShouldSetupAudioSession:(BOOL)arg1;
- (void)setupAudioSessionProperties;
- (void)startAudioSession;
- (void)stopAudioSession;
- (void)tearDownAudioSession:(BOOL)arg1;
- (BOOL)forceSampleRate:(double*)arg1;
- (BOOL)forceBufferFrames:(int*)arg1;
- (BOOL)forceBufferDuration:(float*)arg1;
- (void)resetAudioSessionProperties;
- (void)pauseVideoConferences:(BOOL)arg1;
- (void)handleAudioInterruption:(struct opaqueCMSession { }*)arg1 interruptionInfo:(struct __CFDictionary { }*)arg2 cmd:(unsigned int)arg3;
- (void)handleRouteChanged:(struct opaqueCMSession { }*)arg1;
- (void)handleMachMessage:(void*)arg1;
- (void)setIsForcingAudioBitrate:(BOOL)arg1;
- (void)setClientPID:(int)arg1;
- (void)setInternalSampleRate:(int)arg1;
- (BOOL)shouldSetupAudioSession;
- (id)resultQueue;
- (id)conferenceWithMic;
- (id)activeConference;
- (struct tagHANDLE { int x1; }*)SIPHandle;
- (BOOL)stopAudioIO;
- (void)addVideoConference:(id)arg1;
- (void)setActiveConference:(id)arg1;
- (void)removeVideoConference:(id)arg1;
- (void)enableMetering:(BOOL)arg1 isInputMeter:(BOOL)arg2;
- (void)setConferenceWithMic:(id)arg1;
- (void)setEncodeBitrate:(int)arg1;
- (void)setIsUsingSuppression:(BOOL)arg1;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (id)init;

@end