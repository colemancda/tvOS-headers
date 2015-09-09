//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMUIndent : NSObject
{
    NSString *_level;
    NSString *_step;
    unsigned long long _factor;
}

+ (id)indentWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3;
+ (id)indentWithLevel:(id)arg1;
@property(readonly, nonatomic) unsigned long long factor; // @synthesize factor=_factor;
@property(readonly, nonatomic) NSString *step; // @synthesize step=_step;
@property(readonly, nonatomic) NSString *level; // @synthesize level=_level;
- (void).cxx_destruct;
- (id)indentByFactor:(unsigned long long)arg1;
- (id)description;
- (id)initWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3;

@end
