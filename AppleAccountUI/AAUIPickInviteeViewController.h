//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AppleAccountUI/AAUIContactsSearchDelegate-Protocol.h>
#import <AppleAccountUI/UITableViewDataSource-Protocol.h>
#import <AppleAccountUI/UITableViewDelegate-Protocol.h>
#import <AppleAccountUI/UITextFieldDelegate-Protocol.h>

@class AAUIContactsSearchController, ABMonogrammer, ACAccount, ACAccountStore, NSArray, NSString, UIBarButtonItem, UIButton, UILabel, UITableView, UITextField, UIView;
@protocol AAUIPickInviteeDelegate;

@interface AAUIPickInviteeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AAUIContactsSearchDelegate>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAUIContactsSearchController *_contactsSearchController;
    NSArray *_searchResults;
    UIView *_separator;
    UITableView *_resultsTableView;
    NSString *_searchQuery;
    UIView *_container;
    UIView *_contactSearchBarContainer;
    UITextField *_contactSearchBar;
    UILabel *_toLabel;
    UILabel *_instructionsLabel;
    UILabel *_childAccountLabel;
    UIButton *_createChildAccountButton;
    ABMonogrammer *_monogrammer;
    UIBarButtonItem *_nextButton;
    void *_addressBook;
    id <AAUIPickInviteeDelegate> _delegate;
    NSString *_inviteeEmail;
    NSString *_inviteeShortName;
    NSString *_inviteeCompositeName;
    NSString *_createChildAccountButtonTitle;
    NSString *_createChildAccountInstructions;
}

@property(copy, nonatomic) NSString *createChildAccountInstructions; // @synthesize createChildAccountInstructions=_createChildAccountInstructions;
@property(copy, nonatomic) NSString *createChildAccountButtonTitle; // @synthesize createChildAccountButtonTitle=_createChildAccountButtonTitle;
@property(readonly, nonatomic) NSString *inviteeCompositeName; // @synthesize inviteeCompositeName=_inviteeCompositeName;
@property(readonly, nonatomic) NSString *inviteeShortName; // @synthesize inviteeShortName=_inviteeShortName;
@property(readonly, nonatomic) NSString *inviteeEmail; // @synthesize inviteeEmail=_inviteeEmail;
@property(nonatomic) __weak id <AAUIPickInviteeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_imageForPersonWithRecordID:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)_attributedStringWithQueryHighlightedForString:(id)arg1 size:(double)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)contactsSearchController:(id)arg1 didFinishSearchWithSuccess:(_Bool)arg2;
- (void)contactsSearchController:(id)arg1 didFindSortedResult:(id)arg2;
- (void)_hideSearchResults;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldValueDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_updateNextButtonEnabledState;
- (void)_nextButtonWasTapped:(id)arg1;
- (void)_cancelButtonWasTapped:(id)arg1;
- (void)viewDidLoad;
- (void)_createChildAccountButtonWasTapped:(id)arg1;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (void)viewWillLayoutSubviews;
- (id)contentScrollView;
- (void)loadView;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 store:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

