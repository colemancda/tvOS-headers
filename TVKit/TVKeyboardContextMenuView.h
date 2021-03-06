//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <TVKit/UICollectionViewDataSource-Protocol.h>
#import <TVKit/UICollectionViewDelegate-Protocol.h>
#import <TVKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSDate, NSIndexPath, NSString, NSTimer, UICollectionView, UITapGestureRecognizer, _TVTouchRecognizer, _UIBackdropView, _UIRepeatingPressGestureRecognizer;
@protocol TVKeyboardContextMenuViewDelegate;

@interface TVKeyboardContextMenuView : UIControl <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate>
{
    NSArray *_additionalKeys;
    NSString *_defaultKey;
    UICollectionView *_collectionView;
    _UIBackdropView *_backdropView;
    _TVTouchRecognizer *_touchRecognizer;
    _UIRepeatingPressGestureRecognizer *_leftButtonRecognizer;
    UITapGestureRecognizer *_menuRecognizer;
    UITapGestureRecognizer *_physicalRightRecognizer;
    UITapGestureRecognizer *_physicalUpRecognizer;
    UITapGestureRecognizer *_physicalDownRecognizer;
    NSIndexPath *_lastHighlightedIndexPath;
    NSTimer *_deleteTimer;
    NSDate *_lastDeleteDate;
    _Bool _touchDown;
    _Bool _keyDown;
    _Bool _continuesKeyDown;
    _Bool _rightmostCellReceivedRightButton;
    struct {
        unsigned int didFinish:1;
        unsigned int didSelectText:1;
        unsigned int didSelectBackspace:1;
    } _delegateFlags;
    id <TVKeyboardContextMenuViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TVKeyboardContextMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_clearTouchAndCancelTimer;
- (void)_onMenuRecognizer:(id)arg1;
- (void)_highlightDefaultKeyIfNeeded;
- (void)_notifyBackspaceIfNeeded;
- (void)_handleLeftButtonRecognizer:(id)arg1;
- (void)_handleDeleteTimer:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_physicalGeneralAction:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_responderPotentialChangedBetweenFirstResponder:(id)arg1 andResponder:(id)arg2;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithDefaultKeyText:(id)arg1 additionalKeys:(id)arg2 keySize:(struct CGSize)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

