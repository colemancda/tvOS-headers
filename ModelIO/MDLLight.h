//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLObject.h>

@interface MDLLight : MDLObject
{
    struct RTLight *_light;
    unsigned long long _lightType;
}

@property(nonatomic) unsigned long long lightType; // @synthesize lightType=_lightType;
- (void)setTransform:(id)arg1;
- (struct CGColor *)irradianceAtPoint:(struct CGColorSpace *)arg1 colorSpace: /* Error: Ran out of types for this method. */;
- (struct CGColor *)irradianceAtPoint: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) struct RTLight *rtLight;
- (void)dealloc;
- (id)init;

@end

