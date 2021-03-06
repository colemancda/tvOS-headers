//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CDPContext, CDPLocalDeviceSecretHandler, CDPRemoteDeviceSecretValidator, NSArray, NSNumber;

@protocol CDPStateUIProvider
- (void)cdpContext:(CDPContext *)arg1 promptForAdoptionOfMultipleICSC:(void (^)(_Bool, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForAccountPasswordWithCompletion:(void (^)(NSString *, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForICSCWithIsNumeric:(_Bool)arg2 numericLength:(NSNumber *)arg3 isRandom:(_Bool)arg4 validator:(CDPRemoteDeviceSecretValidator *)arg5;
- (void)cdpContext:(CDPContext *)arg1 promptForRemoteSecretWithDevices:(NSArray *)arg2 validator:(CDPRemoteDeviceSecretValidator *)arg3;
- (void)cdpContext:(CDPContext *)arg1 promptForLocalSecretWithHandler:(CDPLocalDeviceSecretHandler *)arg2;
@end

