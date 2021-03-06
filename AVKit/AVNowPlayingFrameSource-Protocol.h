//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVNowPlayingTransportBar, NSString, UIImage;

@protocol AVNowPlayingFrameSource <NSObject>
- (_Bool)shouldDisplayFramesForTransportBar:(AVNowPlayingTransportBar *)arg1;
- (void)transportBar:(AVNowPlayingTransportBar *)arg1 didRevealFrameIndex:(unsigned long long)arg2;
- (NSString *)transportBar:(AVNowPlayingTransportBar *)arg1 titleForChapter:(unsigned long long)arg2;
- (UIImage *)transportBar:(AVNowPlayingTransportBar *)arg1 bestAvailableImageForFrameIndex:(unsigned long long)arg2;
- (unsigned long long)transportBar:(AVNowPlayingTransportBar *)arg1 bestAvailableFrameForFrameIndex:(unsigned long long)arg2;
- (double)transportBar:(AVNowPlayingTransportBar *)arg1 timeIntervalForFrameIndex:(unsigned long long)arg2;
- (UIImage *)transportBar:(AVNowPlayingTransportBar *)arg1 imageForFrameIndex:(unsigned long long)arg2;
- (struct CGSize)aspectRatioForTransportBar:(AVNowPlayingTransportBar *)arg1;
- (unsigned long long)numberOfFramesForTransportBar:(AVNowPlayingTransportBar *)arg1;
@end

