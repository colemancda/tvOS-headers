//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBasePlayerCell.h>

@class UILabel;

@interface GKFriendOfPlayerCell : GKBasePlayerCell
{
    UILabel *_commonalitiesLabel;
}

@property(retain, nonatomic) UILabel *commonalitiesLabel; // @synthesize commonalitiesLabel=_commonalitiesLabel;
- (void)prepareForReuse;
- (void)didUpdateModel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

