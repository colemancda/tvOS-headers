//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLRootElement.h>

@class TVLHeaderElement, TVLMenuElement, TVLShelfElement;

@interface TVLShelfListElement : TVLRootElement
{
    TVLHeaderElement *_header;
    TVLShelfElement *_centerShelf;
    TVLMenuElement *_menu;
}

+ (_Bool)isShelfListElement:(id)arg1;
@property(retain, nonatomic) TVLMenuElement *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) TVLShelfElement *centerShelf; // @synthesize centerShelf=_centerShelf;
@property(retain, nonatomic) TVLHeaderElement *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;

@end

