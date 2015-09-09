//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AUAudioUnit, AVAudioFormat, NSArray, NSString;

@interface AUAudioUnitBus : NSObject
{
    AVAudioFormat *_format;
    NSArray *_supportedChannelCounts;
    unsigned int _maximumChannelCount;
    _Bool _enabled;
    NSString *_name;
    unsigned long long _index;
    long long _busType;
    AUAudioUnit *_ownerAudioUnit;
    NSArray *_supportedChannelLayoutTags;
    double _contextPresentationLatency;
    vector_07ddb480 _observers;
}

@property(nonatomic) vector_07ddb480 observers; // @synthesize observers=_observers;
@property(nonatomic) double contextPresentationLatency; // @synthesize contextPresentationLatency=_contextPresentationLatency;
@property(readonly, copy, nonatomic) NSArray *supportedChannelLayoutTags; // @synthesize supportedChannelLayoutTags=_supportedChannelLayoutTags;
@property(readonly, nonatomic) AUAudioUnit *ownerAudioUnit; // @synthesize ownerAudioUnit=_ownerAudioUnit;
@property(readonly, nonatomic) long long busType; // @synthesize busType=_busType;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
@property(readonly, nonatomic) AVAudioFormat *format;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (_Bool)setFormat:(id)arg1 error:(id *)arg2;
- (void)setMaximumChannelCount:(unsigned int)arg1;
- (unsigned int)maximumChannelCount;
- (id)supportedChannelCounts;
- (void)setSupportedChannelCounts:(id)arg1;
- (void)setOwnerAudioUnit:(id)arg1;
- (void)setBusType:(long long)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFormat:(id)arg1 error:(id *)arg2;

@end
