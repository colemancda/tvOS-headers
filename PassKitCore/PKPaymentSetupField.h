//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;
@protocol NSObject><NSCopying;

@interface PKPaymentSetupField : NSObject
{
    id <NSObject><NSCopying> _currentValue;
    _Bool _currentValueFromCameraCapture;
    _Bool _requiresSecureSubmission;
    NSString *_identifier;
    NSString *_localizedDisplayName;
    NSString *_localizedPlaceholder;
    NSString *_displayFormat;
    NSString *_defaultValue;
    NSString *_submissionKey;
    NSString *_submissionDestination;
    NSDictionary *_rawConfigurationDictionary;
}

+ (Class)classForIdentifier:(id)arg1 type:(unsigned long long)arg2;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1 configuration:(id)arg2;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1;
+ (id)sampleCustomPaymentSetupFields;
+ (id)newRandomlyGeneratedField;
@property(readonly, copy, nonatomic) NSDictionary *rawConfigurationDictionary; // @synthesize rawConfigurationDictionary=_rawConfigurationDictionary;
@property(nonatomic) _Bool requiresSecureSubmission; // @synthesize requiresSecureSubmission=_requiresSecureSubmission;
@property(copy, nonatomic) NSString *submissionDestination; // @synthesize submissionDestination=_submissionDestination;
@property(copy, nonatomic) NSString *submissionKey; // @synthesize submissionKey=_submissionKey;
@property(nonatomic, getter=isCurrentValueFromCameraCapture) _Bool currentValueFromCameraCapture; // @synthesize currentValueFromCameraCapture=_currentValueFromCameraCapture;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *displayFormat; // @synthesize displayFormat=_displayFormat;
@property(copy, nonatomic) NSString *localizedPlaceholder; // @synthesize localizedPlaceholder=_localizedPlaceholder;
@property(copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) id <NSObject><NSCopying> currentValue; // @synthesize currentValue=_currentValue;
- (void)noteCurrentValueChanged;
@property(readonly, nonatomic) unsigned long long fieldType;
- (void)_setLocalizedDisplayName:(id)arg1;
- (_Bool)submissionStringMeetsAllRequirements;
- (id)submissionString;
- (id)displayString;
- (id)labelFieldObject;
- (id)dateFieldObject;
- (id)textFieldObject;
- (_Bool)isFieldTypeLabel;
- (_Bool)isFieldTypeDate;
- (_Bool)isFieldTypeText;
@property(readonly, nonatomic, getter=isBuiltIn) _Bool builtIn;
- (void)updateWithConfiguration:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

