//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <Notes/ICNoteVisibilityTesting-Protocol.h>

@class NSString;

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>
{
}

- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (id)predicateForNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (_Bool)supportsVisibilityTestingType:(long long)arg1;
- (id)noteVisibilityTestingForSearchingAccount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
