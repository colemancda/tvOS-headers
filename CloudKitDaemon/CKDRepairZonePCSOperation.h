//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDRepairZonePCSOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _zonePCSRepairProgressBlock;
    NSArray *_zoneIDs;
    NSMutableArray *_fetchedZones;
    NSMutableArray *_fixedZones;
    NSMutableDictionary *_pcsInfoByZoneID;
}

@property(retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID; // @synthesize pcsInfoByZoneID=_pcsInfoByZoneID;
@property(retain, nonatomic) NSMutableArray *fixedZones; // @synthesize fixedZones=_fixedZones;
@property(retain, nonatomic) NSMutableArray *fetchedZones; // @synthesize fetchedZones=_fetchedZones;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(copy, nonatomic) CDUnknownBlockType zonePCSRepairProgressBlock; // @synthesize zonePCSRepairProgressBlock=_zonePCSRepairProgressBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_fetchZones;
- (void)_checkZonePCS;
- (id)_checkPCSDataForZone:(id)arg1;
- (void)_uploadRepairedZones;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
