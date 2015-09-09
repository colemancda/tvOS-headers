//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServer.h>

#import <CoreHAP/HAPHTTPClientDebugDelegate-Protocol.h>
#import <CoreHAP/HAPHTTPClientDelegate-Protocol.h>

@class HAPAccessory, HAPAccessoryServerBrowserIP, HAPHTTPClient, NSArray, NSDictionary, NSMutableArray, NSString;

@interface HAPAccessoryServerIP : HAPAccessoryServer <HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate>
{
    struct MFiSAP *_mfiSAP;
    struct PairingSessionPrivate *_pairingSession;
    unsigned long long _featureFlags;
    _Bool _establishingSecureConnection;
    _Bool _hasTunnelService;
    NSString *_deviceID;
    NSString *_model;
    NSString *_protocolVersion;
    NSString *_sourceVersion;
    unsigned long long _configNumber;
    unsigned long long _statusFlags;
    NSDictionary *_bonjourDeviceInfo;
    HAPAccessoryServerBrowserIP *_browser;
    NSString *_accessoryServerName;
    NSArray *_ipServices;
    NSMutableArray *_queuedOperations;
    HAPAccessory *_primaryAccessoryForServer;
    HAPHTTPClient *_httpClient;
    CDUnknownBlockType _pairVerifyCompletionBlock;
    NSString *_controllerUsername;
    CDUnknownBlockType _netServiceResolveCompletionBlock;
}

@property(nonatomic) _Bool hasTunnelService; // @synthesize hasTunnelService=_hasTunnelService;
@property _Bool establishingSecureConnection; // @synthesize establishingSecureConnection=_establishingSecureConnection;
@property(copy, nonatomic) CDUnknownBlockType netServiceResolveCompletionBlock; // @synthesize netServiceResolveCompletionBlock=_netServiceResolveCompletionBlock;
@property(retain, nonatomic) NSString *controllerUsername; // @synthesize controllerUsername=_controllerUsername;
@property(copy, nonatomic) CDUnknownBlockType pairVerifyCompletionBlock; // @synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock;
@property(retain, nonatomic) HAPHTTPClient *httpClient; // @synthesize httpClient=_httpClient;
@property(retain, nonatomic) HAPAccessory *primaryAccessoryForServer; // @synthesize primaryAccessoryForServer=_primaryAccessoryForServer;
@property(retain, nonatomic) NSMutableArray *queuedOperations; // @synthesize queuedOperations=_queuedOperations;
@property(retain, nonatomic) NSArray *ipServices; // @synthesize ipServices=_ipServices;
@property(copy, nonatomic) NSString *accessoryServerName; // @synthesize accessoryServerName=_accessoryServerName;
@property(nonatomic) __weak HAPAccessoryServerBrowserIP *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) NSDictionary *bonjourDeviceInfo; // @synthesize bonjourDeviceInfo=_bonjourDeviceInfo;
@property(nonatomic) unsigned long long statusFlags; // @synthesize statusFlags=_statusFlags;
@property(nonatomic) unsigned long long configNumber; // @synthesize configNumber=_configNumber;
@property(copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(copy, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 removeRequest:(_Bool)arg5 completionQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (int)_handlePairVerifyCompletionWithData:(id)arg1;
- (int)_pairVerifyStart;
- (int)_pairSetupTryPassword:(id)arg1;
- (int)_handlePairSetupCompletionWithData:(id)arg1;
- (int)_continuePairingAfterAuthPrompt;
- (int)_pairSetupStart;
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (int)_ensureHTTPClientSetUp;
- (void)httpClientDidCloseConnectionDueToServer:(id)arg1;
- (void)_establishSecureSession;
- (_Bool)_isSessionEstablished;
- (_Bool)isSessionEstablised;
- (_Bool)_mergeExistingService:(id)arg1 withNewService:(id)arg2;
- (_Bool)_mergeExistingAccessory:(id)arg1 withNewAccessory:(id)arg2;
- (_Bool)_updateAccessories:(id)arg1;
- (void)__registerForInternalCharacteristicNotifications;
- (void)_parseAttributeDatabase:(id)arg1 transaction:(id)arg2;
- (void)_getAttributeDatabase;
- (_Bool)_parseTXTRecordDictionary:(id)arg1;
- (_Bool)_parseAndValidateTXTRecord;
- (void)_handleHTTPClientErrors;
- (_Bool)_processEvent:(id)arg1 matchedCharacteristic:(id *)arg2;
- (void)httpClient:(id)arg1 didReceiveEvent:(id)arg2;
- (void)_handleEventResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 requestedEventState:(_Bool)arg6 completion:(CDUnknownBlockType)arg7 queue:(id)arg8;
- (void)_enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_handleUpdatesForCharacteristics:(id)arg1;
- (void)handleUpdatesForCharacteristics:(id)arg1;
- (void)_handleWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 requestTuples:(id)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_handleReadResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_processQueuedOperationsWithError:(id)arg1;
- (void)_queueEnableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_queueAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queueWriteCharacteristicValues:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_queueReadCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_error:(id)arg1 forWriteCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_error:(id)arg1 forReadCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)stopPairingWithError:(id *)arg1;
- (void)_tearDownSession;
- (_Bool)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (void)continuePairingAfterAuthPrompt;
- (void)startPairing;
- (void)_isAccessoryPublicKeyPresent:(_Bool *)arg1 registeredWithHomeKit:(_Bool *)arg2;
- (_Bool)_checkPairedState;
- (void)_establishSecureConnectionAndFetchAttributeDatabase;
- (void)discoverAccessories;
- (void)setCategory:(id)arg1;
- (long long)linkType;
- (id)primaryAccessory;
- (id)services;
- (id)name;
- (void)_updateWithBonjourDeviceInfo:(id)arg1;
- (void)updateWithBonjourDeviceInfo:(id)arg1;
- (id)_serverName;
- (id)_serverIdentifier;
- (id)identifier;
- (_Bool)isPaired;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)invalidate;
- (void)_setDeviceIDWithString:(id)arg1;
- (id)_deviceID;
- (void)_reset;
- (id)initWithBonjourDeviceInfo:(id)arg1 keyStore:(id)arg2 browser:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
