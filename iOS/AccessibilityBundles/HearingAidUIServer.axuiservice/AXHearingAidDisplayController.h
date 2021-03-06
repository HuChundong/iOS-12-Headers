//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HearingAidUIServer/AXHAShortcutUpdateProtocol-Protocol.h>

@class HACCShortcutViewController, HearingAidUIServer, NSString;

@interface AXHearingAidDisplayController : UIViewController <AXHAShortcutUpdateProtocol>
{
    HearingAidUIServer *_parentController;
    HACCShortcutViewController *_moduleUIController;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) HACCShortcutViewController *moduleUIController; // @synthesize moduleUIController=_moduleUIController;
@property(nonatomic) HearingAidUIServer *parentController; // @synthesize parentController=_parentController;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (void)setShouldDismissShortcut:(_Bool)arg1;
- (void)shortcut:(id)arg1 dismissalDidChange:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

