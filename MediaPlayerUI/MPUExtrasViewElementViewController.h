//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUExtrasElementViewController.h>

@class IKViewElement;

@interface MPUExtrasViewElementViewController : MPUExtrasElementViewController
{
    _Bool _embedded;
    IKViewElement *_viewElement;
}

@property(nonatomic) _Bool embedded; // @synthesize embedded=_embedded;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long preferredLayoutAttribute;
@property(readonly, nonatomic) id preferredLayoutGuide;
@property(readonly, nonatomic) _Bool matchParentHeight;
- (void)viewDidLoad;
- (id)initWithViewElement:(id)arg1;

@end
