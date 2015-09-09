//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDIDSMessageCenterDelegate-Protocol.h>
#import <HealthDaemon/HDNanoSyncStoreDelegate-Protocol.h>
#import <HealthDaemon/HDPairedWatchBundleIdentifierProvider-Protocol.h>
#import <HealthDaemon/HDProcessStateObserver-Protocol.h>
#import <HealthDaemon/NRDevicePropertyObserver-Protocol.h>

@class HDIDSMessageCenter, HDNanoSyncStore, NRDevice, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol HDHealthDaemon, OS_dispatch_queue, OS_dispatch_source;

@interface HDNanoSyncManager : NSObject <NRDevicePropertyObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDNanoSyncStoreDelegate, HDDatabaseProtectedDataObserver, HDDataObserver, HDIDSMessageCenterDelegate, HDPairedWatchBundleIdentifierProvider, HDProcessStateObserver>
{
    _Bool _isMaster;
    _Bool _isPairingActivated;
    _Bool _restoreDidAbort;
    _Bool _needsActivationOnUnlock;
    _Bool _needsResyncOnUnlock;
    NSString *_pairedWatchSourceBundleIdentifier;
    id <HDHealthDaemon> _healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncQueue;
    HDIDSMessageCenter *_messageCenter;
    long long _state;
    HDNanoSyncStore *_activeSyncStore;
    NRDevice *_activeNanoRegistryDevice;
    NSUUID *_restoreUUID;
    long long _restoreSequenceNumber;
    NSMutableArray *_activationCompletions;
    NSObject<OS_dispatch_source> *_activationTimer;
    NSObject<OS_dispatch_source> *_periodicSyncTimer;
    NSDate *_lastPeriodicSyncDate;
    NSMutableDictionary *_pendingAuthorizationRequestContexts;
}

@property(retain, nonatomic) NSMutableDictionary *pendingAuthorizationRequestContexts; // @synthesize pendingAuthorizationRequestContexts=_pendingAuthorizationRequestContexts;
@property(nonatomic) _Bool needsResyncOnUnlock; // @synthesize needsResyncOnUnlock=_needsResyncOnUnlock;
@property(nonatomic) _Bool needsActivationOnUnlock; // @synthesize needsActivationOnUnlock=_needsActivationOnUnlock;
@property(retain, nonatomic) NSDate *lastPeriodicSyncDate; // @synthesize lastPeriodicSyncDate=_lastPeriodicSyncDate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *periodicSyncTimer; // @synthesize periodicSyncTimer=_periodicSyncTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *activationTimer; // @synthesize activationTimer=_activationTimer;
@property(retain, nonatomic) NSMutableArray *activationCompletions; // @synthesize activationCompletions=_activationCompletions;
@property(nonatomic) long long restoreSequenceNumber; // @synthesize restoreSequenceNumber=_restoreSequenceNumber;
@property(nonatomic) _Bool restoreDidAbort; // @synthesize restoreDidAbort=_restoreDidAbort;
@property(retain, nonatomic) NSUUID *restoreUUID; // @synthesize restoreUUID=_restoreUUID;
@property(retain, nonatomic) NRDevice *activeNanoRegistryDevice; // @synthesize activeNanoRegistryDevice=_activeNanoRegistryDevice;
@property(retain, nonatomic) HDNanoSyncStore *activeSyncStore; // @synthesize activeSyncStore=_activeSyncStore;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) HDIDSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property(retain) NSString *pairedWatchSourceBundleIdentifier; // @synthesize pairedWatchSourceBundleIdentifier=_pairedWatchSourceBundleIdentifier;
- (void)_setPairingActivated:(_Bool)arg1;
@property _Bool isPairingActivated; // @synthesize isPairingActivated=_isPairingActivated;
- (void).cxx_destruct;
- (void)processDidEnterForeground:(id)arg1;
- (void)processDidEnterBackground:(id)arg1;
- (id)_stateString;
- (void)_didSendChangeRequest;
- (void)_didReceiveChangeRequest;
- (id)diagnosticDescription;
- (void)_queue_setState:(long long)arg1;
- (void)syncDidFinishWithNanoSyncStore:(id)arg1 success:(_Bool)arg2 error:(id)arg3 context:(id)arg4;
- (void)sendWithNanoSyncStore:(id)arg1 change:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_queue_receiveAuthorizationComplete:(id)arg1;
- (void)_queue_authorizationRequestDidFailToSendWithError:(id)arg1;
- (void)_queue_receiveAuthorizationResponse:(id)arg1;
- (void)_queue_receiveAuthorizationRequest:(id)arg1;
- (void)_queue_requestAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_workoutSamplesWereAssociated:(id)arg1;
- (void)_achievementsWereAdded:(id)arg1;
- (void)_userPreferencesDidChange:(id)arg1;
- (void)_userCharacteristicsDidChange:(id)arg1;
- (void)_unregisterForSyncTriggers;
- (void)_registerForSyncTriggers;
- (void)_resetSyncAnchorsForStore:(id)arg1;
- (void)_syncImmediatelyWithReason:(id)arg1 pullRequest:(_Bool)arg2;
- (void)_syncImmediatelyWithReason:(id)arg1;
- (void)_queue_syncImmediatelyWithReason:(id)arg1 pullRequest:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_queue_isReadyForSyncWithError:(id *)arg1;
- (void)_queue_cancelPeriodicSyncTimer;
- (void)_queue_startPeriodicSyncTimerIfNecessary;
- (void)_queue_periodicSyncTimerFired;
- (void)_queue_receiveChangeResponse:(id)arg1 forStore:(id)arg2;
- (void)_queue_changeResponseDidFailToSendWithError:(id)arg1 forStore:(id)arg2;
- (void)_queue_changeRequestDidFailToSendWithError:(id)arg1 forStore:(id)arg2;
- (void)_queue_receiveChangeRequest:(id)arg1 forStore:(id)arg2;
- (void)_queue_sendChange:(id)arg1 withStatus:(id)arg2 forStore:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_queue_abortRestoreWithUUID:(id)arg1;
- (void)_queue_resetRestoreAttemptWithUUID:(id)arg1;
- (_Bool)_syncQueue_applyActivationRestore:(id)arg1 request:(id)arg2 forStore:(id)arg3 error:(id *)arg4;
- (void)_queue_handleActivationRestoreResponse:(id)arg1 forStore:(id)arg2;
- (void)_queue_handleActivationRestoreRequest:(id)arg1 forStore:(id)arg2;
- (void)_queue_sendActivationRestoreMessageWithStore:(id)arg1 restoreUUID:(id)arg2 restores:(id)arg3 sequenceNumber:(long long)arg4 statusCode:(int)arg5;
- (void)_queue_beginRestoreWithStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (void)_deviceDidUnpair:(id)arg1;
- (void)_deviceDidPair:(id)arg1;
- (_Bool)_queue_isReadyForPairingWithError:(id *)arg1;
- (void)_queue_resetPairingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_cancelActivationTimer;
- (void)_queue_startActivationTimerWithTimeout:(double)arg1;
- (void)_queue_drainActivationCompletionsWithDidActivate:(_Bool)arg1 error:(id)arg2;
- (void)_queue_addActivationCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_activationTimedOut;
- (void)_queue_transitionToPreparingForActivationWithStore:(id)arg1 activationSentHandler:(CDUnknownBlockType)arg2;
- (void)_queue_transitionToActivatedWithStore:(id)arg1;
- (void)_queue_transitionToDeactivatedWithError:(id)arg1;
- (void)_showFitnessAppIfNeeded;
- (void)_queue_setActivePairedNanoRegistryDevice:(id)arg1;
- (void)_queue_updatePairingWithOptions:(unsigned long long)arg1 activationSentHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_pairingDidChange;
- (void)messageCenterDidReceiveAuthorizationComplete:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationError:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationResponse:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationRequest:(id)arg1;
- (void)messageCenterChangesError:(id)arg1;
- (void)messageCenterActivationError:(id)arg1;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenterDidReceiveChangesResponse:(id)arg1;
- (void)messageCenterDidReceiveChangesRequest:(id)arg1;
- (void)messageCenterDidReceiveActivationResponse:(id)arg1;
- (void)messageCenterDidReceiveActivationRequest:(id)arg1;
- (void)_queue_sendResponse:(id)arg1;
- (void)_queue_sendRequest:(id)arg1;
- (void)_queue_setUpMessageCenterIfNecessaryWithStore:(id)arg1;
- (_Bool)_queue_finishInitializationAfterFirstUnlockIfNecessaryWithError:(id *)arg1;
- (void)requestAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetPairingWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncHealthDataWithPullRequest:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activatePairingWithActivationSentHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
@property(readonly) _Bool isMaster;
- (void)dealloc;
- (id)initWithHealthDaemon:(id)arg1 isMaster:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
