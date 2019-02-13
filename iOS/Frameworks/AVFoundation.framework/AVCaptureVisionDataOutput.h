//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

#import <AVFoundation/AVCaptureDataOutputDelegateOverride-Protocol.h>

@class AVCaptureVisionDataOutputInternal, NSObject, NSString;
@protocol AVCaptureVisionDataOutputDelegate, OS_dispatch_queue;

@interface AVCaptureVisionDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>
{
    AVCaptureVisionDataOutputInternal *_internal;
}

+ (id)new;
+ (void)initialize;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_initializeClientVisiblePropertiesForSourceDevice:(id)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
@property(readonly, nonatomic) id delegateOverride;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (_Bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (_Bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (_Bool)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)triggerBurst;
- (void)setKeypointDetectionThreshold:(float)arg1;
- (float)keypointDetectionThreshold;
@property(nonatomic, getter=isFeatureOrientationAssignmentEnabled) _Bool featureOrientationAssignmentEnabled;
@property(nonatomic, getter=isFeatureBinningEnabled) _Bool featureBinningEnabled;
@property(nonatomic) unsigned long long maxKeypointsCount;
@property(nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property(nonatomic) unsigned long long gaussianPyramidOctavesCount;
@property(nonatomic) CDStruct_1b6d18a9 maxBurstDuration;
@property(nonatomic) CDStruct_1b6d18a9 minBurstFrameDuration;
@property(nonatomic) CDStruct_1b6d18a9 minFrameDuration;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureVisionDataOutputDelegate> delegate;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
