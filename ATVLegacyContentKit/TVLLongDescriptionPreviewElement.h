//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLElement.h>

@class NSArray, NSDictionary, NSString, TVLImageElement, TVLMediaBadgesElement, TVLStarRatingElement, UIColor;

@interface TVLLongDescriptionPreviewElement : TVLElement
{
    NSString *_title;
    NSString *_summary;
    NSString *_footnote;
    NSString *_rating;
    TVLImageElement *_image;
    NSString *_mainLabel;
    NSArray *_metadataLabels;
    TVLMediaBadgesElement *_mediaBadges;
    TVLStarRatingElement *_starRating;
    NSDictionary *_styleKeyValues;
}

@property(retain, nonatomic) NSDictionary *styleKeyValues; // @synthesize styleKeyValues=_styleKeyValues;
@property(retain, nonatomic) TVLStarRatingElement *starRating; // @synthesize starRating=_starRating;
@property(retain, nonatomic) TVLMediaBadgesElement *mediaBadges; // @synthesize mediaBadges=_mediaBadges;
@property(copy, nonatomic) NSArray *metadataLabels; // @synthesize metadataLabels=_metadataLabels;
@property(copy, nonatomic) NSString *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) TVLImageElement *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) UIColor *metadataColor;
@property(readonly, nonatomic) UIColor *titleColor;
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;

@end
