//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVMetadataFaceObjectInternal : NSObject
{
    long long _faceID;
    _Bool _hasRollAngle;
    double _rollAngle;
    _Bool _hasYawAngle;
    double _yawAngle;
    _Bool _hasLeftEyeClosedConfidence;
    int _leftEyeClosedConfidence;
    _Bool _hasRightEyeClosedConfidence;
    int _rightEyeClosedConfidence;
    _Bool _hasSmileConfidence;
    int _smileConfidence;
    _Bool _hasLeftEyeBounds;
    struct CGRect _leftEyeBounds;
    _Bool _hasRightEyeBounds;
    struct CGRect _rightEyeBounds;
}

@property(nonatomic) struct CGRect rightEyeBounds; // @synthesize rightEyeBounds=_rightEyeBounds;
@property(nonatomic) _Bool hasRightEyeBounds; // @synthesize hasRightEyeBounds=_hasRightEyeBounds;
@property(nonatomic) struct CGRect leftEyeBounds; // @synthesize leftEyeBounds=_leftEyeBounds;
@property(nonatomic) _Bool hasLeftEyeBounds; // @synthesize hasLeftEyeBounds=_hasLeftEyeBounds;
@property(nonatomic) int smileConfidence; // @synthesize smileConfidence=_smileConfidence;
@property(nonatomic) _Bool hasSmileConfidence; // @synthesize hasSmileConfidence=_hasSmileConfidence;
@property(nonatomic) int rightEyeClosedConfidence; // @synthesize rightEyeClosedConfidence=_rightEyeClosedConfidence;
@property(nonatomic) _Bool hasRightEyeClosedConfidence; // @synthesize hasRightEyeClosedConfidence=_hasRightEyeClosedConfidence;
@property(nonatomic) int leftEyeClosedConfidence; // @synthesize leftEyeClosedConfidence=_leftEyeClosedConfidence;
@property(nonatomic) _Bool hasLeftEyeClosedConfidence; // @synthesize hasLeftEyeClosedConfidence=_hasLeftEyeClosedConfidence;
@property(nonatomic) double yawAngle; // @synthesize yawAngle=_yawAngle;
@property(nonatomic) _Bool hasYawAngle; // @synthesize hasYawAngle=_hasYawAngle;
@property(nonatomic) double rollAngle; // @synthesize rollAngle=_rollAngle;
@property(nonatomic) _Bool hasRollAngle; // @synthesize hasRollAngle=_hasRollAngle;
@property(nonatomic) long long faceID; // @synthesize faceID=_faceID;

@end

