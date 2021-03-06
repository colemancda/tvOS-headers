//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class TVLElement, UIView;

@interface TVLStackSectionViewController : UIViewController <ATVUpdatable>
{
    TVLElement *_feedElement;
    double _horizontalInset;
    UIView *_elementView;
}

@property(retain, nonatomic) UIView *elementView; // @synthesize elementView=_elementView;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(retain, nonatomic) TVLElement *feedElement; // @synthesize feedElement=_feedElement;
- (void).cxx_destruct;
- (void)updateWithFeedElement:(id)arg1;
- (id)currentFeedElement;
- (void)tvl_saveStateWithCoder:(id)arg1;
- (void)tvl_restoreStateWithCoder:(id)arg1;
- (void)updateContentInsetForView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)preferredFocusedItem;
- (id)initWithFeedElement:(id)arg1;
- (id)init;

@end

