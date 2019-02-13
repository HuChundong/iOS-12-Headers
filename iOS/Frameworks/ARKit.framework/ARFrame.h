//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class ARCamera, ARFaceData, ARFrameTimingData, ARLightEstimate, ARPointCloud, ARRawSceneUnderstandingData, ARWorldTrackingErrorData, ARWorldTrackingState, AVDepthData, NSArray, NSDate, NSDictionary;

@interface ARFrame : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _transformFlags;
    _Bool _shouldRestrictFrameRate;
    double _timestamp;
    struct __CVBuffer *_capturedImage;
    AVDepthData *_capturedDepthData;
    double _capturedDepthDataTimestamp;
    ARCamera *_camera;
    NSArray *_anchors;
    ARLightEstimate *_lightEstimate;
    long long _worldMappingStatus;
    double _currentCaptureTimestamp;
    ARPointCloud *_featurePoints;
    ARPointCloud *_referenceFeaturePoints;
    NSArray *_cachedPointClouds;
    long long _worldAlignment;
    ARFrameTimingData *_timingData;
    ARWorldTrackingErrorData *_worldTrackingErrorData;
    NSDictionary *_worldTrackingStateDetails;
    ARWorldTrackingState *_worldTrackingState;
    long long _renderFramesPerSecond;
    NSDate *_captureDate;
    ARRawSceneUnderstandingData *_rawSceneUnderstandingData;
    ARFaceData *_faceData;
    // Error parsing type: {?="columns"[4]}, name: _referenceOriginTransform
    // Error parsing type: {?="columns"[4]}, name: _referenceOriginDelta
    // Error parsing type: {?="columns"[4]}, name: _sessionOriginTransform
    // Error parsing type: {?="columns"[4]}, name: _worldAlignmentTransform
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) ARFaceData *faceData; // @synthesize faceData=_faceData;
@property(retain, nonatomic) ARRawSceneUnderstandingData *rawSceneUnderstandingData; // @synthesize rawSceneUnderstandingData=_rawSceneUnderstandingData;
@property(retain, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(nonatomic) _Bool shouldRestrictFrameRate; // @synthesize shouldRestrictFrameRate=_shouldRestrictFrameRate;
@property(nonatomic) long long renderFramesPerSecond; // @synthesize renderFramesPerSecond=_renderFramesPerSecond;
@property(retain, nonatomic) ARWorldTrackingState *worldTrackingState; // @synthesize worldTrackingState=_worldTrackingState;
@property(copy, nonatomic) NSDictionary *worldTrackingStateDetails; // @synthesize worldTrackingStateDetails=_worldTrackingStateDetails;
@property(retain, nonatomic) ARWorldTrackingErrorData *worldTrackingErrorData; // @synthesize worldTrackingErrorData=_worldTrackingErrorData;
@property(retain, nonatomic) ARFrameTimingData *timingData; // @synthesize timingData=_timingData;
@property(nonatomic) long long worldAlignment; // @synthesize worldAlignment=_worldAlignment;
// Error parsing type for property worldAlignmentTransform:
// Property attributes: T{?=[4]},N,V_worldAlignmentTransform

// Error parsing type for property sessionOriginTransform:
// Property attributes: T{?=[4]},N,V_sessionOriginTransform

// Error parsing type for property referenceOriginDelta:
// Property attributes: T{?=[4]},N,V_referenceOriginDelta

// Error parsing type for property referenceOriginTransform:
// Property attributes: T{?=[4]},N,V_referenceOriginTransform

@property(retain, nonatomic) NSArray *cachedPointClouds; // @synthesize cachedPointClouds=_cachedPointClouds;
@property(retain, nonatomic) ARPointCloud *referenceFeaturePoints; // @synthesize referenceFeaturePoints=_referenceFeaturePoints;
@property(retain, nonatomic) ARPointCloud *featurePoints; // @synthesize featurePoints=_featurePoints;
@property(readonly, nonatomic) double currentCaptureTimestamp; // @synthesize currentCaptureTimestamp=_currentCaptureTimestamp;
@property(nonatomic) long long worldMappingStatus; // @synthesize worldMappingStatus=_worldMappingStatus;
@property(retain, nonatomic) ARLightEstimate *lightEstimate; // @synthesize lightEstimate=_lightEstimate;
@property(copy, nonatomic) NSArray *anchors; // @synthesize anchors=_anchors;
@property(readonly, copy, nonatomic) ARCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) double capturedDepthDataTimestamp; // @synthesize capturedDepthDataTimestamp=_capturedDepthDataTimestamp;
@property(retain, nonatomic) AVDepthData *capturedDepthData; // @synthesize capturedDepthData=_capturedDepthData;
@property(nonatomic) struct __CVBuffer *capturedImage; // @synthesize capturedImage=_capturedImage;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_hitTestEstimatedPlanesFromOrigin:(long long)arg1 withDirection:planeAlignment: /* Error: Ran out of types for this method. */;
- (id)_horizontalPlaneEstimateFromFeaturePoint:fromOrigin:withDirection: /* Error: Ran out of types for this method. */;
- (id)_hitTestFromOrigin:(unsigned long long)arg1 withDirection:types: /* Error: Ran out of types for this method. */;
-     // Error parsing type: {?=[4]}16@0:8, name: gravityAlignedReferenceOriginTransform
- (_Bool)worldAlignmentTransformAvailable;
- (_Bool)sessionOriginTransformAvailable;
- (_Bool)referenceOriginDeltaAvailable;
- (void)setReferenceOriginChanged:(_Bool)arg1;
- (_Bool)referenceOriginChanged;
- (void)setReferenceOriginTransformUpdated:(_Bool)arg1;
- (_Bool)referenceOriginTransformUpdated;
- (_Bool)referenceOriginTransformAvailable;
@property(readonly, nonatomic) ARPointCloud *rawFeaturePoints;
- (struct CGAffineTransform)displayTransformForOrientation:(long long)arg1 viewportSize:(struct CGSize)arg2;
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithTimestamp:(double)arg1 context:(id)arg2;
- (id)initWithCamera:(id)arg1 timestamp:(double)arg2;

@end
