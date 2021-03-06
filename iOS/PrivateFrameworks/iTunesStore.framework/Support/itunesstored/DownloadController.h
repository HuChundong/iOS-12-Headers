//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class ISOperationQueue, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WorkspaceDownloadObserver;
@protocol OS_dispatch_queue;

@interface DownloadController : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_externalQueue;
    NSMutableArray *_managerClients;
    NSCountedSet *_networkKinds;
    NSMutableSet *_rescuingBundleIdentifiers;
    ISOperationQueue *_thumbnailOperationQueue;
    NSMutableDictionary *_thumbnailRequestsByDownloadID;
    WorkspaceDownloadObserver *_workspaceDownloadObserver;
}

+ (id)controller;
- (void).cxx_destruct;
- (void)_sendDownloadKindsUsingNetwork:(id)arg1;
- (void)_retryRestoreIfNecessaryForTransaction:(id)arg1;
- (_Bool)_restartDownloads:(id)arg1 client:(id)arg2;
- (_Bool)_resumeDownloads:(id)arg1 client:(id)arg2;
- (void)_rescueStuckPlaceholderWithBundleID:(id)arg1;
- (_Bool)_prioritizeDownload:(id)arg1 aboveDownload:(id)arg2 client:(id)arg3 error:(id *)arg4;
- (_Bool)_pauseDownloads:(id)arg1 isForced:(_Bool)arg2 client:(id)arg3;
- (id)_managerClientForConnection:(id)arg1;
- (void)_handleSessionMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;
- (void)_handleSessionMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_filterAndTranslateProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_downloadPersistentIDsFromBundleIDs:(id)arg1;
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;
- (_Bool)_cancelDownloads:(id)arg1 client:(id)arg2;
- (void)_clientDisconnectNotification:(id)arg1;
- (void)setSessionStatusDescriptionWithMessage:(id)arg1 connection:(id)arg2;
- (void)setSessionPropertiesWithMessage:(id)arg1 connection:(id)arg2;
- (void)setSessionProgressWithMessage:(id)arg1 connection:(id)arg2;
- (void)setHandlerPropertiesWithMessage:(id)arg1 connection:(id)arg2;
- (void)setClientDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2;
- (void)resetDisavowedSessionsWithMessage:(id)arg1 connection:(id)arg2;
- (void)getSessionPropertiesWithMessage:(id)arg1 connection:(id)arg2;
- (void)finishSessionWithMessage:(id)arg1 connection:(id)arg2;
- (void)connectDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2;
- (void)setCellularNetworkAllowed:(id)arg1 connection:(id)arg2;
- (void)getCellularNetworkAllowed:(id)arg1 connection:(id)arg2;
- (void)setDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)setDownloadPropertiesWithMessage:(id)arg1 connection:(id)arg2;
- (void)setDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2;
- (void)setAssetPropertiesWithMessage:(id)arg1 connection:(id)arg2;
- (void)retryRestoreDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)restartDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)resumeDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)removePersistenceIDWithMessage:(id)arg1 connection:(id)arg2;
- (void)registerClientDownloadManager:(id)arg1 connection:(id)arg2;
- (void)reevaluateBackgroundDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)prioritizeDownloadWithMessage:(id)arg1 connection:(id)arg2;
- (void)pauseDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)notifyClientsOfExternalPropertyChanges:(id)arg1 connection:(id)arg2;
- (void)notifyClientsOfExternalStateChanges:(id)arg1 connection:(id)arg2;
- (void)moveDownloadWithMessage:(id)arg1 connection:(id)arg2;
- (void)insertDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)getEntityExistsWithMessage:(id)arg1 connection:(id)arg2;
- (void)getDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)getDownloadPropertiesWithMessage:(id)arg1 connection:(id)arg2;
- (void)getDownloadKindsUsingNetworkWithMessage:(id)arg1 connection:(id)arg2;
- (void)getDownloadAssetsWithMessage:(id)arg1 connection:(id)arg2;
- (void)getDownloadAssetPropertiesWithMessage:(id)arg1 connection:(id)arg2;
- (void)getActiveDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)finishDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)cancelDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)cancelAllDownloadsWithMessage:(id)arg1 connection:(id)arg2;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)start;
- (void)observeXPCServer:(id)arg1;
- (void)notifyClientsOfPropertyChanges:(id)arg1 forDownloadID:(long long)arg2 downloadKind:(id)arg3;
- (void)notifyClientsOfExternalPropertyChanges:(id)arg1 forDownloadID:(long long)arg2 downloadKind:(id)arg3;
- (void)notifyClientsOfChangeset:(id)arg1;
- (void)endUsingNetworkForDownloadKind:(id)arg1;
- (void)beginUsingNetworkForDownloadKind:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

