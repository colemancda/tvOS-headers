//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShiftLocation : NSObject
{
    CDStruct_2c43369c _coordinate;
    double _accuracy;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _mustGoToNetworkCallback;
    struct __CFRunLoop *_runLoop;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (void)performMustGoToNetwork;
- (void)performErrorHandler:(id)arg1;
- (void)performCompletionHandlerWithShiftedCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2;
- (void)_performOnCallbackQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5 callbackRunLoop:(struct __CFRunLoop *)arg6;
- (id)_initWithCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5;

@end
