//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSBookmark.h>

__attribute__((visibility("hidden")))
@interface TVSMutableBookmark : TVSBookmark
{
}

+ (_Bool)supportsSecureCoding;
- (void)setIsMarkedAsUnwatched:(_Bool)arg1;
- (void)setHasBeenRented:(_Bool)arg1;
- (void)setHasBeenPlayed:(_Bool)arg1;
- (void)setPlayCount:(unsigned long long)arg1;
- (void)setBookmarkTimestamp:(id)arg1;
- (void)setBookmarkTime:(double)arg1;

@end
