//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVImageRepresentation.h>

@class NSBundle, NSString, UITraitCollection;

@interface _TVNamedImageRepresentation : TVImageRepresentation
{
    NSBundle *_bundle;
    NSString *_imageName;
    UITraitCollection *_traitCollection;
}

- (void).cxx_destruct;
- (id)_originalImageCacheKey;
- (struct CGImage *)_originalImage;
- (id)initWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;

@end

