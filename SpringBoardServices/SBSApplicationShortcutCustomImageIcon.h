//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSData;

@interface SBSApplicationShortcutCustomImageIcon : SBSApplicationShortcutIcon
{
    NSData *_imagePNGData;
}

@property(readonly, retain, nonatomic) NSData *imagePNGData; // @synthesize imagePNGData=_imagePNGData;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithImagePNGData:(id)arg1;

@end
