//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNTechnique.h>

#import <SceneKit/SCNStereoscopicRenderingTechnique-Protocol.h>

@interface SCNHeadMountedDisplayRenderingTechnique : SCNTechnique <SCNStereoscopicRenderingTechnique>
{
}

@property(nonatomic) struct SCNVector4 barrelDistortionWarpCoefficients;
@property(nonatomic) struct CGPoint barrelDistortionLensCenter;
@property(nonatomic) double barrelDistortionOutputScale;
@property(nonatomic) double barrelDistortionInputScale;
@property(nonatomic) double interaxialDistance;
- (id)init;

@end
