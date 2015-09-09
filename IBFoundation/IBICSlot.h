//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/NSCoding-Protocol.h>
#import <IBFoundation/NSCopying-Protocol.h>

@class NSArray, NSDictionary;

@interface IBICSlot : NSObject <NSCopying, NSCoding>
{
    NSDictionary *_componentsByClass;
    NSDictionary *_placeholderIDsByClass;
    unsigned long long _cachedHash;
}

+ (id)orderedComponentClasses;
+ (id)defaultSlot;
+ (id)emptySlot;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)slotWithComponents:(id)arg1;
+ (id)slotWithComponents:(id *)arg1 count:(unsigned long long)arg2;
- (void).cxx_destruct;
- (long long)numberOfPlaceholderValues;
- (long long)numberOfActiveComponents;
@property(readonly) NSArray *components;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)detailAreaKey;
- (_Bool)isValidFileNameForDragAndDrop:(id)arg1;
- (id)requiredFileName;
- (id)displayName;
- (id)description;
- (id)stringRepresentation;
- (id)shortDisplayName;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualSlot:(id)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (_Bool)hasPlaceholderValues;
- (id)placeholderComponentIdentifierForClass:(Class)arg1;
- (id)slotComponentForClass:(Class)arg1;
- (void)enumerateOrderedSlotComponentsAndValues:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponents:(id)arg1 placeholderIDs:(id)arg2;
- (void)captureComponents;

@end
