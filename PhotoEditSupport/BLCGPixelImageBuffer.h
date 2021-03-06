//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoEditSupport/BLPixelImageBuffer.h>

@class NSMutableData;

@interface BLCGPixelImageBuffer : BLPixelImageBuffer
{
    struct CGContext *_bitmapContext;
    unsigned long long _rowBytes;
    NSMutableData *_bitmapData;
}

@property(retain, nonatomic) NSMutableData *bitmapData; // @synthesize bitmapData=_bitmapData;
- (void)readPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)accessPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)accessPixelsByContextInBlock:(CDUnknownBlockType)arg1;
- (void)renderCIImage:(id)arg1;
- (id)ciImage;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 colorManagement:(int)arg2;

@end

