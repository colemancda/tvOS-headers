//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BYBuddyDaemonController : NSObject
{
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (_Bool)setupAssistantNeedsToRun;
- (id)_daemonConnection;
- (id)init;

@end
