//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class NSArray, NSString;

@interface CoreDAVSRVLookupTask : CoreDAVTask
{
    NSString *_serviceString;
    NSArray *_fetchedRecords;
    struct __CFHost *_host;
}

@property(nonatomic) struct __CFHost *host; // @synthesize host=_host;
@property(retain, nonatomic) NSArray *fetchedRecords; // @synthesize fetchedRecords=_fetchedRecords;
@property(retain, nonatomic) NSString *serviceString; // @synthesize serviceString=_serviceString;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)performCoreDAVTask;
- (id)description;
- (void)dealloc;
- (id)initWithServiceString:(id)arg1;

@end

