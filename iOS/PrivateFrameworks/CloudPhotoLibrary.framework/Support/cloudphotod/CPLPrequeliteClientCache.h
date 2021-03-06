//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineClientCacheImplementation-Protocol.h"

@class NSString;

@interface CPLPrequeliteClientCache : CPLPrequeliteStorage <CPLEngineClientCacheImplementation>
{
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (void)fillRelatedIdentifiersInChange:(id)arg1;
- (id)statusPerScopeIndex;
- (id)statusDictionary;
- (id)status;
- (_Bool)_updateRelatedIdentifier:(id)arg1 forRecordWithIdentifier:(id)arg2;
- (_Bool)_deleteBadRelations;
- (id)_badContainerRelationsIdentifiers;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (_Bool)hasRecordWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1;
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;
- (id)recordWithScopedIdentifier:(id)arg1;
- (_Bool)deleteRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)updateRecord:(id)arg1 error:(id *)arg2;
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;
- (_Bool)upgradeStorageToVersion:(long long)arg1;
- (_Bool)initializeStorage;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

