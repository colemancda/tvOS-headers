//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIDatePicker;
@protocol ABDatePickerViewControllerDismissDelegate;

@interface ABDatePickerViewController : UIViewController
{
    void *_context;
    UIDatePicker *_datePicker;
    id <ABDatePickerViewControllerDismissDelegate> _dismissDelegate;
}

+ (struct CGSize)datePickerSize;
@property(nonatomic) id <ABDatePickerViewControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) void *context; // @synthesize context=_context;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (double)ab_heightToFitForViewInPopoverView;
- (void)dealloc;

@end

