//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MFMessageTransferSelection : NSObject
{
    NSArray *_messages;
    long long _type;
}

+ (id)selectMessages:(id)arg1;
+ (id)selectAllWithKnownMessages:(id)arg1;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void)enumerateSelectionsByStoreUsingBlock:(CDUnknownBlockType)arg1;
- (id)debugDescription;
- (id)init;
- (id)initWithType:(long long)arg1 messages:(id)arg2;
- (void)dealloc;

@end
