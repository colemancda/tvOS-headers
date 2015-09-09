//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTTapConfig, NSString;
@protocol DTTapDelegate, OS_dispatch_source;

@interface _GenericTapGuarded : NSObject
{
    _Bool _stoppedWhileSuspended;
    _Bool _removeArchivingPathWhenComplete;
    _Bool _running;
    _Bool _connectionEnabled;
    _Bool _paused;
    int _suspendCount;
    NSString *_UUID;
    id <DTTapDelegate> _delegate;
    CDUnknownBlockType _taskForPid;
    NSObject<OS_dispatch_source> *_internalSrc;
    DTTapConfig *_config;
    NSString *_errorString;
}

@property(retain, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool connectionEnabled; // @synthesize connectionEnabled=_connectionEnabled;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(nonatomic) _Bool removeArchivingPathWhenComplete; // @synthesize removeArchivingPathWhenComplete=_removeArchivingPathWhenComplete;
@property(retain, nonatomic) DTTapConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool stoppedWhileSuspended; // @synthesize stoppedWhileSuspended=_stoppedWhileSuspended;
@property(nonatomic) int suspendCount; // @synthesize suspendCount=_suspendCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *internalSrc; // @synthesize internalSrc=_internalSrc;
@property(copy, nonatomic) CDUnknownBlockType taskForPid; // @synthesize taskForPid=_taskForPid;
@property(retain, nonatomic) id <DTTapDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;

@end
