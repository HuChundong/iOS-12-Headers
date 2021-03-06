//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CRCarKitMonitoringServerService-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CRCarKitMonitoringServiceAgent : NSObject <NSXPCListenerDelegate, CRCarKitMonitoringServerService>
{
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_connectionsQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionsQueue; // @synthesize connectionsQueue=_connectionsQueue;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
- (void).cxx_destruct;
- (void)handleUpdatedVehicle:(id)arg1 enabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopMonitoringCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startMonitoringCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)connection:(id)arg1 isMonitoringSerial:(id)arg2;
- (_Bool)decrementTransactionCountForUserInfo:(id)arg1;
- (void)incrementTransactionCountForUserInfo:(id)arg1;
- (id)userInfoDictionaryForConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

