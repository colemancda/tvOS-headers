//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/LSApplicationProxy.h>

@interface LSApplicationProxy (UserNotification)
+ (id)un_bundleForBundleIdentifier:(id)arg1;
+ (id)un_applicationProxyForBundleIdentifier:(id)arg1;
- (id)un_pathForSoundName:(id)arg1;
- (_Bool)_un_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2;
- (_Bool)un_shouldUseDefaultDataProvider;
- (_Bool)un_usesLocalNotification;
- (_Bool)un_requiresLocalNotification;
- (id)un_infoDictionary;
- (id)un_bundle;
- (_Bool)un_isSystemApplication;
@end
