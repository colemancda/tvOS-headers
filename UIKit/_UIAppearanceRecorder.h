//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface _UIAppearanceRecorder : NSObject
{
    NSString *_classNameToRecord;
    Class _superclassToRecord;
    NSArray *_containerClassNames;
    NSMutableArray *_customizations;
    NSArray *_unarchivedCustomizations;
}

+ (id)_sharedAppearanceRecorderForClass:(Class)arg1 whenContainedIn:(id)arg2;
+ (id)_sharedAppearanceRecorderForClassNamed:(id)arg1 superclass:(Class)arg2 whenContainedIn:(id)arg3;
+ (id)_sharedAppearanceRecorder;
@property(copy, nonatomic, setter=_setContainerClassNames:) NSArray *_containerClassNames; // @synthesize _containerClassNames;
@property(nonatomic, setter=_setSuperclassToRecord:) Class _superclassToRecord; // @synthesize _superclassToRecord;
@property(copy, nonatomic, setter=_setClassNameToRecord:) NSString *_classNameToRecord; // @synthesize _classNameToRecord;
@property(readonly, nonatomic) NSData *_serializedRepresentation;
- (void)_applyCustomizations;
- (void)forwardInvocation:(id)arg1;
- (void)_recordInvocation:(id)arg1 withClassName:(id)arg2 containerClassNames:(id)arg3 traitCollection:(id)arg4 selectorString:(id)arg5 forRemoteProcess:(_Bool)arg6;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSerializedRepresentation:(id)arg1;
- (void)_importCustomizations:(id)arg1 withArchiveVersion:(long long)arg2;

@end

