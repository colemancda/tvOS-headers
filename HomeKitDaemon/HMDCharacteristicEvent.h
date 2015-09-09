//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDEvent.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDCharacteristic;

@interface HMDCharacteristicEvent : HMDEvent <NSSecureCoding>
{
    HMDCharacteristic *_characteristic;
    id _eventValue;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id eventValue; // @synthesize eventValue=_eventValue;
@property(readonly, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 home:(id)arg2;
- (id)initWithCharacteristic:(id)arg1 eventValue:(id)arg2;

@end
