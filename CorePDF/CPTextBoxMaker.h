//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CPBody, CPZone;

@interface CPTextBoxMaker : NSObject
{
    CPBody *bodyZone;
    CPZone *mainZone;
}

+ (void)boxLayoutsIn:(id)arg1;
+ (void)promoteLayoutsIn:(id)arg1;
- (void)boxLayoutsIn:(id)arg1;
- (void)boxLayout:(id)arg1;
- (void)promoteLayoutsIn:(id)arg1;
- (void)promoteLayoutsInCertainRegions:(id)arg1;
- (_Bool)layoutIsSliced:(id)arg1;
- (void)rotate:(id)arg1;
- (void)rotateTextBox:(id)arg1;
- (void)makeBoxesWith:(id)arg1 parent:(id)arg2;

@end
