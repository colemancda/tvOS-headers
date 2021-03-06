//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface WBSFeedSource : NSObject
{
    _Bool _subscribedWhenSyncWasOff;
    NSURL *_sourceURL;
    NSURL *_feedURL;
    NSArray *_siteIconURLs;
    long long _state;
    NSString *_title;
}

@property(nonatomic) _Bool subscribedWhenSyncWasOff; // @synthesize subscribedWhenSyncWasOff=_subscribedWhenSyncWasOff;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSArray *siteIconURLs; // @synthesize siteIconURLs=_siteIconURLs;
@property(readonly, nonatomic) NSURL *feedURL; // @synthesize feedURL=_feedURL;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualIgnoringTitle:(id)arg1;
@property(readonly, nonatomic) NSString *displayName;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (id)initWithFeedURL:(id)arg1 sourceURL:(id)arg2 siteIconURLs:(id)arg3 title:(id)arg4 state:(long long)arg5;
- (id)dictionaryRepresentationForSyncing;
- (id)dictionaryRepresentation;

@end

