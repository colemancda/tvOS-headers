//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIAutomation/NSCopying-Protocol.h>

@class NSDictionary, NSInvocation, UIAElementArray, UIAXElement;

@interface UIAElement : NSObject <NSCopying>
{
    UIAXElement *_uiaxElement;
    UIAElement *_parentElement;
    NSInvocation *_selfPatienceInvocation;
    double _createdTime;
    double _lastAccessedTime;
    _Bool _isValid;
    UIAElementArray *_elements;
    NSDictionary *_elementClassIndexSets;
}

+ (id)_predicateForPredicateOrString:(id)arg1;
+ (id)elementAtPosition:(struct CGPoint)arg1;
+ (id)elementForUIAXElement:(id)arg1;
+ (Class)_classForSimpleUIAXElement:(id)arg1;
+ (Class)_uiaClassForClassName:(id)arg1;
+ (id)_jsStringForUIAElement:(id)arg1;
+ (id)_jsStringForInvocationPath:(id)arg1;
+ (id)_jsMethodCallStringForInvoker:(id)arg1 selector:(SEL)arg2;
+ (id)_jsStringForInvocation:(id)arg1;
+ (id)_jsStringForObject:(id)arg1;
+ (id)_jsStringForValue:(id)arg1;
+ (id)_jsStringForRect:(struct CGRect)arg1;
+ (id)_jsStringForPoint:(struct CGPoint)arg1;
+ (id)_jsStringForDictionary:(id)arg1;
+ (id)_jsStringForString:(id)arg1;
+ (id)_jsEscapedStringForString:(id)arg1;
+ (id)_jsMethodNameForSelector:(SEL)arg1;
+ (id)_setPatienceInvocation:(id)arg1 forUIAObject:(id)arg2;
+ (id)_waitForInvocationPath:(id)arg1;
+ (id)_performInvocationPath:(id)arg1;
+ (id)_patienceInvocationPathForUIAObject:(id)arg1;
+ (id)_invocationForInvoker:(id)arg1 selector:(SEL)arg2 arguments:(struct __va_list_tag [1])arg3;
+ (double)popPatience;
+ (void)pushPatience:(double)arg1;
+ (void)setPatience:(double)arg1;
+ (double)patience;
+ (void)_setPatienceRetryInterval:(double)arg1;
+ (double)_patienceRetryInterval;
+ (id)_rectFromDictionary:(id)arg1;
+ (id)_hitPointForObject:(id)arg1;
+ (id)_hitPointFromDictionary:(id)arg1;
+ (id)_valueForAXElement:(id)arg1;
+ (id)_nameForAXElement:(id)arg1;
+ (struct CGPoint)_convertPointToCurrentInterfaceOrientation:(struct CGPoint)arg1;
+ (struct CGPoint)_convertPointFromCurrentInterfaceOrientation:(struct CGPoint)arg1;
+ (struct CGRect)_convertRectFromCurrentInterfaceOrientation:(struct CGRect)arg1;
+ (struct CGRect)_convertRectToCurrentInterfaceOrientation:(struct CGRect)arg1;
+ (struct CGAffineTransform)_transformToRotateToInterfaceOrientation:(long long)arg1;
+ (struct CGAffineTransform)_transformToRotateFromInterfaceOrientation:(long long)arg1;
+ (id)allKeys;
+ (id)toManyRelationshipKeys;
+ (id)toOneRelationshipKeys;
+ (id)attributeKeys;
+ (id)_elementWithUIAXElement:(id)arg1 parent:(id)arg2;
+ (id)_countsString;
+ (long long)_maxCount;
+ (long long)_liveCount;
+ (void)_logVerbosity:(unsigned long long)arg1 format:(id)arg2;
+ (_Bool)_delayForTimeInterval:(double)arg1;
+ (void)initialize;
- (id)webViews;
- (id)textViews;
- (id)toolbar;
- (id)toolbars;
- (id)tabBar;
- (id)tabBars;
- (id)searchBars;
- (id)secureTextFields;
- (id)textFields;
- (id)tableViews;
- (id)staticTexts;
- (id)switches;
- (id)sliders;
- (id)segmentedControls;
- (id)scrollViews;
- (id)progressIndicators;
- (id)popover;
- (id)popovers;
- (id)pickers;
- (id)pageIndicators;
- (id)navigationBar;
- (id)navigationBars;
- (id)mapViews;
- (id)links;
- (id)keys;
- (id)keyboard;
- (id)keyboards;
- (id)images;
- (id)editingMenus;
- (id)collectionViews;
- (id)buttons;
- (id)activityIndicators;
- (id)activityView;
- (id)activityViews;
- (id)actionSheet;
- (id)actionSheets;
- (id)_elementsOfClass:(Class)arg1 forSelector:(SEL)arg2;
- (id)elements;
- (id)withPredicate:(id)arg1;
- (id)withValue:(id)arg1 forKey:(id)arg2;
- (id)withName:(id)arg1;
- (id)focusedElement;
- (id)responder;
- (id)elementAtPoint:(id)arg1;
- (id)_elementAtPosition:(struct CGPoint)arg1;
- (id)_elementForUIAXElement:(id)arg1;
- (id)_inspectedElementForAXAncestry:(id)arg1 index:(unsigned long long *)arg2 triedKeys:(id)arg3;
- (id)_inspectedToManyRelationship:(id)arg1 forAXAncestry:(id)arg2 index:(unsigned long long *)arg3;
- (id)_inspectedToOneRelationship:(id)arg1 forAXAncestry:(id)arg2 index:(unsigned long long *)arg3;
- (_Bool)_inspectConfirmElement:(id)arg1 forAXAncestry:(id)arg2 index:(unsigned long long *)arg3;
- (id)_elementsForUIAXElements:(id)arg1;
- (id)_elementsForUIAXElements:(id)arg1 axFilter:(SEL)arg2;
- (id)_elementForSimpleUIAXElement:(id)arg1;
- (id)scriptingSynonymFullExpressionString;
- (id)scriptingSynonymStrings;
- (id)scriptingSynonyms;
- (id)scriptingFavoredSynonymString;
- (id)_scriptingSynonymsForSubElement:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)scriptingInvocationFullExpressionString;
- (id)scriptingInvocationString;
- (id)scriptingActionExpressionShouldFavorTapOffset;
- (id)_patienceForAttribute:(SEL)arg1 value:(id)arg2;
- (id)_objectWithPatienceInvocationFromUIAObject:(id)arg1 selector:(SEL)arg2;
- (void)chopPatience;
- (void)_setSelfPatienceInvocation:(id)arg1;
- (id)_selfPatienceInvocation;
- (id)scrollToElementWithValue:(id)arg1 forKey:(id)arg2;
- (id)scrollToElementWithPredicate:(id)arg1;
- (id)scrollToElementWithName:(id)arg1;
- (id)scrollToVisible;
- (void)scrollRight;
- (void)scrollLeft;
- (void)scrollDown;
- (void)scrollUp;
- (void)rotateWithOptions:(id)arg1;
- (void)_rotateWithOptions:(id)arg1;
- (void)flickInsideWithOptions:(id)arg1;
- (void)dragInsideWithOptions:(id)arg1;
- (void)_dragInsideWithOptions:(id)arg1 withFlick:(_Bool)arg2;
- (void)touchAndHold:(id)arg1;
- (void)touchWithOptions:(id)arg1;
- (void)tapWithOptions:(id)arg1;
- (void)twoFingerTap;
- (void)doubleTap;
- (void)tap;
- (_Bool)_prepareForAction:(SEL)arg1;
- (void)_delayForAnimationsInProgress;
- (void)redo;
- (void)undo;
- (id)type;
- (id)className;
- (id)dom;
- (id)url;
- (void)setValue:(id)arg1;
- (_Bool)_shouldAllowSettingValue;
- (id)value;
- (id)name;
- (id)target;
- (id)verticalSizeClass;
- (id)horizontalSizeClass;
- (id)isSelected;
- (id)isStarkElement;
- (id)isVisible;
- (id)hasRemoteFocus;
- (id)hasKeyboardFocus;
- (id)isEnabled;
- (id)_uiaHitpoint;
- (id)hitpoint;
- (id)_hitpoint;
- (id)_uiaRect;
- (id)rect;
- (id)label;
- (id)hint;
- (id)pid;
- (void)logAXTree;
- (void)logAXInfo;
- (void)logElementTree;
- (void)logElement;
- (id)_logInfoWithChildren;
- (id)_logInfo;
- (id)ancestry;
- (id)parentElement;
- (id)uiaxElement;
- (id)toManyRelationships;
- (id)toOneRelationships;
- (id)attributes;
- (id)valueForUndefinedKey:(id)arg1;
- (id)_synonymToManyRelationshipKeys;
- (id)allKeys;
- (id)toManyRelationshipKeys;
- (id)toOneRelationshipKeys;
- (id)attributeKeys;
- (_Bool)waitForInvalid;
- (_Bool)checkIsValid;
- (_Bool)isValid;
- (void)_setLastAccessedTime:(double)arg1;
- (double)_lastAccessedTime;
- (double)_createdTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_invalidate;
- (void)_emptyCaches;
- (void)dealloc;
- (id)_initWithUIAXElement:(id)arg1 parent:(id)arg2;
- (id)init;

@end
