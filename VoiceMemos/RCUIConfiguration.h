//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/NSCopying-Protocol.h>

@class NSString, UIColor;

@interface RCUIConfiguration : NSObject <NSCopying>
{
    _Bool _waveformBoundaryLineDimInSelectionMode;
    _Bool _showsWaveformCenterline;
    float _minimumDecibelDisplayRange;
    float _maximumDecibelDisplayRange;
    NSString *_debugIdentifier;
    UIColor *_backgroundColor;
    UIColor *_waveformColor;
    UIColor *_waveformBoundaryLineColor;
    UIColor *_waveformHighlightColor;
    UIColor *_timeLineMarkerColor;
    UIColor *_timeLineTimeColor;
    UIColor *_acousticValueColor;
    UIColor *_acousticGradientMaskEndColor;
    double _acousticAnnotationVerticalMargin;
    UIColor *_playbackPositionBarColor;
    UIColor *_playbackPositionTimeColor;
    UIColor *_selectionOverlayColor;
    UIColor *_selectionOverlayEndpointBarColor;
    UIColor *_selectionOverlayEndpointTimeColor;
}

+ (id)defaultConfiguration;
@property(retain, nonatomic) UIColor *selectionOverlayEndpointTimeColor; // @synthesize selectionOverlayEndpointTimeColor=_selectionOverlayEndpointTimeColor;
@property(retain, nonatomic) UIColor *selectionOverlayEndpointBarColor; // @synthesize selectionOverlayEndpointBarColor=_selectionOverlayEndpointBarColor;
@property(retain, nonatomic) UIColor *selectionOverlayColor; // @synthesize selectionOverlayColor=_selectionOverlayColor;
@property(retain, nonatomic) UIColor *playbackPositionTimeColor; // @synthesize playbackPositionTimeColor=_playbackPositionTimeColor;
@property(retain, nonatomic) UIColor *playbackPositionBarColor; // @synthesize playbackPositionBarColor=_playbackPositionBarColor;
@property(nonatomic) float maximumDecibelDisplayRange; // @synthesize maximumDecibelDisplayRange=_maximumDecibelDisplayRange;
@property(nonatomic) float minimumDecibelDisplayRange; // @synthesize minimumDecibelDisplayRange=_minimumDecibelDisplayRange;
@property(nonatomic) double acousticAnnotationVerticalMargin; // @synthesize acousticAnnotationVerticalMargin=_acousticAnnotationVerticalMargin;
@property(retain, nonatomic) UIColor *acousticGradientMaskEndColor; // @synthesize acousticGradientMaskEndColor=_acousticGradientMaskEndColor;
@property(retain, nonatomic) UIColor *acousticValueColor; // @synthesize acousticValueColor=_acousticValueColor;
@property(retain, nonatomic) UIColor *timeLineTimeColor; // @synthesize timeLineTimeColor=_timeLineTimeColor;
@property(retain, nonatomic) UIColor *timeLineMarkerColor; // @synthesize timeLineMarkerColor=_timeLineMarkerColor;
@property(nonatomic) _Bool showsWaveformCenterline; // @synthesize showsWaveformCenterline=_showsWaveformCenterline;
@property(nonatomic) _Bool waveformBoundaryLineDimInSelectionMode; // @synthesize waveformBoundaryLineDimInSelectionMode=_waveformBoundaryLineDimInSelectionMode;
@property(retain, nonatomic) UIColor *waveformHighlightColor; // @synthesize waveformHighlightColor=_waveformHighlightColor;
@property(retain, nonatomic) UIColor *waveformBoundaryLineColor; // @synthesize waveformBoundaryLineColor=_waveformBoundaryLineColor;
@property(retain, nonatomic) UIColor *waveformColor; // @synthesize waveformColor=_waveformColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
