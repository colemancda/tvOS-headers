//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSData, NSString;

@protocol AFSessionObject <NSObject>
@property(copy, nonatomic) NSString *refId;
@property(copy, nonatomic) NSString *aceId;
- (NSData *)serializedAceDataError:(id *)arg1;
- (void)af_logDiagnostics;
- (_Bool)af_bufferingAllowedDuringActiveSession;
@end

