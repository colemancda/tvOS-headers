//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface CANodeButton : UIButton
{
    _Bool hasLabel;
    NSURL *_url;
}

@property(retain) NSURL *url; // @synthesize url=_url;
@property _Bool hasLabel;
- (void)layoutSubviews;
- (id)init;

@end

