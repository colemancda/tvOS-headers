//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/CBPeripheralDelegate-Protocol.h>

@class HDHealthPeripheral, NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol HDHealthDaemon, OS_dispatch_queue;

@interface HDHealthDevicePropertyManager : NSObject <CBPeripheralDelegate>
{
    _Bool _discoveredServices;
    NSUUID *_peripheralIndentifier;
    id <HDHealthDaemon> _healthDaemon;
    HDHealthPeripheral *_peripheral;
    NSMutableDictionary *_propertiesAwaiting;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_services;
    NSMutableArray *_pendingDeviceInformationLoadedBlocks;
}

+ (id)allServiceIds;
+ (void)initDictionaries;
@property(retain, nonatomic) NSMutableArray *pendingDeviceInformationLoadedBlocks; // @synthesize pendingDeviceInformationLoadedBlocks=_pendingDeviceInformationLoadedBlocks;
@property(nonatomic) _Bool discoveredServices; // @synthesize discoveredServices=_discoveredServices;
@property(retain, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *propertiesAwaiting; // @synthesize propertiesAwaiting=_propertiesAwaiting;
@property(retain, nonatomic) HDHealthPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property(readonly, nonatomic) NSUUID *peripheralIndentifier; // @synthesize peripheralIndentifier=_peripheralIndentifier;
- (void).cxx_destruct;
- (void)_queue_servicesHaveBeenDiscovered;
- (id)_queue_deviceInformationService;
- (void)_queue_performWhenDeviceInformationHasBeenLoaded:(CDUnknownBlockType)arg1;
- (void)performWhenDeviceInformationHasBeenLoaded:(CDUnknownBlockType)arg1;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)startReadProperty:(id)arg1;
- (_Bool)isValidProperty:(id)arg1;
- (void)respond:(id)arg1 forProperty:(id)arg2 withError:(id)arg3;
- (_Bool)addHandler:(CDUnknownBlockType)arg1 forProperty:(id)arg2;
- (void)service:(id)arg1 didReadProperty:(id)arg2 value:(id)arg3 error:(id)arg4;
- (void)peripheralDisconnectedWithCompletion:(CDUnknownBlockType)arg1;
- (void)getProperty:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithPeripheral:(id)arg1 healthDaemon:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

