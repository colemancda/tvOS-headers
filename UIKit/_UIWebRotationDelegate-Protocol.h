//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIScrollView, UIView;

@protocol _UIWebRotationDelegate
- (_Bool)considerHeightOfRectOfInterestForRotation;
- (struct CGRect)activeRectForRectOfInterest:(struct CGRect)arg1;
- (double)heightToKeepVisible;
- (double)minimumVerticalContentOffset;
- (struct CGRect)rectOfInterestForRotation;
- (double)minimumScaleForSize:(struct CGSize)arg1;
- (void)updateBoundariesOfScrollView:(UIScrollView *)arg1 withScales:(CDStruct_39925896)arg2;
- (CDStruct_39925896)scalesForContainerSize:(struct CGSize)arg1;
- (double)currentDocumentScale;
- (double)zoomedDocumentScale;
- (UIView *)contentView;
- (UIScrollView *)enclosingScrollView;

@optional
- (struct CGSize)contentSizeForScrollView:(UIScrollView *)arg1;
- (double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
@end
