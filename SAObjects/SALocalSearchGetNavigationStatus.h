//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SALocalSearchGetNavigationStatus : SADomainCommand
{
}

+ (id)getNavigationStatusWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNavigationStatus;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *getRoute;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

