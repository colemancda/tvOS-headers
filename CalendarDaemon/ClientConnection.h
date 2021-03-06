//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADOperationProxy, ClientIdentity, NSLock, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSXPCConnection;
@protocol ClientConnectionDelegate, OS_dispatch_queue;

@interface ClientConnection : NSObject
{
    int _options;
    NSString *_path;
    _Bool _allowedEntityTypesValid;
    long long _eventAccess;
    long long _reminderAccess;
    NSLock *_restrictionsLock;
    NSSet *_restrictedStoreRowIDs;
    NSSet *_restrictedCalendarRowIDs;
    int _sourceAccountManagement;
    struct CalDatabase *_database;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSOperationQueue *_operations;
    NSMutableDictionary *_insertedObjects;
    NSMutableSet *_canceledRequests;
    NSObject<OS_dispatch_queue> *_canceledRequestsLock;
    int _connectionIdentifier;
    CADOperationProxy *_cadOperationProxy;
    id <ClientConnectionDelegate> _delegate;
    ClientIdentity *_identity;
    NSXPCConnection *_xpcConnection;
}

@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) ClientIdentity *identity; // @synthesize identity=_identity;
@property(nonatomic) struct CalDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak id <ClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property int connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
- (void).cxx_destruct;
- (_Bool)isCalendarItemRestricted:(void *)arg1;
- (_Bool)isCalendarRestricted:(void *)arg1;
- (_Bool)isStoreRestricted:(void *)arg1;
- (id)restrictedCalendarRowIDsWithValidator:(id)arg1;
- (id)restrictedCalendarRowIDs;
- (id)_restrictedStoreRowIDs;
- (id)restrictedStoreRowIDs;
- (void)setSourceAccountManagement:(int)arg1;
- (_Bool)reminderAccessGranted;
- (_Bool)eventAccessGranted;
- (void)clearCachedAuthorizationStatus;
- (void)_loadAccessPermissionsIfNeeded;
- (void)dumpState;
- (void)_databaseChanged;
- (id)insertedObjects;
- (void)clearInsertedObjects;
- (void *)objectForKey:(id)arg1;
- (void)insertObject:(void *)arg1 key:(id)arg2;
- (id)operations;
- (void)addOperation:(id)arg1;
- (void)setDatabasePath:(id)arg1 andInitOptions:(int)arg2;
@property(readonly, nonatomic) CADOperationProxy *cadOperationProxy; // @synthesize cadOperationProxy=_cadOperationProxy;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;

@end

