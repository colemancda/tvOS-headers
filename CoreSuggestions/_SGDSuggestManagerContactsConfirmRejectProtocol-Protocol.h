//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SGRealtimeContact, SGRecordId;

@protocol _SGDSuggestManagerContactsConfirmRejectProtocol
- (void)rejectContactDetailRecord:(SGRecordId *)arg1 completion:(void (^)(NSError *))arg2;
- (void)confirmContactDetailRecord:(SGRecordId *)arg1 completion:(void (^)(NSError *))arg2;
- (void)rejectRecord:(SGRecordId *)arg1 completion:(void (^)(NSError *))arg2;
- (void)confirmRecord:(SGRecordId *)arg1 completion:(void (^)(NSError *))arg2;
- (void)rejectContact:(SGRealtimeContact *)arg1 completion:(void (^)(NSError *))arg2;
- (void)confirmContact:(SGRealtimeContact *)arg1 completion:(void (^)(NSError *))arg2;
@end

