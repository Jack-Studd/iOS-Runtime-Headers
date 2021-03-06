/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class AFConnection;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate> {
    AFConnection *_connection;
}

- (void).cxx_destruct;
- (id)_connectionDelegate;
- (id)initWithConnection:(id)arg1;
- (oneway void)requestDidFailWithError:(id)arg1 requestClass:(id)arg2;
- (oneway void)requestDidFinish;
- (oneway void)requestDidReceiveCommand:(id)arg1 reply:(id)arg2;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenURL:(id)arg1 reply:(id)arg2;
- (oneway void)shouldSpeakChanged:(BOOL)arg1;
- (oneway void)speechRecognitionDidFail:(id)arg1;
- (oneway void)speechRecognized:(id)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidFail:(id)arg1;
- (oneway void)speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2;
- (oneway void)speechRecordingWillBegin;

@end
