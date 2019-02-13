//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFSafariViewControllerDelegate-Protocol.h"

@class NSString, SFSafariViewController, WDProfile;

@interface WDClinicalOnboardingManager : NSObject <SFSafariViewControllerDelegate>
{
    WDProfile *_profile;
    SFSafariViewController *_inFlightLoginViewController;
}

@property(retain, nonatomic) SFSafariViewController *inFlightLoginViewController; // @synthesize inFlightLoginViewController=_inFlightLoginViewController;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)_loginDidCompleteWithNotification:(id)arg1;
- (void)_stopObservingLoginCompletionNotification;
- (void)_startObservingLoginCompletionNotification;
- (id)_appTabBarController;
- (void)_didDismissLoginViewController:(id)arg1;
- (void)_dismissInFlightLoginViewControllerIfExists;
- (void)_startLoginWithLoginViewController:(id)arg1;
- (void)_startOrReplaceLoginWithLoginViewController:(id)arg1;
- (void)startOauthLogonSessionForGateway:(id)arg1;
- (void)onboardAsNewGateway:(id)arg1 inBatch:(id)arg2;
- (void)onboardWithActivity:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
