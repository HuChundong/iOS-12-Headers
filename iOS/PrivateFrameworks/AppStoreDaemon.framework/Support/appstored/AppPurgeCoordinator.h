//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CacheDeletePurgeableProvider-Protocol.h"

@class NSArray, NSString;

@interface AppPurgeCoordinator : NSObject <CacheDeletePurgeableProvider>
{
    NSArray *_blacklist;
    NSArray *_fullBlackList;
    NSArray *_fullPluginBlacklist;
    double _gracePeriodSeconds;
    NSArray *_watchAppList;
}

- (void).cxx_destruct;
- (id)_watchAppBundles;
- (id)_sortDescriptors;
- (id)_purgebaleForUrgency:(long long)arg1 outError:(id *)arg2;
- (id)_purgeApps:(id)arg1 desiredPurgeSize:(long long)arg2 purgedSize:(unsigned long long *)arg3 offloadOnly:(_Bool)arg4;
- (id)_processApp:(id)arg1 context:(id)arg2;
- (id)_lastModifiedForBundle:(id)arg1;
- (_Bool)_isBeyondGracePeriod;
- (id)_demoteableAppsWithInterval:(long long)arg1 context:(id)arg2 outError:(id *)arg3;
- (id)_cutoffDateForUrgency:(long long)arg1;
- (void)_appsUsedBasedOnLastModifiedForWindow:(long long)arg1 apps:(id)arg2 cutoffDate:(id)arg3 ourError:(id *)arg4;
- (void)_appsBasedOnWindow:(long long)arg1 apps:(id)arg2 cutoffDate:(id)arg3 ourError:(id *)arg4;
- (id)_appsUsedWindow:(long long)arg1 ourError:(id *)arg2;
- (id)_launchWindowAttributesForUrgency:(long long)arg1;
- (id)_availableInStore:(id)arg1 error:(id *)arg2;
- (id)_appPluginBlacklist;
- (id)_appBlacklist;
- (long long)purgeForVolume:(id)arg1 urgency:(long long)arg2 desiredPurge:(id)arg3;
- (long long)purgeableForVolume:(id)arg1 urgency:(long long)arg2 override:(_Bool)arg3;
- (long long)purgeableForVolume:(id)arg1 urgency:(long long)arg2;
- (void)cacheInvalidated;
- (id)allPurgeablesForVolume:(id)arg1;
- (id)purgeAppsForVolume:(id)arg1 urgency:(long long)arg2 desiredPurge:(id)arg3 performAvailabilityCheck:(_Bool)arg4 additionalApps:(id)arg5 offloadOnly:(_Bool)arg6 client:(id)arg7;
- (id)purgeableAppsForVolume:(id)arg1 urgency:(long long)arg2 performAvailabilityCheck:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
