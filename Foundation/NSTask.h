//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface NSTask : NSObject
{
}

+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;
+ (id)launchedTaskWithDictionary:(id)arg1;
+ (id)currentTaskDictionary;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)init;
@property long long qualityOfService;
@property(retain) id standardError;
@property(retain) id standardOutput;
@property(retain) id standardInput;
@property(copy) NSString *currentDirectoryPath;
@property(copy) NSArray *arguments;
@property(copy) NSDictionary *environment;
@property(copy) NSString *launchPath;
@property(readonly) int processIdentifier;
- (long long)suspendCount;
- (_Bool)resume;
- (_Bool)suspend;
- (void)terminate;
- (void)interrupt;
- (void)launch;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) long long terminationReason;
@property(readonly) int terminationStatus;
@property(copy) CDUnknownBlockType terminationHandler;

@end

