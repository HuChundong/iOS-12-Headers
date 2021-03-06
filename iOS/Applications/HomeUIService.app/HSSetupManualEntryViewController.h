//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HFSetupPairingObserver-Protocol.h"
#import "HSPairingSetupStep-Protocol.h"
#import "HSSetupCodeFieldDelegate-Protocol.h"

@class HSPairingStatusViewController, HSSetupCodeField, NAFuture, NSLayoutConstraint, NSObject, NSString, UIButton, UIScrollView, UIVisualEffectView;
@protocol HFSetupPairingController, HSSetupStepDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface HSSetupManualEntryViewController : UIViewController <HSSetupCodeFieldDelegate, HFSetupPairingObserver, HSPairingSetupStep>
{
    id <HSSetupStepDelegate> _delegate;
    HSPairingStatusViewController *_statusViewController;
    id <HFSetupPairingController> _pairingController;
    UIScrollView *_statusContainerView;
    unsigned long long _manualEntryState;
    NSObject<OS_dispatch_queue> *_updateManualEntryStateSerialQueue;
    NSObject<OS_dispatch_semaphore> *_updateManualEntryStateSemaphore;
    HSSetupCodeField *_codeField;
    UIButton *_actionButton;
    UIVisualEffectView *_blurView;
    NSLayoutConstraint *_actionButtonBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *actionButtonBottomConstraint; // @synthesize actionButtonBottomConstraint=_actionButtonBottomConstraint;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) HSSetupCodeField *codeField; // @synthesize codeField=_codeField;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *updateManualEntryStateSemaphore; // @synthesize updateManualEntryStateSemaphore=_updateManualEntryStateSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateManualEntryStateSerialQueue; // @synthesize updateManualEntryStateSerialQueue=_updateManualEntryStateSerialQueue;
@property(nonatomic) unsigned long long manualEntryState; // @synthesize manualEntryState=_manualEntryState;
@property(retain, nonatomic) UIScrollView *statusContainerView; // @synthesize statusContainerView=_statusContainerView;
@property(retain, nonatomic) id <HFSetupPairingController> pairingController; // @synthesize pairingController=_pairingController;
@property(readonly, nonatomic) HSPairingStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long setupState;
- (void)setupDidFailWithError:(id)arg1 forDiscoveredAccessory:(id)arg2;
- (void)didUpdatePairingController:(id)arg1;
- (void)setupCodeFieldDidReturn:(id)arg1;
- (void)setupCodeFieldDidBecomeIncomplete:(id)arg1;
- (void)setupCodeFieldDidBecomeComplete:(id)arg1;
- (void)pairingController:(id)arg1 didTransitionToPhase:(unsigned long long)arg2 statusTitle:(id)arg3 statusDescription:(id)arg4;
- (void)showCameraScanUI:(id)arg1;
- (void)retryPairing:(id)arg1;
- (void)reenterCode:(id)arg1;
- (void)pair:(id)arg1;
- (void)cancel:(id)arg1;
- (double)_actionButtonBottomConstraintConstantForKeyboardHeight:(double)arg1;
- (double)_containerVerticalPadding;
- (void)_updateManualEntryState:(unsigned long long)arg1;
- (void)_handleSetupFailedForDiscoveredAccessory:(id)arg1;
- (void)_configureCameraButton;
- (void)_configureCloseButton;
- (void)_configureRetryButton;
- (void)_configureEnterCodeAgainButton;
- (void)_prepareConstraints;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_bringUpCodeField;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly) Class superclass;

@end

