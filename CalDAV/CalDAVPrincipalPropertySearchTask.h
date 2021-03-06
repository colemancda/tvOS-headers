//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPrincipalPropertySearchTask.h>

@class CalDAVPrincipalSearchPropertySet, NSSet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask
{
    id _searchContext;
    NSSet *_searchTypes;
    NSSet *_searchStrings;
    CalDAVPrincipalSearchPropertySet *_serverSupportSet;
}

@property(retain, nonatomic) CalDAVPrincipalSearchPropertySet *serverSupportSet; // @synthesize serverSupportSet=_serverSupportSet;
@property(retain, nonatomic) NSSet *searchStrings; // @synthesize searchStrings=_searchStrings;
@property(retain, nonatomic) NSSet *searchTypes; // @synthesize searchTypes=_searchTypes;
@property(retain, nonatomic) id searchContext; // @synthesize searchContext=_searchContext;
- (void).cxx_destruct;
- (id)searchItems;
- (id)extraAttributes;
- (id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4;

@end

