//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, SFPeerDevice;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding>
{
    long long _advertisementVersion;
    NSData *_advertisementPayload;
    NSDictionary *_options;
    SFPeerDevice *_device;
    NSData *_activityPayload;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSData *activityPayload; // @synthesize activityPayload=_activityPayload;
@property(readonly, retain) SFPeerDevice *device; // @synthesize device=_device;
@property(readonly, copy) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
@property(readonly) long long advertisementVersion; // @synthesize advertisementVersion=_advertisementVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
@property(readonly, copy) NSString *deviceIdentifier;
@property(readonly, copy) NSString *deviceModelIdentifier;
@property(readonly, copy) NSString *deviceName;
- (id)initWithAdvertisementVersion:(unsigned long long)arg1 advertisementPayload:(id)arg2 options:(id)arg3 device:(id)arg4;

@end

