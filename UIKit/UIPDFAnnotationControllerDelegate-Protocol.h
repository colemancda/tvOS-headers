//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIImage, UIPDFAnnotation, UIPDFAnnotationController;

@protocol UIPDFAnnotationControllerDelegate

@optional
- (UIImage *)marginNoteImage:(UIPDFAnnotation *)arg1 controller:(UIPDFAnnotationController *)arg2;
- (struct CGSize)marginNoteImageSize:(UIPDFAnnotationController *)arg1;
- (struct CGImage *)underlineImage:(struct CGRect)arg1 controller:(UIPDFAnnotationController *)arg2;
- (struct CGImage *)newHighlightMaskImage:(struct CGRect)arg1 controller:(UIPDFAnnotationController *)arg2;
- (void)annotationWasRemoved:(UIPDFAnnotation *)arg1 controller:(UIPDFAnnotationController *)arg2;
- (void)annotation:(UIPDFAnnotation *)arg1 isBeingPressedAtPoint:(struct CGPoint)arg2 controller:(UIPDFAnnotationController *)arg3;
- (void)annotation:(UIPDFAnnotation *)arg1 wasTouchedAtPoint:(struct CGPoint)arg2 controller:(UIPDFAnnotationController *)arg3;
- (void)annotation:(UIPDFAnnotation *)arg1 didEndTrackingAtPoint:(struct CGPoint)arg2 controller:(UIPDFAnnotationController *)arg3;
- (_Bool)willTrackAnnotationAtPoint:(struct CGPoint)arg1 controller:(UIPDFAnnotationController *)arg2;
@end
