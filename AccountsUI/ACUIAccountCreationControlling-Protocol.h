//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountsUI/NSObject-Protocol.h>

@class PSSpecifier, PSViewController;

@protocol ACUIAccountCreationControlling <NSObject>
- (void)beginAccountCreationWithSpecifier:(PSSpecifier *)arg1 fromViewController:(PSViewController *)arg2 completion:(void (^)(ACAccount *, long long, NSDictionary *))arg3;
@end

