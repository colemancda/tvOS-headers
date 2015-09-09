//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PLCloudTrigger : NSObject
{
    NSObject<OS_dispatch_queue> *_triggerQueue;
    NSMutableDictionary *_subscriptions;
}

- (void)activate;
- (void)triggerWithContextObject:(id)arg1;
- (void)unsubscribeWithInstance:(id)arg1;
- (void)subscribeWithInstance:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;

@end
