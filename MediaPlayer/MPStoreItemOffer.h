//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MPStoreItemOffer : NSObject <NSSecureCoding>
{
    NSDictionary *_lookupDictionary;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)actionTextForType:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *price;
@property(readonly, copy, nonatomic) NSString *offerType;
@property(readonly, copy, nonatomic) NSString *formattedPrice;
@property(readonly, copy, nonatomic) NSString *buyParameters;
@property(readonly, copy, nonatomic) NSArray *assets;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (id)initWithLookupItemOffer:(id)arg1;

@end

