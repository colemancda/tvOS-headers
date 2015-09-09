//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <MapKit/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <MapKit/MKStackingViewControllerPreferredSizeUse-Protocol.h>

@class MKMapItem, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceTransitAttributionViewController : UITableViewController <GEOResourceManifestTileGroupObserver, MKStackingViewControllerPreferredSizeUse>
{
    _Bool _isAttributionURLAvailable;
    NSString *_attributionSummary;
    MKMapItem *_mapItem;
}

@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(copy, nonatomic) NSString *attributionSummary; // @synthesize attributionSummary=_attributionSummary;
- (void).cxx_destruct;
- (void)_presentTransitAttributionDetails;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)_hasAttribution;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
@property(readonly, nonatomic) _Bool requiresPreferredContentSizeInStackingView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
