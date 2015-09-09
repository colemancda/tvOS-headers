//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIContext, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISmartToneFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputExposure;
    NSNumber *inputContrast;
    NSNumber *inputBrightness;
    NSNumber *inputShadows;
    NSNumber *inputHighlights;
    NSNumber *inputBlack;
    NSNumber *inputUseCube;
    CIImage *_cubeImage;
    CIContext *_cubeContext;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputUseCube; // @synthesize inputUseCube;
@property(retain, nonatomic) NSNumber *inputBlack; // @synthesize inputBlack;
@property(retain, nonatomic) NSNumber *inputHighlights; // @synthesize inputHighlights;
@property(retain, nonatomic) NSNumber *inputShadows; // @synthesize inputShadows;
@property(retain, nonatomic) NSNumber *inputBrightness; // @synthesize inputBrightness;
@property(retain, nonatomic) NSNumber *inputContrast; // @synthesize inputContrast;
@property(retain, nonatomic) NSNumber *inputExposure; // @synthesize inputExposure;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)_kernelH;
- (id)_kernelC;
- (id)_kernelBpos;
- (id)_kernelBneg;
- (void)dealloc;
- (_Bool)_isIdentity;

@end
