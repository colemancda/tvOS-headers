//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAutolayoutConcreteConstraintProvider-Protocol.h>

@class IBAutolayoutArbitrationUnit, IBSparseAutolayoutInfo, NSArray, NSObject, NSString;
@protocol IBAutolayoutItem, IBCollection;

@protocol IBAutolayoutInfoProvider <IBAutolayoutConcreteConstraintProvider>
@property(readonly, nonatomic) Class autolayoutFrameDecisionDriverClass;
@property(readonly, nonatomic) Class symbolicLayoutConstantClass;
@property(readonly, nonatomic) Class autolayoutEngineClass;
@property(readonly, nonatomic) Class arbitrationUnitClass;
@property(readonly, nonatomic) long long userInterfaceLayoutDirection;
- (IBSparseAutolayoutInfo *)sparseAutolayoutInfoForArbitrationUnit:(IBAutolayoutArbitrationUnit *)arg1 objectTransformationBlock:(id (^)(id))arg2;
- (NSObject *)arbitrationUnitRootForObject:(NSObject *)arg1;
- (IBAutolayoutArbitrationUnit *)arbitrationUnitForObject:(id)arg1;
- (NSArray *)allArbitrationUnits;
- (double)priorityForPlaceholderAmbiguousSubviewVerticalConstraintsForView:(NSObject<IBAutolayoutItem> *)arg1;
- (double)priorityForPlaceholderAmbiguousSubviewHorizontalConstraintsForView:(NSObject<IBAutolayoutItem> *)arg1;
- (double)priorityForPlaceholderUninitializedSubviewVerticalConstraintsForView:(NSObject<IBAutolayoutItem> *)arg1;
- (double)priorityForPlaceholderUninitializedSubviewHorizontalConstraintsForView:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewShouldInstallPlaceholderSizeConstraintsOnSubviewInsteadOfReceiver:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewShouldGeneratePlaceholderSizeConstraintsWhenAmbiguous:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewShouldGeneratePlaceholderSizeConstraintsForUninitializedSubviews:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewShouldGeneratePlaceholderPositionConstraintsForUninitializedSubviews:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewHasCandidateReferencingConstraints:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewCanHaveUninitializedAutolayoutAmbiguityStatus:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewHasAnyAmbiguity:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewHasUninitializedAutolayoutStatus:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewIsVerticallyResizable:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewIsHorizontallyResizable:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewPrefersToVerticallyResizeWithContainer:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewPrefersToHorizontallyResizeWithContainer:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewPrefersMarginRelativeConstraints:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewDerivesDesignTimeDefaultIntrinsicContentSize:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewDerivesInternalConstraintsBasedUponInitialFrameSize:(NSObject<IBAutolayoutItem> *)arg1;
- (double)priorityStrongerThanInternalWeakSizeConstraintsForCompressingView:(NSObject<IBAutolayoutItem> *)arg1 inLayoutEngineForOrientation:(unsigned long long)arg2;
- (unsigned long long)orientationsWithInternalConstraintsThatWeaklyDefineViewSizeForView:(NSObject<IBAutolayoutItem> *)arg1;
- (unsigned long long)customSubviewLayoutStrategyForView:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewWithSuperviewOwnedLayoutAllowsSizingConstraints:(NSObject<IBAutolayoutItem> *)arg1;
- (_Bool)viewShouldUseConstraintsInsteadOfAutoresizing:(NSObject<IBAutolayoutItem> *)arg1;
- (NSObject<IBAutolayoutItem> *)designableContentViewForView:(NSObject<IBAutolayoutItem> *)arg1;
- (CDStruct_c519178c)insetToDesignableContentAreaForView:(NSObject<IBAutolayoutItem> *)arg1;
- (NSString *)containerWidgetTypeForView:(NSObject<IBAutolayoutItem> *)arg1;
- (NSString *)widgetTypeForView:(NSObject<IBAutolayoutItem> *)arg1;
- (NSArray *)objectsFromAncestor:(NSObject *)arg1 toObject:(NSObject *)arg2;
- (id)topLevelObjectForObject:(id)arg1;
- (NSArray *)topLevelObjects;
- (id <IBCollection>)objects;
- (NSArray *)orderedChildrenOfObject:(id)arg1;
- (NSArray *)childrenOfObject:(id)arg1;
- (id)parentOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;

@optional
- (NSString *)debugDescription;
@end
