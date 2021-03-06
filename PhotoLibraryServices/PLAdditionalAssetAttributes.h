//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class CLLocation, NSData, NSDate, NSNumber, NSSet, NSString, PLAssetDescription, PLCloudMaster, PLManagedAsset, PLUnmanagedAdjustment;

@interface PLAdditionalAssetAttributes : PLManagedObject
{
    CLLocation *__cachedShiftedLocation;
}

+ (id)listOfSyncedProperties;
+ (void)fromExtraDurationData:(id)arg1 getStillDisplayTime:(CDStruct_198678f7 *)arg2 videoDuration:(CDStruct_198678f7 *)arg3;
+ (id)newExtraDurationDataFromStillDisplayTime:(CDStruct_198678f7)arg1 videoDuration:(CDStruct_198678f7)arg2;
@property(retain, nonatomic, setter=_setCachedShiftedLocation:) CLLocation *_cachedShiftedLocation; // @synthesize _cachedShiftedLocation=__cachedShiftedLocation;
- (void)dealloc;
@property(retain, nonatomic) CLLocation *shiftedLocation;
@property(retain, nonatomic) NSData *videoComplementData;
@property(readonly, nonatomic) _Bool hasVideoComplementData;
- (void)willSave;
- (_Bool)_needToSetModificationDateOnAsset:(id)arg1;
- (_Bool)validateForUpdate:(id *)arg1;
- (_Bool)validateForInsert:(id *)arg1;
@property(retain, nonatomic) NSString *longDescription;
- (_Bool)migrateReverseLocationDataFromKeyedArchiverFormat;

// Remaining properties
@property(copy, nonatomic) NSString *adjustedFingerPrint; // @dynamic adjustedFingerPrint;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(retain, nonatomic) PLAssetDescription *assetDescription; // @dynamic assetDescription;
@property(nonatomic) short cameraCaptureDevice; // @dynamic cameraCaptureDevice;
@property(nonatomic) int cloudAvalanchePickType; // @dynamic cloudAvalanchePickType;
@property(nonatomic) short cloudKindSubtype; // @dynamic cloudKindSubtype;
@property(retain, nonatomic) PLCloudMaster *cloudMaster; // @dynamic cloudMaster;
@property(retain, nonatomic) NSSet *cloudResources; // @dynamic cloudResources;
@property(retain, nonatomic) NSString *creatorBundleID; // @dynamic creatorBundleID;
@property(retain, nonatomic) NSString *customCollectionName; // @dynamic customCollectionName;
@property(retain, nonatomic) NSString *customCollectionUUID; // @dynamic customCollectionUUID;
@property(retain, nonatomic) NSString *customMomentName; // @dynamic customMomentName;
@property(retain, nonatomic) NSString *customMomentUUID; // @dynamic customMomentUUID;
@property(retain, nonatomic) NSString *editorBundleID; // @dynamic editorBundleID;
@property(retain, nonatomic) NSNumber *embeddedThumbnailHeight; // @dynamic embeddedThumbnailHeight;
@property(retain, nonatomic) NSNumber *embeddedThumbnailLength; // @dynamic embeddedThumbnailLength;
@property(retain, nonatomic) NSNumber *embeddedThumbnailOffset; // @dynamic embeddedThumbnailOffset;
@property(retain, nonatomic) NSNumber *embeddedThumbnailWidth; // @dynamic embeddedThumbnailWidth;
@property(retain, nonatomic) NSString *exifTimestampString; // @dynamic exifTimestampString;
@property(retain, nonatomic) NSNumber *externalUsageIntent; // @dynamic externalUsageIntent;
@property(retain, nonatomic) NSData *faceRegions; // @dynamic faceRegions;
@property(retain, nonatomic) id importSessionID; // @dynamic importSessionID;
@property(retain, nonatomic) NSSet *keywords; // @dynamic keywords;
@property(retain, nonatomic) NSDate *lastUploadAttemptDate; // @dynamic lastUploadAttemptDate;
@property(retain, nonatomic) NSNumber *locationHash; // @dynamic locationHash;
@property(copy, nonatomic) NSString *masterFingerPrint; // @dynamic masterFingerPrint;
@property(retain, nonatomic) id originalAssetsUUID; // @dynamic originalAssetsUUID;
@property(retain, nonatomic) NSString *originalFilename; // @dynamic originalFilename;
@property(retain, nonatomic) NSNumber *originalFilesize; // @dynamic originalFilesize;
@property(retain, nonatomic) NSData *originalHash; // @dynamic originalHash;
@property(retain, nonatomic) NSNumber *originalHeight; // @dynamic originalHeight;
@property(retain, nonatomic) NSNumber *originalOrientation; // @dynamic originalOrientation;
@property(retain, nonatomic) NSString *originalPath; // @dynamic originalPath;
@property(retain, nonatomic) NSNumber *originalResourceChoice; // @dynamic originalResourceChoice;
@property(retain, nonatomic) NSNumber *originalWidth; // @dynamic originalWidth;
@property(retain, nonatomic) NSSet *personReferences; // @dynamic personReferences;
@property(retain, nonatomic) NSData *placeAnnotationData; // @dynamic placeAnnotationData;
@property(retain, nonatomic) NSString *publicGlobalUUID; // @dynamic publicGlobalUUID;
@property(retain, nonatomic) NSData *reverseLocationData; // @dynamic reverseLocationData;
@property(retain, nonatomic) NSNumber *reverseLocationDataIsValid; // @dynamic reverseLocationDataIsValid;
@property(retain, nonatomic) NSData *shiftedLocationData; // @dynamic shiftedLocationData;
@property(nonatomic) _Bool shiftedLocationIsValid; // @dynamic shiftedLocationIsValid;
@property(retain, nonatomic) NSString *timeZoneName; // @dynamic timeZoneName;
@property(retain, nonatomic) NSNumber *timeZoneOffset; // @dynamic timeZoneOffset;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) PLUnmanagedAdjustment *unmanagedAdjustment; // @dynamic unmanagedAdjustment;
@property(retain, nonatomic) NSNumber *uploadAttempts; // @dynamic uploadAttempts;
@property(nonatomic) int videoCpDisplayTimescale; // @dynamic videoCpDisplayTimescale;
@property(nonatomic) long long videoCpDisplayValue; // @dynamic videoCpDisplayValue;
@property(nonatomic) int videoCpDurationTimescale; // @dynamic videoCpDurationTimescale;
@property(nonatomic) long long videoCpDurationValue; // @dynamic videoCpDurationValue;
@property(nonatomic) unsigned short videoCpVisibilityState; // @dynamic videoCpVisibilityState;

@end

