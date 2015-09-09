//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoRegistry/NRPropertyXPCDaemonDelegate-Protocol.h>

@class NSData, NSNumber, NSString, NSUUID;

@protocol NRPairedDeviceRegistryXPCDaemonDelegate <NRPropertyXPCDaemonDelegate>
- (void)xpcSubmitAlbertPairingReport:(void (^)(void))arg1;
- (void)xpcTriggerVersion4Workaround;
- (void)xpcRetriggerUnpairInfoDialogWithBlock:(void (^)(void))arg1;
- (void)xpcAddRemoveRecoveryStepIDSFinalize:(_Bool)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepObliterate:(_Bool)arg1 withStatePath:(NSString *)arg2 block:(void (^)(void))arg3;
- (void)xpcAddRemoveRecoveryStepResetNVRAM:(_Bool)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepICloudDeletePaymentCards:(_Bool)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepStockholmReset:(_Bool)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepIDSUnpair:(_Bool)arg1 withPairingDeviceID:(NSUUID *)arg2 block:(void (^)(void))arg3;
- (void)xpcAddRemoveRecoveryStepUnpairBluetooth:(_Bool)arg1 withPairingDeviceID:(NSUUID *)arg2 block:(void (^)(void))arg3;
- (void)xpcAddRemoveRecoveryStepDeletePairingStore:(_Bool)arg1 withPairingDeviceID:(NSUUID *)arg2 block:(void (^)(void))arg3;
- (void)xpcAddRemoveRecoveryStepRemoteUnpair:(_Bool)arg1 withAdvertisedName:(NSString *)arg2 andPairedDeviceID:(NSUUID *)arg3 block:(void (^)(void))arg4;
- (void)xpcAddRemoveRecoveryStepIDSUnpairStart:(_Bool)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepDeleteAccounts:(_Bool)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepBackup:(_Bool)arg1 withPairingDeviceID:(NSUUID *)arg2 block:(void (^)(void))arg3;
- (void)xpcAddRemoveRecoveryStepDisableDaemons:(_Bool)arg1 block:(void (^)(void))arg2;
- (void)xpcSetObliterationEnabled:(_Bool)arg1 block:(void (^)(void))arg2;
- (void)xpcTriggerRecovery:(void (^)(void))arg1;
- (void)xpcRecoveryDescription:(void (^)(NSString *))arg1;
- (void)xpcResumePairingClientCrashMonitoring:(void (^)(void))arg1;
- (void)xpcSuspendPairingClientCrashMonitoring:(void (^)(void))arg1;
- (void)xpcPairingShouldContinue;
- (void)xpcUnpairWithDeviceID:(NSUUID *)arg1 shouldObliterate:(_Bool)arg2 operationHasBegun:(void (^)(NSError *, unsigned long long))arg3;
- (void)xpcNotifyPasscode:(NSNumber *)arg1 withDeviceID:(NSUUID *)arg2;
- (void)xpcNotifyActivationCompleted:(NSUUID *)arg1 withSuccess:(_Bool)arg2;
- (void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(NSUUID *)arg2;
- (void)xpcAbortPairingReason:(NSString *)arg1 withBlock:(void (^)(unsigned long long))arg2;
- (void)xpcGizmoPasscodeAdvertiseAndPairWithName:(NSString *)arg1 operationHasBegun:(void (^)(NSError *, unsigned long long))arg2;
- (void)xpcGizmoOOBAdvertiseAndPairWithName:(NSString *)arg1 operationHasBegun:(void (^)(NSError *, unsigned long long))arg2;
- (void)xpcCompanionPasscodePairWithDeviceID:(NSUUID *)arg1 operationHasBegun:(void (^)(NSError *, unsigned long long))arg2;
- (void)xpcCompanionOOBDiscoverAndPairWithName:(NSString *)arg1 withOutOfBandPairingKey:(NSData *)arg2 operationHasBegun:(void (^)(NSError *, unsigned long long))arg3;
- (void)xpcQueryStatus:(NSUUID *)arg1 statusData:(void (^)(unsigned long long, NSDictionary *, _Bool, unsigned short, long long, long long, long long, unsigned long long, unsigned long long))arg2;
@end
