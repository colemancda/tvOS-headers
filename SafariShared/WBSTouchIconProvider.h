//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataProvider.h>

@class NSCache, WBSTouchIconCache;

@interface WBSTouchIconProvider : WBSSiteMetadataProvider
{
    NSCache *_cache;
    WBSTouchIconCache *_touchIconCache;
}

+ (id)generateFavoritesIconForTitle:(id)arg1 url:(id)arg2 backgroundColor:(id)arg3;
+ (id)generateDefaultFavoritesIconWithGlyphColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)favoritesGlyph;
+ (id)monogramConfiguration;
+ (id)defaultGlyphColor;
+ (id)defaultBackgroundColor;
+ (id)defaultFavoritesIcon;
@property(readonly, nonatomic) WBSTouchIconCache *touchIconCache; // @synthesize touchIconCache=_touchIconCache;
- (void).cxx_destruct;
- (id)_generateTouchIconFromTouchIcon:(id)arg1 forRequest:(id)arg2;
- (_Bool)_shouldGenerateTouchIconFromTouchIcon:(id)arg1 forRequest:(id)arg2;
- (id)_defaultTouchIconForRequest:(id)arg1;
- (_Bool)_shouldScheduleNetworkFetchForRequest:(id)arg1;
- (void)_iconDataDidChange:(id)arg1;
- (void)iconDidUpdateForHost:(id)arg1;
- (id)willReturnResponse:(id)arg1 forRequest:(id)arg2;
- (id)fallbackImageForRequest:(id)arg1;
- (id)keyStringForRequest:(id)arg1;
- (id)operationWithRequest:(id)arg1 processPool:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_saveTouchIconToDisk:(id)arg1 forRequest:(id)arg2 requestDidSucceed:(_Bool)arg3;
- (id)operationForRequest:(id)arg1 withProcessPool:(id)arg2;
- (id)responseForRequest:(id)arg1 responseType:(long long *)arg2;
- (_Bool)canHandleRequest:(id)arg1;
- (void)dealloc;
- (id)initWithTouchIconCache:(id)arg1;
- (id)init;

@end
