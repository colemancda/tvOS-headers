//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSDate, NSError, _HKWorkoutSession;

@protocol _HKWorkoutSessionDelegate <NSObject>
- (void)workoutSession:(_HKWorkoutSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)workoutSession:(_HKWorkoutSession *)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(NSDate *)arg4;
@end
