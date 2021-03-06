//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FlightUtilities/MKMapViewDelegate-Protocol.h>

@class FUFlight, FUFlightView, NSDate, NSMapTable, NSNumber, NSString;

@interface FUFlightViewController : UIViewController <MKMapViewDelegate>
{
    NSMapTable *_disabledConstraints;
    _Bool _loadingFlight;
    NSDate *_startLoadingDate;
    _Bool _highlightCurrentFlightLeg;
    FUFlight *_flight;
    FUFlightView *_flightView;
    NSNumber *_flightCode;
    NSString *_airlineCode;
}

@property(retain) NSString *airlineCode; // @synthesize airlineCode=_airlineCode;
@property(retain) NSNumber *flightCode; // @synthesize flightCode=_flightCode;
@property __weak FUFlightView *flightView; // @synthesize flightView=_flightView;
@property(nonatomic) _Bool highlightCurrentFlightLeg; // @synthesize highlightCurrentFlightLeg=_highlightCurrentFlightLeg;
@property(retain, nonatomic) FUFlight *flight; // @synthesize flight=_flight;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (long long)delayInMinutesForFlightStep:(id)arg1;
- (_Bool)departingLate;
- (_Bool)departingEarly;
- (_Bool)arrivingLate;
- (_Bool)arrivingEarly;
- (void)updateFlightStatus;
- (void)updateFlightDates;
- (id)displayStringForDate:(id)arg1 locale:(id)arg2 late:(_Bool)arg3 timeZone:(id)arg4;
- (void)updateFlightTerminalInfo;
- (void)updateDelayInfo;
- (void)updateLocationInfo;
- (void)updateAirlineInformation;
- (void)fadeLayer:(id)arg1 visible:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addFittingView:(id)arg1;
- (void)hideView:(id)arg1;
- (void)showView:(id)arg1;
- (void)showFlightView;
- (void)showErrorView;
- (void)showLoadingView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)loadFlightWithFlightCode:(id)arg1 airlineCode:(id)arg2 date:(id)arg3;
- (void)commonInit;
- (id)initWithFlightCode:(unsigned long long)arg1 airlineCode:(id)arg2;
- (id)initWithFlight:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

