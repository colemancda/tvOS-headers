//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/ISOperationDelegate-Protocol.h>

@class ISURLOperation, NSInputStream, NSMutableData, NSMutableURLRequest, NSNumber, NSString, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse;

@protocol ISURLOperationDelegate <ISOperationDelegate>

@optional
- (NSString *)operation:(ISURLOperation *)arg1 sanitizedStringForString:(NSString *)arg2;
- (_Bool)operation:(ISURLOperation *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)operation:(ISURLOperation *)arg1 willSendRequest:(NSMutableURLRequest *)arg2;
- (_Bool)operation:(ISURLOperation *)arg1 processData:(NSMutableData *)arg2 error:(id *)arg3;
- (NSInputStream *)operation:(ISURLOperation *)arg1 needNewBodyStream:(NSURLRequest *)arg2;
- (void)operation:(ISURLOperation *)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(ISURLOperation *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)operation:(ISURLOperation *)arg1 didDiscoverContentLength:(NSNumber *)arg2;
@end

