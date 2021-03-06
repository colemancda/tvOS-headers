//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMSystemMonitorListener-Protocol.h>

@class NSBundle, NSDictionary, NSString;

@interface IMDService : NSObject <IMSystemMonitorListener>
{
    NSBundle *_bundle;
    Class _sessionClass;
    NSString *_internalName;
    NSDictionary *_accountDefaults;
    NSDictionary *_serviceDefaults;
    NSDictionary *_serviceProperties;
    NSDictionary *_cachedServiceDefaults;
    NSDictionary *_cachedSetupServiceDefaults;
    _Bool _blockPrefWriting;
}

@property(readonly, retain, nonatomic) NSDictionary *serviceProperties; // @synthesize serviceProperties=_serviceProperties;
@property(readonly, retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void)systemDidEnterMemoryPressure;
- (void)systemDidStartBackup;
- (id)description;
- (void)purgeMemoryCaches;
@property(readonly, nonatomic) _Bool serviceRequiresSingleAccount;
@property(readonly, nonatomic) long long serviceProtocolVersion;
@property(readonly, nonatomic) _Bool serviceSupportsOneSessionForAllAccounts;
@property(readonly, nonatomic) _Bool serviceSupportsPresence;
@property(readonly, nonatomic) _Bool serviceChatsIgnoreLoginStatus;
@property(readonly, nonatomic) _Bool serviceRequiresHost;
@property(readonly, nonatomic) _Bool serviceShouldBeAlwaysLoggedIn;
@property(readonly, nonatomic) _Bool serviceNeedsPassword;
@property(readonly, nonatomic) _Bool serviceNeedsLogin;
@property(readonly, nonatomic) _Bool shouldForceAccountsConnected;
@property(readonly, nonatomic) _Bool shouldForceAccountsActive;
@property(readonly, nonatomic) _Bool shouldCreateActiveAccounts;
@property(readonly, nonatomic) _Bool serviceWantsNullHostReachability;
@property(readonly, nonatomic) _Bool serviceIgnoresNetworkConnectivity;
@property(readonly, nonatomic) _Bool serviceSupportsRegistration;
@property(readonly, nonatomic) _Bool supportsDatabase;
@property(readonly, nonatomic) _Bool disallowDeactivation;
@property(readonly, retain, nonatomic) NSDictionary *defaultAccountSettings;
- (id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2;
- (void)accountRemoved:(id)arg1;
- (void)accountAdded:(id)arg1;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (void)saveSettings;
- (void)delayedSaveSettings;
- (_Bool)clearOneTimeImportAccounts;
@property(readonly, retain, nonatomic) NSDictionary *serviceDefaultsForSetup;
@property(readonly, retain, nonatomic) NSDictionary *serviceDefaults;
- (id)_serviceDefaultsForDomain:(id)arg1;
- (id)_defaultDefaults;
- (void)synchronizeServiceDefaults;
@property(readonly, nonatomic) _Bool isIDSBased;
@property(readonly, nonatomic) Class accountClass;
@property(readonly, nonatomic) Class sessionClass;
- (id)_oldServiceDomain;
@property(readonly, retain, nonatomic) NSString *serviceDomain;
- (id)_serviceDomain;
- (id)oldInternalName;
@property(readonly, retain, nonatomic) NSString *internalName;
- (void)unloadServiceBundle;
- (void)_reallyUnloadServiceBundle;
- (void)loadServiceBundle;
- (id)_copyServicePropertiesFromIMServiceBundle:(id)arg1;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;

@end

