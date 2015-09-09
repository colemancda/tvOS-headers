//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFloatingContentView.h>

#import <TVMLKit/TVAuxiliaryViewSelecting-Protocol.h>
#import <TVMLKit/_UIFloatingContentViewDelegate-Protocol.h>

@class NSString, TVImageView, TVMonogramDescription, TVMonogramViewConfiguration, UIImage, UIView;

@interface _TVMonogramView : _UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting>
{
    UIView *_unfocusedShadowView;
    UIView *_focusedShadowView;
    _Bool _isSelected;
    TVMonogramViewConfiguration *_configuration;
    UIImage *_image;
    double _unfocusedImageAlpha;
    TVImageView *_imageView;
    TVMonogramDescription *_monogramDescription;
    CDUnknownBlockType _pressCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType pressCompletionBlock; // @synthesize pressCompletionBlock=_pressCompletionBlock;
@property(retain, nonatomic) TVMonogramDescription *monogramDescription; // @synthesize monogramDescription=_monogramDescription;
@property(retain, nonatomic) TVImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double unfocusedImageAlpha; // @synthesize unfocusedImageAlpha=_unfocusedImageAlpha;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) TVMonogramViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_loadWithMonogramDescription:(id)arg1;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
