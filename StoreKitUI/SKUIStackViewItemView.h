//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage;

@interface SKUIStackViewItemView : UIView
{
    UIColor *_borderColor;
    UIImage *_image;
    _Bool _shouldFlipImageHorizontal;
    _Bool _shouldFlipImageVertical;
}

@property(nonatomic) _Bool shouldFlipImageVertical; // @synthesize shouldFlipImageVertical=_shouldFlipImageVertical;
@property(nonatomic) _Bool shouldFlipImageHorizontal; // @synthesize shouldFlipImageHorizontal=_shouldFlipImageHorizontal;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

