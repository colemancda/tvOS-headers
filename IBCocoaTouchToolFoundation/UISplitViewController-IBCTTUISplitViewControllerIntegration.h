//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

@class IBPlaceholderDrawingAttributes, UIViewController;

@interface UISplitViewController (IBCTTUISplitViewControllerIntegration)
- (void)ibInstallPlaceholderView:(id)arg1;
- (void)awakeAfterMarshallerDidEstablishRelationshipsWithContext:(id)arg1 populatingWarningMessages:(id)arg2;
@property(retain, nonatomic) IBPlaceholderDrawingAttributes *ibDetailViewControllerPlaceholderDrawingAttributes;
@property(retain, nonatomic) IBPlaceholderDrawingAttributes *ibMasterViewControllerPlaceholderDrawingAttributes;
- (void)setIbDetailPlaceholderViewController:(id)arg1;
- (id)ibDetailPlaceholderViewController;
- (void)setIbMasterPlaceholderViewController:(id)arg1;
- (id)ibMasterPlaceholderViewController;
- (void)_updateViewControllers;
@property(retain, nonatomic) UIViewController *ibDetailViewController;
@property(retain, nonatomic) UIViewController *ibMasterViewController;
@end
