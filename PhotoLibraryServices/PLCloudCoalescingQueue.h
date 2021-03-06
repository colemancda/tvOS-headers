//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PLCloudCoalescingQueue : NSObject
{
    Class _class;
    NSString *_name;
    struct sqlite3 *_database;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)truncateQueueAtFilePath:(id)arg1;
- (void)enumerateOutstandingObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (void)resetQueue;
- (id)name;
- (unsigned long long)count;
- (id)dequeueObject;
- (id)peekObject;
- (id)_inqPeekObject;
- (void)popObject;
- (void)enqueueObject:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)updateObject:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)newObjectFromData:(id)arg1;
- (void)storeObject:(id)arg1;
- (void)dealloc;
- (id)initWithClass:(Class)arg1;
- (id)initWithClass:(Class)arg1 uniqueName:(id)arg2;
- (const char *)schemaString;

@end

