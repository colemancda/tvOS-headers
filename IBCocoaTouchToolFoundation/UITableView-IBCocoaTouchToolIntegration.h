//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class IBPlaceholderDrawingAttributes, NSArray;

@interface UITableView (IBCocoaTouchToolIntegration)
- (void)ibInstallUnusedAreaPlaceholderView;
@property(retain, nonatomic) IBPlaceholderDrawingAttributes *ibUnusedAreaDrawingAttributes;
- (void)setIbMinimumGeometryForCellFramesAndContentSize:(id)arg1;
- (_Bool)ibCapturePlaceholderTable:(id)arg1 forRelationship:(id)arg2 withContext:(id)arg3;
- (struct CGSize)ibContentSize;
- (id)sectionAndCellFrames;
- (void)setIbReuseIdentifiersToPrototypeNibData:(id)arg1;
@property(readonly) NSArray *ibSectionsIncludingPrototypes;
- (void)setIbPrototypes:(id)arg1;
- (id)ibPrototypes;
- (void)setIbSections:(id)arg1;
- (void)_setAssociationCellForSections:(id)arg1 withTableView:(id)arg2;
- (void)_setAssociationCells:(id)arg1 withTableView:(id)arg2;
- (id)ibSections;
- (void)awakeAfterMarshallerDidEstablishRelationshipsWithContext:(id)arg1 populatingWarningMessages:(id)arg2;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 marshallerClassNames:(id)arg4 andMarshallerInstantiationContexts:(id)arg5 globalMarshallingContext:(id)arg6;
@end
