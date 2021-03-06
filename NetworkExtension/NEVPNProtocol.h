//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEDNSSettings, NEIdentityKeychainItem, NEKeychainItem, NEProxySettings, NSData, NSString, NSUUID;

@interface NEVPNProtocol : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSCopying, NSSecureCoding>
{
    _Bool _disconnectOnSleep;
    _Bool _disconnectOnWake;
    _Bool _identityDataImported;
    _Bool _disconnectOnIdle;
    _Bool _disconnectOnUserSwitch;
    _Bool _disconnectOnLogout;
    int _disconnectOnWakeTimeout;
    int _disconnectOnIdleTimeout;
    NSString *_serverAddress;
    NSString *_username;
    NSData *_passwordReference;
    NSString *_identityDataPassword;
    NEProxySettings *_proxySettings;
    NSUUID *_identifier;
    long long _type;
    NEKeychainItem *_passwordKeychainItem;
    NSString *_passwordEncryption;
    NSData *_identityDataInternal;
    NSData *_identityDataHash;
    NEKeychainItem *_identityDataPasswordKeychainItem;
    NEDNSSettings *_DNSSettings;
    long long _keychainDomain;
    NSString *_keychainAccessGroup;
    NEIdentityKeychainItem *_identity;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NEIdentityKeychainItem *identity; // @synthesize identity=_identity;
@property(retain) NSString *keychainAccessGroup; // @synthesize keychainAccessGroup=_keychainAccessGroup;
@property long long keychainDomain; // @synthesize keychainDomain=_keychainDomain;
@property _Bool disconnectOnLogout; // @synthesize disconnectOnLogout=_disconnectOnLogout;
@property _Bool disconnectOnUserSwitch; // @synthesize disconnectOnUserSwitch=_disconnectOnUserSwitch;
@property int disconnectOnIdleTimeout; // @synthesize disconnectOnIdleTimeout=_disconnectOnIdleTimeout;
@property _Bool disconnectOnIdle; // @synthesize disconnectOnIdle=_disconnectOnIdle;
@property(copy) NEDNSSettings *DNSSettings; // @synthesize DNSSettings=_DNSSettings;
@property(copy) NEKeychainItem *identityDataPasswordKeychainItem; // @synthesize identityDataPasswordKeychainItem=_identityDataPasswordKeychainItem;
@property(copy) NSData *identityDataHash; // @synthesize identityDataHash=_identityDataHash;
@property _Bool identityDataImported; // @synthesize identityDataImported=_identityDataImported;
@property(copy) NSData *identityDataInternal; // @synthesize identityDataInternal=_identityDataInternal;
@property(copy) NSString *passwordEncryption; // @synthesize passwordEncryption=_passwordEncryption;
@property(copy) NEKeychainItem *passwordKeychainItem; // @synthesize passwordKeychainItem=_passwordKeychainItem;
@property int disconnectOnWakeTimeout; // @synthesize disconnectOnWakeTimeout=_disconnectOnWakeTimeout;
@property _Bool disconnectOnWake; // @synthesize disconnectOnWake=_disconnectOnWake;
@property(readonly) long long type; // @synthesize type=_type;
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy) NEProxySettings *proxySettings; // @synthesize proxySettings=_proxySettings;
@property _Bool disconnectOnSleep; // @synthesize disconnectOnSleep=_disconnectOnSleep;
@property(copy) NSString *identityDataPassword; // @synthesize identityDataPassword=_identityDataPassword;
@property(copy) NSData *passwordReference; // @synthesize passwordReference=_passwordReference;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
- (void).cxx_destruct;
- (id)description;
- (void)copyPasswordsFromKeychainInDomain:(long long)arg1;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg1;
- (void)removeKeychainItemsInDomain:(long long)arg1;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (void)syncWithKeychainInDomainCommon:(long long)arg1;
@property(copy) NSData *identityData;
@property(copy) NSData *identityReference;
@property(copy) NSData *identityReferenceInternal;
- (struct __SCNetworkInterface *)createInterface;
- (_Bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg1;
- (_Bool)setServiceProtocolsInService:(struct __SCNetworkService *)arg1;
- (void)initDisconnectOptions:(id)arg1;
- (void)addDisconnectOptions:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)type2str;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocolIdentifier:(id)arg1;
- (id)initWithType:(long long)arg1;

@end

