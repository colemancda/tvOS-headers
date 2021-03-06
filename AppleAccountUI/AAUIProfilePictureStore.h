//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AAGrandSlamSigner, ABMonogrammer, ACAccount, ACAccountStore, NSOperationQueue;

@interface AAUIProfilePictureStore : NSObject
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    ABMonogrammer *_monogrammer;
    NSOperationQueue *_networkingQueue;
    _Bool _didBeginUsingAddressBookSingleton;
    double _pictureDiameter;
    long long _pictureStyle;
}

@property(nonatomic) long long pictureStyle; // @synthesize pictureStyle=_pictureStyle;
@property(nonatomic) double pictureDiameter; // @synthesize pictureDiameter=_pictureDiameter;
- (void).cxx_destruct;
- (id)_profilePictureForPicture:(id)arg1 crop:(_Bool)arg2 cropRect:(struct CGRect)arg3 cacheable:(_Bool)arg4;
- (id)cacheablePictureForPicture:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)profilePictureForPicture:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)profilePictureForPicture:(id)arg1;
- (void)_updateServerProfilePictureWithRequest:(id)arg1;
- (void)_updateServerProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;
- (void)setProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberFirstAndLastNames:(id)arg1;
- (_Bool)_onAddressBookQueue_peopleLinkedToMeCardContainsRecordID:(int)arg1;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberEmailAddress:(id)arg1;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMember:(id)arg1;
- (id)_monogramPersonImage:(void *)arg1;
- (id)_familyMemberPersonPicture:(id)arg1;
- (id)_meCardPicture;
- (_Bool)_onAddressBookQueue_personSyncsWithiCloud:(void *)arg1;
- (void)_fetchProfilePictureForFamilyMemberFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_profilePictureForFamilyMemberWithoutMonogramFallback:(id)arg1;
- (void)fetchProfilePictureForFamilyMember:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)profilePictureForFamilyMember:(id)arg1;
- (void)_fetchProfilePictureWithRequest:(id)arg1 personID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchProfilePictureForAccountOwnerFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchProfilePictureForAccountOwner:(CDUnknownBlockType)arg1;
- (id)_correctlySizedImageFromImage:(id)arg1;
- (id)profilePictureForAccountOwnerWithoutMonogramFallback;
- (id)profilePictureForAccountOwner;
- (id)_fallbackProfilePictureForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)_invalidateMonogrammer;
- (id)_monogrammer;
- (void)dealloc;
- (id)initWithGrandSlamSigner:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3;
- (id)init;
- (void)setProfilePictureForAccountOwner:(id)arg1;
- (id)profilePictureForFamilyMemberWithFirstName:(id)arg1 lastName:(id)arg2 email:(id)arg3;
- (id)initWithAppleAccount:(id)arg1 store:(id)arg2;

@end

