//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIAutomation/UIAScrollView.h>

@class UIAElementArray;

@interface UIACollectionView : UIAScrollView
{
    UIAElementArray *_cells;
}

+ (id)toManyRelationshipKeys;
+ (id)_moreToManyRelationshipKeys;
+ (Class)_classForSimpleUIAXElement:(id)arg1;
- (id)visibleCells;
- (id)cells;
- (id)scrollItemCount;
- (id)scrollItemIndex;
- (id)value;
- (void)_emptyCaches;

@end

