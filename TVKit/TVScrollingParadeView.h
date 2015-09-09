//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSObject, _TVImageLoaderQueue;
@protocol OS_dispatch_group;

@interface TVScrollingParadeView : UIView
{
    _Bool _animating;
    unsigned long long _additionalImageViewCount;
    NSObject<OS_dispatch_group> *_animationGroup;
    NSMutableArray *_imageViews;
    _TVImageLoaderQueue *_loaderQueue;
    _Bool _paused;
    NSArray *_imageProxies;
}

@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void).cxx_destruct;
- (void)_stopAnimations;
- (void)_startAnimations;
- (void)_addImageToAnimationContainer:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end
