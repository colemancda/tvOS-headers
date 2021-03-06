//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKPaymentSetupViewController.h>

@class UIButton;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupViewController
{
    UIButton *_skipButton;
}

+ (_Bool)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;
+ (_Bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;
+ (_Bool)setupAssistantNeedsToRun;
+ (id)defaultWebServiceForContext:(long long)arg1;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)privacyButtonTouched:(id)arg1;
- (void)viewDidLoad;
- (id)_bridgeContextDefaultLocalCredential;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3;

@end

