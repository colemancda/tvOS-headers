//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ResponseKit/RKDataProvider.h>

@class NSMutableDictionary;

@interface RKLinguisticDataProvider : RKDataProvider
{
    NSMutableDictionary *_polarityMapsByLanguageID;
}

+ (id)sharedProvider;
@property(retain) NSMutableDictionary *polarityMapsByLanguageID; // @synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID;
- (void).cxx_destruct;
- (struct __LSMMap *)polarityMapForLanguageID:(id)arg1;
- (id)_init;
- (id)init;

@end
