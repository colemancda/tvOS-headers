//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVSPlaybackUtilities : NSObject
{
}

+ (unsigned long long)blueDotStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(_Bool)arg3 playCount:(unsigned long long)arg4;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2;
+ (double)playedThresholdTimeForDuration:(double)arg1;

@end

