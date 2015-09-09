//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVOutputSettingsAssistantVideoSettingsAdjuster-Protocol.h>

@class NSDictionary, NSString;

@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject <AVOutputSettingsAssistantVideoSettingsAdjuster>
{
    NSString *_outputSettingsPresetIdentifier;
    NSDictionary *_exportSettings;
}

- (long long)averageBitRateForSourceDimensions:(struct CGSize)arg1 andTargetFrameRate:(float)arg2;
- (void)dealloc;
- (id)initWithOutputSettingsPreset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
