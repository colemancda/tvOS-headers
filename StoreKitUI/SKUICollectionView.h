//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class SKUIIndexBarControl, UICollectionViewLayout, UIRefreshControl;

@interface SKUICollectionView : UICollectionView
{
    _Bool _delegateWantsWillLayoutSubviews;
    _Bool _externalShowsHorizontalScrollIndicator;
    _Bool _externalShowsVerticalScrollIndicator;
    double _overrideBoundsWidth;
    UICollectionViewLayout *_pendingCollectionViewLayout;
    UIRefreshControl *_refreshControl;
    SKUIIndexBarControl *_indexBarControl;
}

@property(retain, nonatomic) SKUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) double overrideBoundsWidth; // @synthesize overrideBoundsWidth=_overrideBoundsWidth;
- (void).cxx_destruct;
- (void)_updateShowsScrollIndicators;
- (void)_updateIndexBarControlFrame;
- (void)setShowsVerticalScrollIndicator:(_Bool)arg1;
- (void)setShowsHorizontalScrollIndicator:(_Bool)arg1;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(_Bool *)arg5;
- (double)_offsetForRubberBandOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGRect)bounds;
- (void)setDelegate:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2;
- (id)collectionViewLayout;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end
