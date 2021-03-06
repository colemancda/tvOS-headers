//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSURL;
@protocol OS_dispatch_queue;

@interface WBSSiteMetadataImageCache : NSObject
{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSMutableDictionary *_imagesForKeyStrings;
    NSMutableDictionary *_imageTypeToRetainCountMaps;
    NSMutableSet *_pendingKeyStringRequests;
    NSMutableSet *_missingImageKeyStrings;
    NSMutableDictionary *_cacheSettings;
    struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter>> _cacheSettingsWriter;
    _Bool _terminating;
    NSURL *_imageDirectoryURL;
}

+ (const char *)diskAccessQueueName;
@property(readonly, nonatomic, getter=isTerminating) _Bool terminating; // @synthesize terminating=_terminating;
@property(readonly, nonatomic) NSURL *imageDirectoryURL; // @synthesize imageDirectoryURL=_imageDirectoryURL;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didRemoveImageForKeyString:(id)arg1 type:(long long)arg2;
- (void)notifyImageWasLoaded:(id)arg1 forKeyString:(id)arg2 type:(long long)arg3;
- (void)didFinishLoadingSettings;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1;
- (void)notifyDidFinishLoadingSettings;
- (_Bool)areSettingsLoaded;
- (void)saveCacheSettingsSoon;
- (id)_cacheSettingsFileURL;
- (void)removeImageFromCacheForKeyString:(id)arg1 type:(long long)arg2;
- (_Bool)isImageRetainedForKeyString:(id)arg1 type:(long long)arg2;
- (void)releaseImageForKeyString:(id)arg1 type:(long long)arg2;
- (void)retainImageForKeyString:(id)arg1 type:(long long)arg2;
- (id)keyStringsToRetainCountsForType:(long long)arg1;
- (void)setImageState:(long long)arg1 forKeyString:(id)arg2;
- (long long)imageStateForKeyString:(id)arg1;
- (void)removeAllImages;
- (void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2 type:(long long)arg3;
- (id)imageForKeyString:(id)arg1 type:(long long)arg2;
- (void)_removeImagesPassingTest:(CDUnknownBlockType)arg1;
- (void)_didLoadImage:(id)arg1 forKeyString:(id)arg2 type:(long long)arg3;
- (id)_loadImageFromDiskForKeyString:(id)arg1 type:(long long)arg2;
- (id)_fileNameForKeyString:(id)arg1 type:(long long)arg2;
- (id)_fileLocationForKeyString:(id)arg1 type:(long long)arg2;
- (void)_requestImageForKeyString:(id)arg1 type:(long long)arg2;
- (void)dispatchDiskAccessBlock:(CDUnknownBlockType)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)purgeUnneededImages;
- (id)initWithImageDirectoryURL:(id)arg1;
- (id)init;

@end

