//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString, TIKeyboardInputManagerState, TIKeyboardIntermediateText;

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding>
{
    _Bool _assertDefaultKeyPlane;
    TIKeyboardInputManagerState *_inputManagerState;
    TIKeyboardIntermediateText *_intermediateText;
    NSString *_layoutTag;
    NSString *_accentKeyString;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool assertDefaultKeyPlane; // @synthesize assertDefaultKeyPlane=_assertDefaultKeyPlane;
@property(copy, nonatomic) NSString *accentKeyString; // @synthesize accentKeyString=_accentKeyString;
@property(copy, nonatomic) NSString *layoutTag; // @synthesize layoutTag=_layoutTag;
@property(retain, nonatomic) TIKeyboardIntermediateText *intermediateText; // @synthesize intermediateText=_intermediateText;
@property(copy, nonatomic) TIKeyboardInputManagerState *inputManagerState; // @synthesize inputManagerState=_inputManagerState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
