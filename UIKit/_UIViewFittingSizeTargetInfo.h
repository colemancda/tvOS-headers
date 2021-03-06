//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying>
{
    _Bool _dummy;
    float _horizontalPriority;
    float _verticalPriority;
    struct CGSize _targetSize;
}

@property(nonatomic, getter=isDummy) _Bool dummy; // @synthesize dummy=_dummy;
@property(readonly, nonatomic) float verticalPriority; // @synthesize verticalPriority=_verticalPriority;
@property(readonly, nonatomic) float horizontalPriority; // @synthesize horizontalPriority=_horizontalPriority;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTargetInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTargetSize:(struct CGSize)arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3;

@end

