//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BFFStyle : NSObject
{
}

+ (id)sharedStyle;
- (void)applyThemeToSectionHeaderLabel:(id)arg1;
- (void)applyThemeToTableCell:(id)arg1;
- (void)applyThemeToTitleLabel:(id)arg1;
- (void)applyThemeToAllTableViews;
- (void)applyThemeToRemoteUIWebViewController:(id)arg1;
- (void)applyThemeToTextView:(id)arg1;
- (void)applyThemeToLabel:(id)arg1;
- (id)backgroundColor;
- (struct UIEdgeInsets)edgeInsetsForTable:(id)arg1;
- (double)nonTableHorizontalMargin;
- (double)singleLineCellHeightForTable:(id)arg1;
- (id)tableCellFont;
- (struct UIEdgeInsets)edgeInsetsForHeader;
- (double)baselineInsetForHeaderTitle;
- (id)headerTitleFont;

@end

