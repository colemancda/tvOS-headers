//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CoreRecentsUtilities)
- (id)cr_lowercaseStringWithStandardLocale;
- (id)cr_uniqueFilenameWithRespectToFilenames:(id)arg1;
- (id)cr_copyIDNAEncodedEmailAddress;
- (id)cr_copyIDNADecodedEmailAddress;
- (id)cr_copyStringByEncodingIDNAInRange:(struct _NSRange)arg1;
- (id)cr_copyStringByDecodingIDNAInRange:(struct _NSRange)arg1;
- (struct _NSRange)cr_rangeOfAddressDomain;
@end

