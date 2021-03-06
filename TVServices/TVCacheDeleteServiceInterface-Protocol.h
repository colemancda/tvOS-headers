//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/NSObject-Protocol.h>

@class NSURL, TVSAppCachePurgeRequest;

@protocol TVCacheDeleteServiceInterface <NSObject>
- (void)fetchApplicationStateWithReply:(void (^)(long long, NSError *))arg1;
- (void)removeAllAppCachePurgeRequestsWithReply:(void (^)(NSError *))arg1;
- (void)removeAppCachePurgeRequestWithURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)addAppCachePurgeRequest:(TVSAppCachePurgeRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (void)setDoNotPurge:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
@end

