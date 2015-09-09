//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntry, GEOPDViewportInfo, NSData, NSString;

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying>
{
    GEOPDAutocompleteEntry *_categorySuggestionEntry;
    NSData *_categorySuggestionEntryMetadata;
    int _maxResults;
    NSString *_query;
    GEOPDViewportInfo *_viewportInfo;
    _Bool _highlightDiff;
    CDStruct_00ef3c1e _has;
}

@property(retain, nonatomic) GEOPDAutocompleteEntry *categorySuggestionEntry; // @synthesize categorySuggestionEntry=_categorySuggestionEntry;
@property(retain, nonatomic) NSData *categorySuggestionEntryMetadata; // @synthesize categorySuggestionEntryMetadata=_categorySuggestionEntryMetadata;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCategorySuggestionEntry;
@property(readonly, nonatomic) _Bool hasCategorySuggestionEntryMetadata;
@property(nonatomic) _Bool hasHighlightDiff;
@property(nonatomic) _Bool highlightDiff; // @synthesize highlightDiff=_highlightDiff;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(readonly, nonatomic) _Bool hasQuery;
- (void)dealloc;

@end
