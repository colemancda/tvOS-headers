//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CLVehicleHeading : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) double trueHeading;
- (id)shortDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientVehicleHeading:(CDStruct_c3b9c2ee)arg1;

@end

