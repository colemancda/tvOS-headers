//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSampleEntity.h>

@interface HDActivityCacheEntity : HDSampleEntity
{
}

+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableRepresentationEncoderForHealthDaemon:(id)arg1 database:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)entitiesToDeleteBeforeInsertingObject:(id)arg1 provenance:(id)arg2 error:(id *)arg3 database:(id)arg4;
+ (id)activityCachesInRangeStart:(id)arg1 end:(id)arg2 inHealthDaemon:(id)arg3 error:(id *)arg4;
+ (id)activityCacheForIndex:(long long)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)_propertySettersForDataObject;
+ (Class)_associatedDataObjectClass;
+ (id)columnsDefinition;
+ (id)_databaseTable;

@end
