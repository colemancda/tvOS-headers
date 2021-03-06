//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDisplay, NSHashTable, NSMapTable, NSMutableSet;

@interface FBDisplayManager : NSObject
{
    NSHashTable *_observers;
    NSMapTable *_displayIDToFBSDisplayMap;
    NSMutableSet *_displaysDebouncing;
    FBSDisplay *_mainDisplay;
}

+ (id)mainDisplay;
+ (id)sharedInstance;
@property(retain, nonatomic) FBSDisplay *mainDisplay; // @synthesize mainDisplay=_mainDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_broadcastFBSDisplayDidConnect:(id)arg1;
- (void)_displayDidDebounce:(id)arg1 broadcast:(_Bool)arg2;
- (void)_debounceDisplay:(id)arg1 broadcast:(_Bool)arg2;
- (void)_caDisplayDidConnect:(id)arg1 debounce:(_Bool)arg2 broadcast:(_Bool)arg3;
- (void)_caDisplayDidDisconnect:(id)arg1;
- (_Bool)_caDisplayIsMainDisplay:(id)arg1;
- (id)_fbsDisplayForCADisplay:(id)arg1;
- (void)_initializeDisplays;
- (id)description;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)displays;
- (id)init;

@end

