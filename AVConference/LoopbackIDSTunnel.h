//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VideoConferenceRealTimeChannel-Protocol.h>

__attribute__((visibility("hidden")))
@interface LoopbackIDSTunnel : NSObject <VideoConferenceRealTimeChannel>
{
    int _socket;
    int _packetSendFailureCount;
    CDUnknownBlockType _dataHandler;
    CDUnknownBlockType _terminationHandler;
    struct OpaqueFigThread *_idsReceiveTID;
    _Bool _stopIDSReceiveThread;
}

@property(readonly) _Bool stopIDSReceiveThread; // @synthesize stopIDSReceiveThread=_stopIDSReceiveThread;
@property(copy) CDUnknownBlockType terminationHandler; // @synthesize terminationHandler=_terminationHandler;
@property(copy) CDUnknownBlockType receiveHandler; // @synthesize receiveHandler=_dataHandler;
- (void)callTerminationHandlerWithError:(id)arg1;
- (_Bool)processSocketRead;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;
- (void)dealloc;
- (void)cleanup;
- (id)initWithSocket:(int)arg1 error:(id *)arg2;

@end

