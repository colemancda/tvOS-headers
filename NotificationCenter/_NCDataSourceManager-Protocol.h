//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotificationCenter/NSObject-Protocol.h>

@class NSArray;
@protocol _NCParentDataSourceManager;

@protocol _NCDataSourceManager <NSObject>
@property(readonly, nonatomic) NSArray *dataSources;
@property(nonatomic) id <_NCParentDataSourceManager> parentDataSourceManager;
- (void)_stop:(void (^)(void))arg1;
- (void)_start:(void (^)(void))arg1;
@end

