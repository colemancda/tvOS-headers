//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVKit/NSCacheDelegate-Protocol.h>

@class NSCache, NSMutableArray, NSString, TVSPlayer;
@protocol TVSPlaybackImageLoader, TVScrubImageLoaderDelegate;

@interface TVScrubImageLoader : NSObject <NSCacheDelegate>
{
    _Bool _imagesAvailable;
    id <TVScrubImageLoaderDelegate> _delegate;
    TVSPlayer *_player;
    id <TVSPlaybackImageLoader> _stillImageLoader;
    NSCache *_imageInfoCache;
    NSMutableArray *_imageInfosBeingLoaded;
    NSMutableArray *_loadedImageInfos;
    double _priorityImageTime;
    struct CGSize _maxImageSize;
}

@property(nonatomic) double priorityImageTime; // @synthesize priorityImageTime=_priorityImageTime;
@property(retain, nonatomic) NSMutableArray *loadedImageInfos; // @synthesize loadedImageInfos=_loadedImageInfos;
@property(retain, nonatomic) NSMutableArray *imageInfosBeingLoaded; // @synthesize imageInfosBeingLoaded=_imageInfosBeingLoaded;
@property(retain, nonatomic) NSCache *imageInfoCache; // @synthesize imageInfoCache=_imageInfoCache;
@property(retain, nonatomic) id <TVSPlaybackImageLoader> stillImageLoader; // @synthesize stillImageLoader=_stillImageLoader;
@property(nonatomic) struct CGSize maxImageSize; // @synthesize maxImageSize=_maxImageSize;
@property(retain, nonatomic) TVSPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool imagesAvailable; // @synthesize imagesAvailable=_imagesAvailable;
@property(nonatomic) __weak id <TVScrubImageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_timeAfterInsertingInterstitials:(double)arg1;
- (double)_timeAfterRemovingInterstitials:(double)arg1;
- (id)_closestLoadedImageInfoForTime:(double)arg1;
- (void)_saveLoadedImageInfo:(id)arg1;
- (id)_imageLoadInfoIfNeededForTime:(double)arg1;
- (id)_imageInfosNeededWithStride:(double)arg1;
- (id)_progressiveImageLoadInfosNeeded;
- (void)_loadImagesIfNecessary;
- (void)_cancelImageLoads;
- (_Bool)_okToLoadImages;
- (void)_reset;
- (void)_playerCurrentMediaItemMetadataDidChange:(id)arg1;
- (void)_playerCurrentMediaItemDidChange:(id)arg1;
- (void)_playerStateDidChange:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)closestImageForTime:(double)arg1 imageTime:(double *)arg2;
- (void)prioritizeLoadingOfImageAtTime:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 maxImageSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
