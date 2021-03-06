//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIStructuredThemeStore.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore
{
    NSString *_identifier;
    NSMutableDictionary *_memoryStore;
    NSMutableDictionary *_nameIdentifierStore;
    int _maxNameIdentifier;
}

- (void)clearRenditionCache;
- (void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
- (void)insertCGImage:(struct CGImage *)arg1 withName:(id)arg2 andDescription:(id)arg3;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1 usingKeySignature:(id)arg2;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1 isFPO:(_Bool *)arg2;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)imagesWithName:(id)arg1;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint *)arg2;
- (id)allImageNames;
- (const struct _renditionkeyfmt *)keyFormat;
- (_Bool)usesCUISystemThemeRenditionKey;
- (long long)maximumRenditionKeyTokenCount;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

