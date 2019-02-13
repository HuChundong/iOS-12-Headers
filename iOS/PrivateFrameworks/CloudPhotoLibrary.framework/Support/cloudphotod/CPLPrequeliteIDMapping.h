//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineIDMappingImplementation-Protocol.h"

@class NSString;

@interface CPLPrequeliteIDMapping : CPLPrequeliteStorage <CPLEngineIDMappingImplementation>
{
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (id)scopeIndexColumnName;
- (id)status;
- (_Bool)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)removeMappingForLocalScopedIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)hasPendingIdentifiers;
- (_Bool)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id *)arg2;
- (_Bool)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;
- (_Bool)upgradeStorageToVersion:(long long)arg1;
- (_Bool)initializeStorage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
