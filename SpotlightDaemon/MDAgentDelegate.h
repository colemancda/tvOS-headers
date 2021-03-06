//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString;
@protocol MDIndexer;

@interface MDAgentDelegate : NSObject <NSXPCListenerDelegate>
{
    NSObject<MDIndexer> *_indexer;
    Class _agentClass;
    NSMutableSet *_clients;
}

@property(retain) NSMutableSet *clients; // @synthesize clients=_clients;
@property(retain) Class agentClass; // @synthesize agentClass=_agentClass;
@property(retain) NSObject<MDIndexer> *indexer; // @synthesize indexer=_indexer;
- (void).cxx_destruct;
- (id)allClients;
- (void)_removeClientConnection:(id)arg1;
- (void)_addClientConnection:(id)arg1 clientLink:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

