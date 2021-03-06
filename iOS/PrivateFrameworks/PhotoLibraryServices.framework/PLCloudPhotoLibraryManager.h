//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/CPLLibraryManagerDelegate-Protocol.h>
#import <PhotoLibraryServices/CPLResourceProgressDelegate-Protocol.h>
#import <PhotoLibraryServices/CPLStatusDelegate-Protocol.h>
#import <PhotoLibraryServices/PLBatterySaverWatcherDelegate-Protocol.h>
#import <PhotoLibraryServices/PLCloudChangeTrackerDelegate-Protocol.h>
#import <PhotoLibraryServices/PLCloudPersistentHistoryMigratorContext-Protocol.h>
#import <PhotoLibraryServices/PLCloudUserSessionHandling-Protocol.h>
#import <PhotoLibraryServices/PLForegroundMonitorDelegate-Protocol.h>

@class CPLLibraryManager, NSDate, NSMutableDictionary, NSNumber, NSString, PFCoalescer, PLBatterySaverWatcher, PLCloudBatchDownloader, PLCloudBatchUploader, PLCloudInMemoryTaskManager, PLCloudPhotoLibraryUploadTracker, PLCloudResourceManager, PLCloudTaskManager, PLForegroundMonitor, PLPhotoLibrary;
@protocol OS_dispatch_queue, OS_dispatch_source, PLCloudChangeTracker;

@interface PLCloudPhotoLibraryManager : NSObject <PLCloudChangeTrackerDelegate, PLCloudPersistentHistoryMigratorContext, CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundMonitorDelegate, PLBatterySaverWatcherDelegate, PLCloudUserSessionHandling, CPLStatusDelegate>
{
    PLCloudBatchUploader *_uploader;
    PLCloudBatchDownloader *_downloader;
    id <PLCloudChangeTracker> _changeTracker;
    _Bool _wasRebuild;
    _Bool _hasAttemptedMigration;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLBatterySaverWatcher *_batterySaverWatcher;
    PLForegroundMonitor *_foregroundMonitor;
    _Bool _processingChange;
    unsigned long long _mode;
    _Bool _checkEnableStateOnIdle;
    _Bool _icplEnabled;
    _Bool _pushOnIdle;
    _Bool _pullOnIdle;
    _Bool _modeChangePending;
    PLPhotoLibrary *_photoLibrary;
    CPLLibraryManager *_cplLibrary;
    _Bool _stopped;
    _Bool _needSoftReset;
    int _pauseRequest;
    short _pauseReason;
    PLCloudTaskManager *_taskManager;
    PLCloudResourceManager *_resourceManager;
    NSObject<OS_dispatch_source> *_unpauseDispatchTimer;
    NSObject<OS_dispatch_source> *_userUnpauseDispatchTimer;
    NSDate *_pendingResetSyncDate;
    _Bool _initializedMaster;
    PFCoalescer *_coalescer;
    NSObject<OS_dispatch_queue> *_uploadDownloadCountQueue;
    unsigned long long _boundForUploadingPhotos;
    unsigned long long _boundForUploadingVideos;
    unsigned long long _boundForUploadingOtherItems;
    NSObject<OS_dispatch_source> *_workInProgressTimer;
    _Bool _significantWork;
    PLCloudInMemoryTaskManager *_inMemoryTaskManager;
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;
    NSMutableDictionary *_placeholderAssetAvailabilityHandlers;
    struct os_unfair_lock_s _placeholderAssetAvailabilityHandlersLock;
    NSNumber *__numberOfPhotosToPush;
    NSNumber *__numberOfVideosToPush;
    NSNumber *__numberOfOtherItemsToPush;
    NSNumber *__numberOfPhotosDownloaded;
    NSNumber *__numberOfVideosDownloaded;
    NSNumber *__numberOfOtherItemsDownloaded;
    CDUnknownBlockType __idleStateTransitionOneTimeAction;
}

+ (void)getDownloadPhotoCount:(unsigned long long *)arg1 downloadVideoCount:(unsigned long long *)arg2;
+ (_Bool)_hasItemToDownload;
+ (void)_setToDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2;
+ (id)_serialQueue;
+ (void)_writeDict:(id)arg1 withFilename:(id)arg2;
+ (id)_readPListWithFilename:(id)arg1;
+ (_Bool)needResetSyncErrorType:(id)arg1;
+ (id)descriptionForResourceType:(unsigned long long)arg1;
+ (id)sharedManager;
@property(copy, nonatomic, setter=_setIdleStateTransitionOneTimeAction:) CDUnknownBlockType _idleStateTransitionOneTimeAction; // @synthesize _idleStateTransitionOneTimeAction=__idleStateTransitionOneTimeAction;
@property(retain, nonatomic, setter=_setNumberOfOtherItemsDownloaded:) NSNumber *_numberOfOtherItemsDownloaded; // @synthesize _numberOfOtherItemsDownloaded=__numberOfOtherItemsDownloaded;
@property(retain, nonatomic, setter=_setNumberOfVideosDownloaded:) NSNumber *_numberOfVideosDownloaded; // @synthesize _numberOfVideosDownloaded=__numberOfVideosDownloaded;
@property(retain, nonatomic, setter=_setNumberOfPhotosDownloaded:) NSNumber *_numberOfPhotosDownloaded; // @synthesize _numberOfPhotosDownloaded=__numberOfPhotosDownloaded;
@property(retain, nonatomic, setter=_setNumberOfOtherItemsToPush:) NSNumber *_numberOfOtherItemsToPush; // @synthesize _numberOfOtherItemsToPush=__numberOfOtherItemsToPush;
@property(retain, nonatomic, setter=_setNumberOfVideosToPush:) NSNumber *_numberOfVideosToPush; // @synthesize _numberOfVideosToPush=__numberOfVideosToPush;
@property(retain, nonatomic, setter=_setNumberOfPhotosToPush:) NSNumber *_numberOfPhotosToPush; // @synthesize _numberOfPhotosToPush=__numberOfPhotosToPush;
- (void).cxx_destruct;
- (void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forceSyncMomentShareWithScopeIdentifier:(id)arg1;
- (void)boostPriorityForMomentShareWithScopeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptCPLMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishCPLMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)statusDidChange:(id)arg1;
- (_Bool)_hasIncomingWorkFileMarker;
- (_Bool)_hasAvalancheIncomingWork;
- (void)_checkForWorkInProgress;
- (void)_stopWorkInProgressTimer;
- (void)_startWorkInProgressTimer;
- (void)endUserSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool inResetSync;
@property(readonly, nonatomic) unsigned long long totalUploadedOriginalSize;
@property(readonly, nonatomic) unsigned long long totalSizeOfUnpushedOriginals;
@property(readonly, nonatomic) unsigned long long totalNumberOfUploadedMasters;
@property(readonly, nonatomic) unsigned long long totalNumberOfUnpushedMasters;
- (unsigned long long)_inq_numberOfOtherItemsToDownload;
- (unsigned long long)_inq_numberOfVideosToDownload;
- (unsigned long long)_inq_numberOfPhotosToDownload;
- (unsigned long long)_inq_numberOfVideosToUpload;
- (unsigned long long)_inq_numberOfPhotosToUpload;
- (unsigned long long)_inq_numberOfOtherItemsToUpload;
- (void)_updateTransferCounts;
- (id)cplStatus;
- (id)getCPLState;
- (_Bool)isPausedForDownloadRequestHighPriority:(_Bool)arg1;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(_Bool)arg2 forBundleIdentifier:(id)arg3;
- (_Bool)_isColorAwareResource:(unsigned long long)arg1 adjustedResource:(_Bool)arg2;
- (void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2;
- (void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2;
- (short)_placeHolderKindFromCPLResourceType:(unsigned long long)arg1;
- (void)_updateWithCPLResource:(id)arg1 isHighPriority:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_localResourcesForCPLResource:(id)arg1;
- (void)_processColorSpaceForAsset:(id)arg1 resourceURL:(id)arg2 resourceType:(unsigned long long)arg3 isAdjustedResource:(_Bool)arg4;
- (struct CGSize)_targetSizeForInputSize:(struct CGSize)arg1 maxPixelSize:(unsigned long long)arg2;
- (void)_linkFileFrom:(id)arg1 to:(id)arg2;
- (void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg2 data:(id)arg3 withError:(id)arg4;
- (void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;
- (void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1;
- (void)libraryManagerHasStatusChanges:(id)arg1;
- (void)libraryManagerHasChangesToPull:(id)arg1;
- (void)libraryManagerDidStartSynchronization:(id)arg1;
- (void)libraryManagerStatusDidChange:(id)arg1;
- (void)processDownloadBatchWithSession:(id)arg1;
- (void)_downloadFromCloud;
- (_Bool)overrideSystemBudgetsForSyncSession:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAutomaticPrefetchOrPrune;
- (id)lastKnownCloudVersionFromDisk;
- (void)_processUploadBatchWithStartupFailureCount:(unsigned long long)arg1;
- (void)_finishUploadWithNoBatchesToUpload;
- (void)_handleFinalizeSessionError:(id)arg1 commitError:(id)arg2 uploadBatchContainer:(id)arg3 needResetSync:(_Bool)arg4 forTransaction:(id)arg5;
- (void)_processUploadBatch;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)localEventFromEvent:(id)arg1;
- (void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2;
- (void)uploadToCloudForEventsResult:(id)arg1;
- (void)_uploadFullPhotoLibraryToCloud;
- (void)_checkForPushedMasters;
- (void)_fixMasterStatusIn:(id)arg1;
- (_Bool)isConnectedToChangeTracker;
- (id)fetchEventsFromChangeTracker;
- (void)_fetchNewEventsFromChangeTracker;
- (void)dumpStatusIncludingDaemon:(_Bool)arg1;
- (void)doSoftResetSync;
- (void)resetSyncDueToMigrationMarker;
- (id)readLocalVersion;
- (void)setLocalVersion:(id)arg1;
- (void)setMigratedLocalVersion:(id)arg1;
- (void)setMigrationMarker:(id)arg1;
- (id)readMigrationMarker;
- (void)_doResetSync:(long long)arg1;
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadResourceInMemoryForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(_Bool)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)downloadAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(_Bool)arg3 highPriority:(_Bool)arg4 clientBundleID:(id)arg5 proposedTaskIdentifier:(id)arg6 taskDidBeginHandler:(CDUnknownBlockType)arg7 progressBlock:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)_assetResourceForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(_Bool)arg3 isPhoto:(_Bool *)arg4;
- (void)downloadResource:(id)arg1 highPriority:(_Bool)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)fetchPublicURLForAsset:(id)arg1 resourceType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchAdjustmentDataForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1;
- (void)cancelResourceTransferTaskWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sync;
- (void)callPlaceholderAssetAvailabilityHandlerForAssetUUID:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)unregisterPlaceholderAssetAvailabilityHandlerForAssetUUID:(id)arg1;
- (void)registerPlaceholderAssetAvailabilityHandler:(CDUnknownBlockType)arg1 forAssetUUID:(id)arg2;
- (void)changeTrackerDidReceiveChanges;
- (_Bool)connectToChangeTracker;
- (void)saveTokenObject:(id)arg1;
- (id)readTokenObject;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)_setupPLCPLPlist;
- (void)batterySaverModeDidChange;
- (void)_checkEnableState;
- (void)_processNextTransaction;
- (void)reportLibrarySizeIfNeeded;
- (void)_handleOptimizeSettingChange;
- (void)reportDeviceData:(id)arg1;
- (id)_addPrefix:(id)arg1 toKeysInDictionary:(id)arg2;
- (void)_updatePendingResetSyncDate;
- (_Bool)_setupTimerForUnpause;
- (void)_constructUnpauseTimerFrom:(id)arg1 to:(id)arg2;
- (id)_calculateUnpauseTimeForPauseTime:(id)arg1;
- (void)_stopUnpauseTimer;
- (void)_transitionToState:(unsigned long long)arg1;
- (_Bool)_canExternallyTransitionToNewLibraryModeIgnoringPause:(_Bool)arg1 ignoringBatterySaver:(_Bool)arg2;
- (void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 afterDelay:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_runSyncOnIsolationQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)disableiCPL;
- (void)_pause;
- (void)_doPause;
- (void)_unpause;
- (void)setPause:(_Bool)arg1 reason:(short)arg2;
- (void)_doUnpause;
- (void)dealloc;
- (void)_resetCPLLibrary;
- (void)cplHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endsSignificantWork;
- (void)beginsSignificantWorkWithResourcesSize:(unsigned long long)arg1;
- (void)_migrateFromChangeHubToCoreDataIfNecessary;
- (void)_sendOptimizeFeedbackIfNecessary;
- (void)_runOneTimeMigrationStepsIfNecessary;
- (void)_initializeMasterAndSizeCalculation;
- (void)_promptForCameraCaptureSettingChangeWithReason:(int)arg1;
- (void)_handleAccountFlagsChangeIfNecessary;
- (void)_openCPLLibrary;
- (void)_enableiCPL;
- (void)enableiCPL;
- (id)init;
- (id)_debugNameForMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

