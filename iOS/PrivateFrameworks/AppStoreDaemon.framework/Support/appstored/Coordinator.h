//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IXAppInstallCoordinator;
@protocol OS_dispatch_queue;

@interface Coordinator : NSObject
{
    IXAppInstallCoordinator *_coordinator;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _intent;
}

+ (id)_newODRPromiseWithDefinition:(id)arg1;
+ (id)_newAppPromiseWithDefinition:(id)arg1;
+ (_Bool)_preflightPromise:(id)arg1 error:(id *)arg2;
+ (_Bool)_isPropertyNotSetError:(id)arg1;
+ (id)coordinatorForBundleID:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
- (_Bool)_removeODRPromiseID:(id)arg1 error:(id *)arg2;
- (id)_fetchODRPromiseID:(id)arg1 error:(id *)arg2;
- (id)_addODRPromiseWithDefinition:(id)arg1 error:(id *)arg2;
- (id)_setAppPromiseWithDefinition:(id)arg1 error:(id *)arg2;
- (id)_fetchAppPromiseID:(id)arg1 error:(id *)arg2;
- (_Bool)_isOwnedOrResponsible;
- (id)_coordinatorWithUserDataPromise;
- (id)_coordinatorWithInstallOptions;
- (id)_coordinatorWithInitialODRAssetPromises;
- (id)_coordinatorWithImportance;
- (id)_coordinatorWithAppAssetPromise;
- (id)_coordinatorConformingToProtocol:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)uniqueID;
- (_Bool)isComplete;
- (_Bool)hasSupportForInitialODR;
- (id)error;
- (unsigned long long)creatorID;
- (id)bundleID;
- (void)setObserver:(id)arg1;
- (_Bool)isObserved;
- (id)completeUserDataPromise;
- (id)setPreparationPromise:(id)arg1;
- (id)setPlaceholderPromise:(id)arg1;
- (_Bool)hasPlaceholderPromise;
- (id)completePlaceholderPromise;
- (id)truncateODRPromiseID:(id)arg1 withDefinition:(id)arg2;
- (id)resetODRPromiseID:(id)arg1;
- (_Bool)hasInitialODRAssetPromises;
- (_Bool)isPaused;
- (id)fetchODRPromiseID:(id)arg1 orCreateWithDefinition:(id)arg2;
- (id)fetchODRPromiseID:(id)arg1;
- (id)failODRPromiseID:(id)arg1 withReason:(id)arg2;
- (id)completeODRPromiseConfiguration;
- (id)truncateAppPromiseID:(id)arg1 withDefinition:(id)arg2;
- (id)resetAppPromiseID:(id)arg1;
- (_Bool)hasAppPromise;
- (id)fetchAppPromiseID:(id)arg1 orCreateWithDefinition:(id)arg2;
- (id)fetchAppPromiseID:(id)arg1;
- (id)failAppPromiseID:(id)arg1 withReason:(id)arg2;
- (id)setInstallOptions:(id)arg1;
- (id)setImportance:(unsigned long long)arg1;
- (_Bool)isEqualToCoordinator:(id)arg1;
- (_Bool)hasInstallOptions;
- (id)cancelForReason:(id)arg1;
- (id)initWithCoordinator:(id)arg1 andIntent:(unsigned long long)arg2;

@end

