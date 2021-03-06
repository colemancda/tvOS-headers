//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDaemon, NSMutableSet, _HDWorkoutData;
@protocol OS_dispatch_queue;

@interface HDWorkoutManager : NSObject
{
    HDDaemon *_daemon;
    _HDWorkoutData *_currentWorkout;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_currentObservedTypes;
}

- (void).cxx_destruct;
- (void)_queue_didUpdateCurrentWorkoutSession;
- (void)_queue_stopDataCollection;
- (void)_queue_startDataCollection;
- (void)_queue_setViewOnWake:(_Bool)arg1 forWorkout:(id)arg2;
- (void)_queue_setDataCollectionForSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 isIndoor:(_Bool)arg3;
- (void)_queue_resetDataCollectionForWorkoutSession:(id)arg1;
- (void)_queue_setDataCollectionForWorkoutSession:(id)arg1;
- (void)_queue_setCurrentSessionState:(long long)arg1;
- (void)_queue_stopCurrentSession;
- (id)currentWorkoutClientIdentifier;
- (unsigned long long)currentWorkoutActivityType;
- (_Bool)hasAnyActiveWorkouts;
- (void)clientInvalidated:(id)arg1;
- (void)stopWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWorkoutSession:(id)arg1 clientIdentifier:(id)arg2 server:(id)arg3 isFirstParty:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithDaemon:(id)arg1;

@end

