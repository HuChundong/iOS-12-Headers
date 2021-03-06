//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppUsageBaseManager.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface PersonalizationManager : AppUsageBaseManager
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _collectingMetrics;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)_shouldEnableAppUsageMetricsForSession;
- (void)_setClusterMappings:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_resetWithReason:(id)arg1;
- (void)_resetDB;
- (void)_reloadClusterMappings:(id)arg1;
- (void)_recordMetrics;
- (void)_recordLaunches;
- (void)_recordInternalEventsForBundleIDs:(id)arg1 eventType:(unsigned char)arg2 installType:(unsigned char)arg3;
- (void)_recordExternalAppEvents:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_metricsContextWithActorID:(id)arg1 error:(id *)arg2;
- (void)_importClusterMappings:(id)arg1;
- (void)_handleAnalyticsUsageSwitchChange:(id)arg1;
- (id)_getPriorAppEventsWithMetadata:(id)arg1 context:(id)arg2;
- (id)_getCrashAppEventsWithContext:(id)arg1;
- (void)_getClusterMappingsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_getClusterMappingIDs:(id)arg1;
- (id)_getClusterMappings:(id)arg1;
- (void)_getGroupingToken:(CDUnknownBlockType)arg1;
- (void)_getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_fullResetWithReason:(id)arg1;
- (void)_flushMetricsWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clearClusterMappingsForBundleIDs:(id)arg1;
- (void)_clearClusterMappings;
- (void)_cleanup:(id)arg1 reason:(id)arg2;
- (void)_clearActorID:(id)arg1 nextPostDate:(id)arg2;
- (id)_amsMetrics;
- (id)_allAppEvents:(id)arg1;
- (_Bool)writeAppMetadata:(id)arg1;
- (id)metricsTopic;
- (id)readCurrentApps;
- (_Bool)isCandiateProxy:(id)arg1;
- (void)decorateMetricsEvent:(id)arg1 appMetadata:(id)arg2 context:(id)arg3;
- (id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2;
- (_Bool)shouldPostAppUsageMetrics;
- (void)setupFollowingMigration;
- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setClusterMappings:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetActorIDWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadClusterMappingsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordInstalledApps:(id)arg1 installType:(unsigned char)arg2;
- (void)recordDeletedApps:(id)arg1;
- (void)recordAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)importClusterMappings:(id)arg1;
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getClusterMappingsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getGroupingToken:(CDUnknownBlockType)arg1;
- (id)getAppMetadataForBundleID:(id)arg1 connection:(id)arg2;
- (void)flushMetricsWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)flushMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

