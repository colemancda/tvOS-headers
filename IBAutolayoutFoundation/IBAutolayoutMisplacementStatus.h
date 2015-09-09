//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;
@protocol IBAutolayoutItem;

@interface IBAutolayoutMisplacementStatus : NSObject <IBBinaryArchiving>
{
    NSObject<IBAutolayoutItem> *_view;
    struct CGRect _expectedLayoutFrameOrBounds;
    struct CGRect _actualLayoutFrameOrBounds;
}

@property(readonly, nonatomic) struct CGRect actualLayoutFrameOrBounds; // @synthesize actualLayoutFrameOrBounds=_actualLayoutFrameOrBounds;
@property(readonly, nonatomic) struct CGRect expectedLayoutFrameOrBounds; // @synthesize expectedLayoutFrameOrBounds=_expectedLayoutFrameOrBounds;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)misplacementStatusByIgnoringSize;
- (id)misplacementStatusByIgnoringPosition;
- (_Bool)isEqualToMisplacementStatus:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasAnyMisplacement;
- (_Bool)hasMisplacedSizeInOrientation:(unsigned long long)arg1;
- (_Bool)hasMisplacedPositionInOrientation:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasMisplacedVerticalSize;
@property(readonly, nonatomic) _Bool hasMisplacedHorizontalSize;
@property(readonly, nonatomic) _Bool hasMisplacedVerticalPosition;
@property(readonly, nonatomic) _Bool hasMisplacedHorizontalPosition;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithView:(id)arg1 expectedLayoutFrameOrBounds:(struct CGRect)arg2 actualLayoutFrameOrBounds:(struct CGRect)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
