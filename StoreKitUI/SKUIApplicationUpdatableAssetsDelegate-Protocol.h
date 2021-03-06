//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSString, NSURL, SKUIApplicationController;

@protocol SKUIApplicationUpdatableAssetsDelegate <NSObject>

@optional
- (NSString *)updatableAssetsManifestURLBagKey;
- (NSURL *)updatableAssetsManifestURL;
- (_Bool)loadApplicationAfterUpdatableAssetsRefresh;
- (_Bool)clearUpdatableAssetsCacheOnLaunch;
- (NSURL *)bundledUpdatableAssetsManifestURL;
- (void)applicationDidLoadFromUpdatableAssetsCache:(SKUIApplicationController *)arg1;
@end

