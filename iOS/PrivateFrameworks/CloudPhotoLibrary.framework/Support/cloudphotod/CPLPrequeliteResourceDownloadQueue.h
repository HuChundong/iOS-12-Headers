//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineResourceDownloadQueueImplementation-Protocol.h"

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceDownloadQueue : CPLPrequeliteStorage <CPLEngineResourceDownloadQueueImplementation>
{
    CPLPrequeliteVariable *_nextTaskIdentifier;
    CPLPrequeliteVariable *_nextPosition;
    _Bool _recreatedDownloadQueueIndex;
}

- (void).cxx_destruct;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (id)statusPerScopeIndex;
- (id)status;
- (id)recordsDesignation;
- (_Bool)hasActiveOrQueuedBackgroundDownloadOperations;
- (unsigned long long)countOfQueuedDownloadTasks;
- (unsigned long long)_countOfRecordsWithStatus:(int)arg1;
- (id)enumeratorForDownloadedResources;
- (_Bool)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;
- (id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)removeBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)reenqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(_Bool)arg3 didDiscard:(_Bool *)arg4 error:(id *)arg5;
- (_Bool)enqueueBackgroundDownloadTaskForResource:(id)arg1 downloading:(_Bool)arg2 error:(id *)arg3;
- (id)_enqueuedResourceForResource:(id)arg1 verifyScopeIndex:(_Bool)arg2;
- (_Bool)_deleteEnqueuedResource:(id)arg1 error:(id *)arg2;
- (_Bool)_getNextPosition:(unsigned long long *)arg1 andBumpWithError:(id *)arg2;
- (unsigned long long)newTaskIdentifier;
- (_Bool)openWithError:(id *)arg1;
- (_Bool)upgradeStorageToVersion:(long long)arg1;
- (_Bool)initializeStorage;
- (_Bool)_createResourceTypeAndStatusIndex;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

