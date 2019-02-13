//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pegasus/NSXPCListenerDelegate-Protocol.h>
#import <Pegasus/PGPictureInPictureRemoteObjectDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString, NSXPCListener, PGPictureInPictureApplication, PGPictureInPictureRemoteObject;
@protocol OS_dispatch_queue, PGPictureInPictureControllerDelegate;

@interface PGPictureInPictureController : NSObject <NSXPCListenerDelegate, PGPictureInPictureRemoteObjectDelegate>
{
    NSMutableSet *_pictureInPictureRemoteObjects;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    PGPictureInPictureRemoteObject *_activePictureInPictureRemoteObject;
    PGPictureInPictureRemoteObject *_suspendedPictureInPictureRemoteObject;
    id <PGPictureInPictureControllerDelegate> _delegate;
    struct {
        unsigned int pictureInPictureController_didCreatePictureInPictureViewController:1;
        unsigned int pictureInPictureController_willDestroyPictureInPictureViewController:1;
        unsigned int pictureInPictureController_willHidePictureInPictureViewController:1;
        unsigned int pictureInPictureController_didHidePictureInPictureViewController:1;
    } _delegateRespondsTo;
    _Bool _pictureInPictureActive;
    NSSet *_pictureInPictureApplications;
    PGPictureInPictureApplication *_activePictureInPictureApplication;
}

+ (_Bool)isPictureInPictureSupported;
@property(readonly, nonatomic) PGPictureInPictureApplication *activePictureInPictureApplication; // @synthesize activePictureInPictureApplication=_activePictureInPictureApplication;
@property(readonly, nonatomic) NSSet *pictureInPictureApplications; // @synthesize pictureInPictureApplications=_pictureInPictureApplications;
@property(readonly, nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive; // @synthesize pictureInPictureActive=_pictureInPictureActive;
- (void).cxx_destruct;
- (void)pictureInPictureRemoteObject:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didShowPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willShowPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
- (_Bool)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)_pictureInPictureRemoteObjectIsFaceTime:(id)arg1;
- (id)_remoteObjectThatShouldStartPictureInPictureEnteringBackgroundForPictureInPictureApplication:(id)arg1;
- (void)pictureInPictureInterruptionEnded;
- (void)pictureInPictureInterruptionBegan;
- (void)startPictureInPictureForApplicationEnteringBackground:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg1;
- (struct CGSize)preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1;
- (struct CGRect)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1;
@property(nonatomic) __weak id <PGPictureInPictureControllerDelegate> delegate;
@property(readonly, nonatomic) _Bool isStoppingPictureInPictureForAlert;
@property(readonly, nonatomic) _Bool isStartingStoppingOrCancellingPictureInPicture;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
