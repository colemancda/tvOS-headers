//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/XBSnapshotDataProvider-Protocol.h>

@class NSData, NSString, XBDisplaySnapshot, XBSnapshotDataProviderContext;

@interface XBLaunchImageDataProvider : NSObject <XBSnapshotDataProvider>
{
    XBDisplaySnapshot *_snapshot;
    NSData *_cachedImageData;
}

- (void)_invalidateSnapshotData;
- (id)fetchImageData:(out struct CGAffineTransform *)arg1;
@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 contextID:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

