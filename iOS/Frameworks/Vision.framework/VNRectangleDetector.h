//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNDetector.h>

#import <Vision/VNDetectorIdealImageSizeProviding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNRectangleDetector : VNDetector <VNDetectorIdealImageSizeProviding>
{
    float *_perMeshPtr;
}

+ (id)supportedImageSizeSetForOptions:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)needsMetalContext;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
