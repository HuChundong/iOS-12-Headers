//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NADApplicationStore, NADSyncController, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface NADaemon : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_workspaceListener;
    NSObject<OS_dispatch_queue> *_queue;
    NADSyncController *_syncController;
    NADApplicationStore *_applicationStore;
}

+ (id)sharedDaemon;
- (void).cxx_destruct;
- (void)migrateFixedLibraryPathIfNeeded;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)registerForLaunchEvents;
- (void)startSyncControllerIfNeeded;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

