//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameKitServices/NSCoding-Protocol.h>

@class NSData;

@interface GCKOOBMessage : NSObject <NSCoding>
{
    unsigned int type;
    unsigned int band;
    NSData *data;
}

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)data;
- (unsigned int)band;
- (unsigned int)type;
- (id)init;

@end
