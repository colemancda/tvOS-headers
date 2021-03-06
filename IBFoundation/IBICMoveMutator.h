//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICCatalogMutator.h>

@class IBICAbstractCatalogItem, NSData, NSString;

@interface IBICMoveMutator : IBICCatalogMutator
{
    IBICAbstractCatalogItem *_destinationParent;
    IBICAbstractCatalogItem *_sourceParent;
    IBICAbstractCatalogItem *_item;
    NSString *_destinationPath;
    NSString *_sourcePath;
    _Bool _makeNamesUnique;
    _Bool _wasOnlyReference;
    long long _namingStrategy;
    NSString *_explicitDestinationFileName;
    NSString *_originalFileName;
    NSData *_sourcePendingManifestData;
    NSString *_sourcePendingManifestPath;
    NSData *_destinationPendingManifestData;
    NSString *_destinationPendingManifestPath;
}

+ (id)moveMutatorForChangingFileName:(id)arg1 fileName:(id)arg2;
- (void).cxx_destruct;
- (id)mutationDescription;
- (id)inverseMutator;
- (void)applyToDiskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)applyMoveOrCopyReturningError:(id *)arg1;
- (void)applyToModel;
- (_Bool)isNoOp;
- (id)initWithItem:(id)arg1 destinationParent:(id)arg2 namingStrategy:(long long)arg3 stategyOptions:(id)arg4;

@end

