//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSHTTPURLResponse;

__attribute__((visibility("hidden")))
@interface TVSMachineDataOperation : ISOperation
{
    NSHTTPURLResponse *_response;
}

@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (void)run;
- (id)initWithURLResponse:(id)arg1;

@end
