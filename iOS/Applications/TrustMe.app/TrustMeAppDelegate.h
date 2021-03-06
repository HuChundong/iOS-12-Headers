//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSRemoteAlertHandleObserver-Protocol.h"
#import "TrustCertificateViewControllerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class CPDistributedMessagingCenter, CPDistributedMessagingDelayedReplyContext, NSMutableArray, NSString, NSTimer, SBSRemoteAlertHandle, TrustCertificateViewController, TrustMeRotatingViewController, UIWindow;

@interface TrustMeAppDelegate : NSObject <SBSRemoteAlertHandleObserver, TrustCertificateViewControllerDelegate, UIApplicationDelegate>
{
    SBSRemoteAlertHandle *_alertHandle;
    _Bool _remoteAlertControllerIsDismissing;
    TrustCertificateViewController *_trustController;
    CPDistributedMessagingCenter *_center;
    CPDistributedMessagingDelayedReplyContext *_replyContext;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_queuedReplyContexts;
    NSTimer *_killTimer;
    TrustMeRotatingViewController *_currentRemoteAlertController;
}

@property(nonatomic) __weak TrustMeRotatingViewController *currentRemoteAlertController; // @synthesize currentRemoteAlertController=_currentRemoteAlertController;
- (void).cxx_destruct;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (id)trustControllerToBePresentedByRemoteAlertViewController;
- (void)homeButtonWasPressed;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)_startCenter;
- (void)_trustInfoMessageReceived:(id)arg1 userInfo:(id)arg2 auditToken:(CDStruct_6ad76789 *)arg3;
- (void)_queueMessage:(id)arg1 withReplyContext:(id)arg2;
- (void)_presentNextQueuedMessage;
- (void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2;
- (void)_sheetControllerDidFinishDismissing;
- (void)_dismissRemoteAlertController;
- (void)_presentRemoteAlertWithInfo:(id)arg1 replyContext:(id)arg2;
- (void)_sendResponse:(int)arg1;
- (void)_killTimerFired;
- (void)_clearTimer;
- (void)_scheduleTimer;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

