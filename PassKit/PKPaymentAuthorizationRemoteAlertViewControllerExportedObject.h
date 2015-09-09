//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/PKPaymentAuthorizationServiceProtocol-Protocol.h>

@class NSMutableSet, NSString, PKPaymentAuthorizationRemoteAlertViewController;
@protocol PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationRemoteAlertViewControllerExportedObject : NSObject <PKPaymentAuthorizationServiceProtocol>
{
    _Bool _didForceDismiss;
    NSMutableSet *_completionHandlers;
    id <PKPaymentAuthorizationServiceProtocol> _delegate;
    PKPaymentAuthorizationRemoteAlertViewController *_controller;
}

@property(nonatomic) PKPaymentAuthorizationRemoteAlertViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) id <PKPaymentAuthorizationServiceProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)forceDismissDidComplete;
- (void)handleDismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(_Bool)arg1;
- (void)handleHostApplicationDidCancel;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
