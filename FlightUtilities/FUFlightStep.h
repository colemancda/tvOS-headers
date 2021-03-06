//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FUAirport, NSDate, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface FUFlightStep : NSObject
{
    FUAirport *_airport;
    NSString *_gate;
    NSString *_terminal;
    NSDate *_actualTime;
    NSDate *_scheduledTime;
    NSTimeZone *_timeZone;
}

@property(retain) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain) NSDate *scheduledTime; // @synthesize scheduledTime=_scheduledTime;
@property(retain) NSDate *actualTime; // @synthesize actualTime=_actualTime;
@property(retain) NSString *terminal; // @synthesize terminal=_terminal;
@property(retain) NSString *gate; // @synthesize gate=_gate;
@property(retain) FUAirport *airport; // @synthesize airport=_airport;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

