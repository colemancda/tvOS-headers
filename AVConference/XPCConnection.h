//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;
@protocol OS_os_transaction, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface XPCConnection : NSObject
{
    NSObject<OS_xpc_object> *connection;
    int _pid;
    id context;
    NSData *tokenData;
    NSObject<OS_os_transaction> *_transaction;
    _Bool _isPersistent;
}

@property(retain, nonatomic) NSData *tokenData; // @synthesize tokenData;
@property(retain, nonatomic) id context; // @synthesize context;
@property NSObject<OS_xpc_object> *connection; // @synthesize connection;
@property(getter=isPersistent) _Bool persistent;
- (id)description;
@property int pid;
- (void)dealloc;
- (id)init;

@end
