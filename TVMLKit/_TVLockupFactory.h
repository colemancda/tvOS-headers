//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVLockupFactory : NSObject
{
}

+ (void)_configureStackingPoster:(id)arg1 withElement:(id)arg2 forMetrics:(_Bool)arg3;
+ (void)_configureCell:(id)arg1 withElement:(id)arg2;
+ (struct UIEdgeInsets)_customCellPaddingForCellMetrics:(struct TVCellMetrics)arg1 withCollectionCellMetrics:(struct TVCellMetrics)arg2;
+ (void)updateViewLayoutForCell:(id)arg1 forSize:(struct CGSize)arg2;
+ (struct TVCellMetrics)cellMetricsForCollectionElement:(id)arg1;
- (void)_registerLockup;
- (id)init;

@end

