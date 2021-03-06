//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SUNavigationMenu : NSObject <NSCopying>
{
    NSString *_cancelTitle;
    NSString *_closedTitle;
    long long _initialSelectedIndex;
    long long _location;
    NSArray *_menuItems;
    NSArray *_navigationButtons;
    NSString *_openTitle;
}

@property(readonly, nonatomic) NSString *openTitle; // @synthesize openTitle=_openTitle;
@property(readonly, nonatomic) NSArray *navigationButtons; // @synthesize navigationButtons=_navigationButtons;
@property(readonly, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(readonly, nonatomic) long long initialSelectedIndex; // @synthesize initialSelectedIndex=_initialSelectedIndex;
@property(readonly, nonatomic) NSString *closedTitle; // @synthesize closedTitle=_closedTitle;
@property(readonly, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
- (id)_newNavigationButtonsFromArray:(id)arg1;
- (id)_newMenuItemsFromArray:(id)arg1;
- (long long)_locationForString:(id)arg1;
- (void)_loadFromDictionary:(id)arg1;
- (id)navigationButtonForLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

