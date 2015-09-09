//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface QLThumbnailGenerationQueue : NSObject
{
    NSOperationQueue *_queue;
    NSMutableDictionary *_queuedURLs;
}

+ (id)sharedInstance;
- (void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg1;
- (void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
