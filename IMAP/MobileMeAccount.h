//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAP/iToolsAccount.h>

@interface MobileMeAccount : iToolsAccount
{
}

+ (id)displayedAccountTypeString;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)hostname;
+ (id)deliveryHostName;
+ (id)emailAddressHostPart;
+ (void)initialize;
- (_Bool)shouldFetchACEDBInfoForError:(id)arg1;
- (_Bool)isAccountClassEquivalentTo:(id)arg1;
- (_Bool)isHostnameEquivalentTo:(id)arg1;

@end

