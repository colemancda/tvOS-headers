//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUMarqueeView.h>

@class SiriTVUITemplateLabel;

@interface SiriTVUILabelMarqueeView : MPUMarqueeView
{
    SiriTVUITemplateLabel *_label;
}

@property(readonly, nonatomic) SiriTVUITemplateLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)_arrayWithColorRef:(struct CGColor *)arg1 count:(unsigned long long)arg2;
- (void)_updateContainerMaskAnimated:(_Bool)arg1;
- (void)setMarqueeEnabled:(_Bool)arg1 withOptions:(long long)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutSubviewsForMarqueeEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
