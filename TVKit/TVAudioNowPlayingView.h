//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TVAudioNowPlayingMetadataView;

@interface TVAudioNowPlayingView : UIView
{
    _Bool _flip;
    TVAudioNowPlayingMetadataView *_currentMetadataView;
    _Bool _blockFlip;
}

- (void).cxx_destruct;
- (void)performFlip;
- (void)setElapsedTime:(double)arg1;
- (void)setItemConfigurationObject:(id)arg1 shouldTransition:(_Bool)arg2;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;

@end
