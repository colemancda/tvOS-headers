//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupFieldText.h>

@class NSDate, NSString;

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText
{
    _Bool _showsDay;
    _Bool _showsMonth;
    _Bool _showsYear;
    NSString *_submissionFormat;
}

@property(copy, nonatomic) NSString *submissionFormat; // @synthesize submissionFormat=_submissionFormat;
@property(nonatomic) _Bool showsYear; // @synthesize showsYear=_showsYear;
@property(nonatomic) _Bool showsMonth; // @synthesize showsMonth=_showsMonth;
@property(nonatomic) _Bool showsDay; // @synthesize showsDay=_showsDay;
- (unsigned long long)fieldType;
- (void)updateWithConfiguration:(id)arg1;
@property(readonly, nonatomic) NSDate *defaultDate;
- (_Bool)submissionStringMeetsAllRequirements;
- (id)_defaultValueAsDateForCurrentLocale;
- (id)submissionString;
- (id)displayString;
- (void)setCurrentValue:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end

