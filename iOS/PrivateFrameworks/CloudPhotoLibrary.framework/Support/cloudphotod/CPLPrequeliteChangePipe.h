//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineChangePipeImplementation-Protocol.h"

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteChangePipe : CPLPrequeliteStorage <CPLEngineChangePipeImplementation>
{
    CPLPrequeliteVariable *_pullGenerationVar;
    CPLPrequeliteVariable *_pushGenerationVar;
    NSString *_countSqlCommand;
    NSString *_logDomain;
    unsigned long long _lastPullMarkerForCompact;
}

- (void).cxx_destruct;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (id)statusPerScopeIndex;
- (id)status;
- (void)writeTransactionDidFail;
- (id)allChangeBatches;
- (_Bool)compactChangeBatchesWithError:(id *)arg1;
- (_Bool)deleteAllChangesWithScopeFilter:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAllChangeBatchesWithError:(id *)arg1;
- (_Bool)hasSomeChangeWithScopeFilter:(id)arg1;
- (_Bool)hasSomeChangeInScopesWithIdentifiers:(id)arg1;
- (_Bool)hasSomeChangeWithScopedIdentifier:(id)arg1;
- (_Bool)popNextBatchWithError:(id *)arg1;
- (id)nextBatch;
- (_Bool)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (_Bool)appendChangeBatch:(id)arg1 error:(id *)arg2;
- (_Bool)hasQueuedBatches;
- (unsigned long long)countOfQueuedBatches;
- (_Bool)_setPushMarker:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)_pushMarker;
- (_Bool)_setPullMarker:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)_pullMarker;
- (_Bool)upgradeStorageToVersion:(long long)arg1;
- (_Bool)initializeStorage;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

