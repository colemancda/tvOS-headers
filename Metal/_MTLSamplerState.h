//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/MTLSamplerState-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface _MTLSamplerState : NSObject <MTLSamplerState>
{
    id <MTLDevice> _device;
    NSString *_label;
}

@property(readonly) NSString *label; // @synthesize label=_label;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 samplerDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

