//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class NSExtension, _UIWaitingForRemoteViewContainerViewController;
@protocol NSCopying;

@interface _UIResilientRemoteViewContainerViewController : UIViewController
{
    UIViewController *_remoteViewController;
    _Bool _delayingDisplayOfRemoteView;
    NSExtension *_extension;
    id <NSCopying> _extensionRequestIdentifier;
    UIViewController *_containedViewController;
    _UIWaitingForRemoteViewContainerViewController *_waitingController;
    UIViewController *_errorViewController;
}

+ (id)instantiateWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool delayingDisplayOfRemoteView; // @synthesize delayingDisplayOfRemoteView=_delayingDisplayOfRemoteView;
@property(retain, nonatomic) UIViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
@property(retain, nonatomic) _UIWaitingForRemoteViewContainerViewController *waitingController; // @synthesize waitingController=_waitingController;
@property(retain, nonatomic) UIViewController *containedViewController; // @synthesize containedViewController=_containedViewController;
@property(copy, nonatomic) id <NSCopying> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) id remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void).cxx_destruct;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_displayError:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)invalidate;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)endDelayingDisplayOfRemoteController;
- (void)delayDisplayOfRemoteController;
- (void)_displayRemoteViewController;
- (id)initWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)_defaultInitialViewFrame;

@end

