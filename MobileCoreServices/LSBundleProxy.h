//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/LSResourceProxy.h>

#import <MobileCoreServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, NSUUID;

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding>
{
    unsigned long long _bundleFlags;
    unsigned long long _plistContentFlags;
    NSURL *_bundleURL;
    NSURL *_appStoreReceiptURL;
    NSString *_localizedShortName;
    NSString *_bundleExecutable;
    NSString *_bundleVersion;
    NSString *_bundleType;
    NSString *_signerIdentity;
    NSDictionary *_entitlements;
    NSDictionary *_environmentVariables;
    NSDictionary *_groupContainerURLs;
    NSUUID *_cacheGUID;
    NSArray *_machOUUIDs;
    unsigned long long _sequenceNumber;
    _Bool _foundBackingBundle;
}

+ (_Bool)supportsSecureCoding;
+ (id)bundleProxyForURL:(id)arg1;
+ (id)bundleProxyForIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool foundBackingBundle; // @synthesize foundBackingBundle=_foundBackingBundle;
@property(readonly, nonatomic) NSString *bundleExecutable; // @synthesize bundleExecutable=_bundleExecutable;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(readonly, nonatomic) NSString *bundleType; // @synthesize bundleType=_bundleType;
@property(readonly, nonatomic) NSURL *appStoreReceiptURL; // @synthesize appStoreReceiptURL=_appStoreReceiptURL;
@property(readonly, nonatomic) NSArray *machOUUIDs; // @synthesize machOUUIDs=_machOUUIDs;
@property(readonly, nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) NSString *localizedShortName; // @synthesize localizedShortName=_localizedShortName;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSUUID *cacheGUID; // @synthesize cacheGUID=_cacheGUID;
@property(readonly, nonatomic) NSDictionary *groupContainerURLs; // @synthesize groupContainerURLs=_groupContainerURLs;
@property(readonly, nonatomic) NSDictionary *environmentVariables;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_environmentVariables;
@property(readonly, nonatomic) NSString *signerIdentity; // @synthesize signerIdentity=_signerIdentity;
@property(readonly, nonatomic) NSString *bundleVersion;
- (void)setLocalizedShortName:(id)arg1;
@property(readonly, nonatomic) NSURL *dataContainerURL;
@property(readonly, nonatomic) NSURL *bundleContainerURL;
@property(readonly, nonatomic) NSURL *containerURL;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (unsigned char)_createContext:(struct LSContext *)arg1 andGetBundle:(unsigned int *)arg2 withData:(const struct LSBundleData **)arg3;
- (id)_plistValueForKey:(id)arg1;
- (id)uniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithBundleUnit:(unsigned int)arg1 bundleType:(unsigned long long)arg2 BundleID:(id)arg3 localizedName:(id)arg4 bundleContainerURL:(id)arg5 dataContainerURL:(id)arg6 resourcesDirectoryURL:(id)arg7 iconsDictionary:(id)arg8 iconFileNames:(id)arg9 version:(id)arg10;

@end
