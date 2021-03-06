//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Sharing/SFAirDropBrowserDelegate-Protocol.h>
#import <Sharing/SFCollectionViewDelegateLayout-Protocol.h>
#import <Sharing/SFPersonCollectionViewCellDelegate-Protocol.h>
#import <Sharing/SFWirelessSettingsControllerDelegate-Protocol.h>
#import <Sharing/UICollectionViewDataSource-Protocol.h>

@class ALAssetsLibrary, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, NSString, SFAirDropActiveIconView, SFAirDropBrowser, SFAirDropIconView, SFCollectionViewLayout, SFPersonCollectionViewCell, SFWirelessSettingsController, UICollectionView, UILabel;
@protocol SFAirDropActivityViewControllerDelegate;

@interface SFAirDropActivityViewController : UIViewController <UICollectionViewDataSource, SFCollectionViewDelegateLayout, SFAirDropBrowserDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate>
{
    long long _attachmentCount;
    NSString *_sessionID;
    long long _sharedItemsRequestID;
    UILabel *_titleLabel;
    SFAirDropIconView *_airDropIconView;
    NSLayoutConstraint *_airDropIconLeftConstraint;
    UILabel *_noWifiLabel;
    NSLayoutConstraint *_noWifiRightConstraint;
    SFAirDropActiveIconView *_airDropActiveIconView;
    NSLayoutConstraint *_airDropActiveIconLeftConstraint;
    UILabel *_instructionsLabel;
    NSLayoutConstraint *_instructionsRightConstraint;
    SFAirDropActiveIconView *_airDropInactiveIconView;
    NSLayoutConstraint *_airDropInactiveIconLeftConstraint;
    UILabel *_noAWDLLabel;
    NSLayoutConstraint *_noAWDLRightConstraint;
    UICollectionView *_collectionView;
    SFCollectionViewLayout *_collectionViewLayout;
    SFPersonCollectionViewCell *_prototypeActivityCell;
    SFAirDropBrowser *_browser;
    id _progressToken;
    NSMutableDictionary *_personToProgress;
    NSMutableDictionary *_personToStoredTransferFinalState;
    NSMutableDictionary *_personToSharedItemsRequestID;
    NSMutableDictionary *_sharedItemsRequestIDToPreviewPhoto;
    SFWirelessSettingsController *_wirelessSettings;
    NSMutableSet *_cachedSharedItems;
    _Bool _itemsRequested;
    _Bool _itemsReady;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_objectChanges;
    ALAssetsLibrary *_assetsLibrary;
    long long _generatedPreviews;
    _Bool _sharedItemsAvailable;
    _Bool _otherActivityViewPresented;
    _Bool _darkStyleOnLegacyApp;
    NSObject<SFAirDropActivityViewControllerDelegate> *_delegate;
    NSString *_overriddenTitleText;
    NSString *_overriddenNoWiFIBTText;
    NSString *_overriddenNoAWDLText;
    NSString *_overriddenInstructionsText;
}

+ (id)classesForItem:(id)arg1;
+ (_Bool)airDropActivityCanPerformActivityWithItems:(id)arg1;
+ (_Bool)isAirDropAvailable;
@property(copy, nonatomic) NSString *overriddenInstructionsText; // @synthesize overriddenInstructionsText=_overriddenInstructionsText;
@property(copy, nonatomic) NSString *overriddenNoAWDLText; // @synthesize overriddenNoAWDLText=_overriddenNoAWDLText;
@property(copy, nonatomic) NSString *overriddenNoWiFIBTText; // @synthesize overriddenNoWiFIBTText=_overriddenNoWiFIBTText;
@property(copy, nonatomic) NSString *overriddenTitleText; // @synthesize overriddenTitleText=_overriddenTitleText;
@property(nonatomic) _Bool darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
@property(nonatomic) _Bool otherActivityViewPresented; // @synthesize otherActivityViewPresented=_otherActivityViewPresented;
@property(nonatomic) _Bool sharedItemsAvailable; // @synthesize sharedItemsAvailable=_sharedItemsAvailable;
@property(nonatomic) __weak NSObject<SFAirDropActivityViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)generateSpecialPreviewPhotoForRequestID:(long long)arg1;
- (_Bool)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (_Bool)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (_Bool)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5;
- (_Bool)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (_Bool)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (_Bool)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id *)arg3;
- (void)startTransferForPeople:(id)arg1;
- (void)setNeedsRequestingSharedItems;
- (id)cellForPerson:(id)arg1;
- (void)browserDidChangePeople:(id)arg1;
- (void)browser:(id)arg1 didDeletePersonAtIndex:(unsigned long long)arg2;
- (void)browser:(id)arg1 didInsertPersonAtIndex:(unsigned long long)arg2;
- (void)browserWillChangePeople:(id)arg1;
- (void)wirelessSettingsDidChange:(id)arg1;
- (void)personCollectionViewCellDidFinishTransfer:(id)arg1;
- (void)personCollectionViewCellDidStartTransfer:(id)arg1;
- (void)personCollectionViewCellDidTerminateTransfer:(id)arg1;
- (void)unpublishedProgressForPersonWithRealName:(id)arg1;
- (void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2;
- (void)unsubscribeToProgresses;
- (void)subscribeToProgresses;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(readonly, nonatomic) struct CGSize suggestedThumbnailSize;
- (void)updateContentAreaAnimated:(_Bool)arg1;
- (void)enableAirDropRequiredFeatures;
- (_Bool)isBluetoothEnabled;
- (_Bool)isWifiEnabled;
- (_Bool)isTetheredModeEnabled;
- (id)attributedStringWithTitle:(id)arg1 content:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;
- (id)titleText;
- (id)instructionsText;
- (id)noAWDLText;
- (id)noWiFiBTText;
- (id)wifiBtHelpTextLocalizedStringKey;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

