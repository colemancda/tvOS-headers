//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/NSObject-Protocol.h>

@class PSSearchEntry, PSSearchResultsController, PSSpecifierAction, UIImage;

@protocol PSSearchResultsControllerDelegate <NSObject>
- (UIImage *)searchResultsController:(PSSearchResultsController *)arg1 iconForSearchEntry:(PSSearchEntry *)arg2;
- (PSSpecifierAction *)searchResultsController:(PSSearchResultsController *)arg1 switchActionForSearchEntry:(PSSearchEntry *)arg2;
- (_Bool)searchResultsController:(PSSearchResultsController *)arg1 shouldShowSwitchForSearchEntry:(PSSearchEntry *)arg2;
- (void)searchResultsController:(PSSearchResultsController *)arg1 didSelectSearchEntry:(PSSearchEntry *)arg2;
@end

