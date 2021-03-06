//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMNebulaDaemonClientProtocol-Protocol.h>
#import <CameraUI/CAMNebulaDaemonProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol CAMNebulaDaemonIrisClientProtocol, CAMNebulaDaemonTimelapseClientProtocol, OS_dispatch_queue;

@interface CAMNebulaDaemonProxyManager : NSObject <CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol>
{
    id <CAMNebulaDaemonTimelapseClientProtocol> _timelapseClientDelegate;
    id <CAMNebulaDaemonIrisClientProtocol> _irisClientDelegate;
    NSObject<OS_dispatch_queue> *__queue;
    NSXPCConnection *__connection;
    long long __connectionCount;
}

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;
@property(readonly, nonatomic) long long _connectionCount; // @synthesize _connectionCount=__connectionCount;
@property(readonly, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue=__queue;
@property(nonatomic) __weak id <CAMNebulaDaemonIrisClientProtocol> irisClientDelegate; // @synthesize irisClientDelegate=_irisClientDelegate;
@property(nonatomic) __weak id <CAMNebulaDaemonTimelapseClientProtocol> timelapseClientDelegate; // @synthesize timelapseClientDelegate=_timelapseClientDelegate;
- (void).cxx_destruct;
- (void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(_Bool)arg1;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg1;
- (void)performIrisCrashRecovery;
- (void)enqueueIrisVideoJobs:(id)arg1;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (void)updatePendingWorkFromDiskForceEndLastSession:(_Bool)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)pingAfterInterruption;
- (void)_getProxyForExecutingBlock:(CDUnknownBlockType)arg1;
- (void)_closeConnectionToDaemon;
- (void)_ensureConnectionToDaemon;
- (void)closeConnectionToDaemon;
- (void)ensureConnectionToDaemon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

