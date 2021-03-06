//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/NSCopying-Protocol.h>

@class _UIMotionEffectAcceleratedOutputRange;

__attribute__((visibility("hidden")))
@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding>
{
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;
    double _planarRotationAngle;
    struct UIOffset _viewerOffset;
}

@property(nonatomic) double planarRotationAngle; // @synthesize planarRotationAngle=_planarRotationAngle;
@property(nonatomic) struct UIOffset viewerOffset; // @synthesize viewerOffset=_viewerOffset;
- (void).cxx_destruct;
- (struct UIOffset)_acceleratedOutputForViewerOffset:(struct UIOffset)arg1 accelerationBoostFactor:(struct CGPoint)arg2;
- (void)_setAcceleration:(struct CGPoint)arg1 fixingOutputForViewerOffset:(struct UIOffset)arg2;
- (void)_reset;
- (id)_acceleratedOutputRange;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

