//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDAuthorizationManager, HDBackgroundTaskScheduler, HDContentProtectionManager, HDDataProvenanceManager, HDDatabasePruningManager, HDDeviceEntity, HDDeviceManager, HDNanoSyncManager, HDPluginManager, HDProcessStateManager, HDSourceManager, HDUnitPreferencesManager, HDUserCharacteristicsManager, HDWorkoutManager, HKObject, HKSampleType, NSArray, NSDate, NSDictionary, NSString, NSUUID;
@protocol HDDaemonDeviceManager, HDHealthDaemonReadyObserver, HDHealthDataCollectionManager, HDHealthDataManager, HDHealthDatabase, HDHealthMetadataManager, HDPairedWatchBundleIdentifierProvider, HDSyncEngine, HDViewOnWakeService;

@protocol HDHealthDaemon <NSObject>
@property(readonly) _Bool isAppleWatch;
@property(readonly, nonatomic) HDDatabasePruningManager *databasePruningManager;
@property(retain, nonatomic) id <HDViewOnWakeService> viewOnWakeService;
@property(retain, nonatomic) HDWorkoutManager *workoutManager;
@property(readonly, nonatomic) HDAuthorizationManager *authorizationManager;
@property(readonly, nonatomic) HDNanoSyncManager *nanoSyncManager;
@property(readonly, nonatomic) HDUnitPreferencesManager *unitPreferencesManager;
@property(readonly) HDDataProvenanceManager *dataProvenanceManager;
@property(readonly) HDPluginManager *pluginManager;
@property(readonly) HDProcessStateManager *processStateManager;
@property(readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property(readonly) HDContentProtectionManager *contentProtectionManager;
@property(readonly) HDUserCharacteristicsManager *userCharacteristicsManager;
@property(readonly) id <HDDaemonDeviceManager> healthDeviceManager;
@property(readonly) id <HDHealthMetadataManager> healthMetadataManager;
@property(readonly) HDDeviceManager *healthSourceDeviceManager;
@property(readonly) HDSourceManager *healthSourceManager;
@property(readonly) id <HDSyncEngine> syncEngine;
@property(readonly) id <HDHealthDataManager> healthDataManager;
@property(readonly) id <HDHealthDataCollectionManager> healthDataCollectionManager;
@property(readonly) id <HDHealthDatabase> healthDatabase;
@property(readonly) NSString *homeDirectoryPath;
- (void)didUpdateActiveWorkoutServers;
- (void)pauseAllActiveWorkoutsWithCompletion:(void (^)(void))arg1;
- (_Bool)hasAnyActiveWorkouts;
- (void)terminate;
- (void)syncImmediatelyWithReason:(NSString *)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(NSString *)arg1 transactionName:(NSString *)arg2 powerAssertionInterval:(double)arg3 block:(void (^)(void))arg4;
- (void)updateActivityCacheForNewWorkoutSamples;
- (void)invalidateActivityAlertSuppressionForIdentifier:(NSString *)arg1;
- (void)suppressActivityAlertsForIdentifier:(NSString *)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(NSDate *)arg3;
- (void)setDataCollectionOptions:(NSDictionary *)arg1 forKey:(NSString *)arg2 type:(HKSampleType *)arg3 clientUUID:(NSUUID *)arg4;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (_Bool)persistAndNotifyDataObjects:(NSArray *)arg1 device:(HDDeviceEntity *)arg2 error:(id *)arg3;
- (_Bool)persistAndNotifyDataObject:(HKObject *)arg1 device:(HDDeviceEntity *)arg2 error:(id *)arg3;
- (void)endTransaction:(NSString *)arg1;
- (void)beginTransaction:(NSString *)arg1;
- (void)setPairedWatchBundleIdentifierProvider:(id <HDPairedWatchBundleIdentifierProvider>)arg1;
- (void)registerForDaemonReady:(id <HDHealthDaemonReadyObserver>)arg1;
@end

