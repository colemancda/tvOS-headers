//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSString;

@interface GEOTransitRouteDisplayStrings : PBCodable <NSCopying>
{
    NSString *_detailTimeFormatted;
    GEOFormattedString *_duration;
    GEOFormattedString *_durationList;
    GEOFormattedString *_planningDescription;
    GEOFormattedString *_serviceGap;
}

@property(retain, nonatomic) GEOFormattedString *serviceGap; // @synthesize serviceGap=_serviceGap;
@property(retain, nonatomic) GEOFormattedString *durationList; // @synthesize durationList=_durationList;
@property(retain, nonatomic) GEOFormattedString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) GEOFormattedString *planningDescription; // @synthesize planningDescription=_planningDescription;
@property(retain, nonatomic) NSString *detailTimeFormatted; // @synthesize detailTimeFormatted=_detailTimeFormatted;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasServiceGap;
@property(readonly, nonatomic) _Bool hasDurationList;
@property(readonly, nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasPlanningDescription;
@property(readonly, nonatomic) _Bool hasDetailTimeFormatted;
- (void)dealloc;

@end

