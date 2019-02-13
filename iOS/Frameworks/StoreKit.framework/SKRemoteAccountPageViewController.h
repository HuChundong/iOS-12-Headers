//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKUIClientAccountPageViewController-Protocol.h>

@class NSString, SKAccountPageViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteAccountPageViewController : _UIRemoteViewController <SKUIClientAccountPageViewController>
{
    SKAccountPageViewController *_accountPageViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak SKAccountPageViewController *accountPageViewController; // @synthesize accountPageViewController=_accountPageViewController;
- (void).cxx_destruct;
- (void)popBridgedViewControllersToIndex:(unsigned long long)arg1;
- (void)pushBridgedViewControllerAnimated:(_Bool)arg1 options:(id)arg2;
- (void)setBridgedNavigationItemWithOptions:(id)arg1;
- (void)overrideRedeemCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)financeInterruptionResolved:(_Bool)arg1;
- (void)dismissViewControllerWithResult:(id)arg1 error:(id)arg2;
- (void)didFinishLoading;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
