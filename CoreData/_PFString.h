//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface _PFString : NSString
{
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (_Bool)accessInstanceVariablesDirectly;
- (id)description;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)cStringLength;
- (void)getCString:(char *)arg1;
- (const char *)UTF8String;
- (const char *)_fastCStringContents:(_Bool)arg1;
- (const char *)cString;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (void)getCharacters:(unsigned short *)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)dealloc;

@end

