//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup
{
    NSSet *_addressBookHomes;
    NSSet *_directoryGatewayURLs;
}

@property(readonly, nonatomic) NSSet *directoryGatewayURLs; // @synthesize directoryGatewayURLs=_directoryGatewayURLs;
@property(readonly, nonatomic) NSSet *addressBookHomes; // @synthesize addressBookHomes=_addressBookHomes;
- (id)directoryGatewayURL;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)homeSet;
- (id)_copyAccountPropertiesPropFindElements;
- (id)description;
- (void)dealloc;

@end

