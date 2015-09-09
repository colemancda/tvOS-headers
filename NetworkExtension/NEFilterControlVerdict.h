//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEFilterNewFlowVerdict.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSSecureCoding, NSCopying>
{
    _Bool _updateRules;
    _Bool _handledByDataProvider;
}

+ (id)updateRules;
+ (id)dropVerdictWithUpdateRules:(_Bool)arg1;
+ (id)allowVerdictWithUpdateRules:(_Bool)arg1;
+ (_Bool)supportsSecureCoding;
@property _Bool handledByDataProvider; // @synthesize handledByDataProvider=_handledByDataProvider;
@property _Bool updateRules; // @synthesize updateRules=_updateRules;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
