//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlaceNearbyAppsViewController, NSNumber, NSString;

@protocol MKPlaceNearbyAppsViewControllerDelegate <NSObject>
- (void)nearbyAppsController:(MKPlaceNearbyAppsViewController *)arg1 showStorePageWithURL:(NSString *)arg2 storeID:(NSNumber *)arg3;
- (void)nearbyAppsController:(MKPlaceNearbyAppsViewController *)arg1 openAppWithBundleID:(NSString *)arg2 storeID:(NSNumber *)arg3;
@end

