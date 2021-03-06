//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightReceiver/NSXPCListenerDelegate-Protocol.h>
#import <SpotlightReceiver/SpotlightReceiverJob-Protocol.h>

@class NSMutableSet, NSString;
@protocol SpotlightReceiver;

@interface SpotlightReceiverDelegate : NSObject <NSXPCListenerDelegate, SpotlightReceiverJob>
{
    NSObject<SpotlightReceiver> *_receiver;
    NSMutableSet *_connections;
}

+ (void)startListening:(id)arg1 withReceiver:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) NSObject<SpotlightReceiver> *receiver; // @synthesize receiver=_receiver;
- (void).cxx_destruct;
- (void)userActions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purgeFromBundle:(id)arg1 identifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteFromBundle:(id)arg1 sinceData:(id)arg2 domains:(id)arg3 deletes:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)indexFromBundle:(id)arg1 items:(id)arg2 itemsContent:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)supportedBundleIDs:(CDUnknownBlockType)arg1;
- (void)supportedTypes:(CDUnknownBlockType)arg1;
- (id)initWithReceiver:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)xpcInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

