//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, SCNNode, SCNScene;

@interface AVTMemojiSkeleton : NSObject
{
    SCNNode *_rootNode;
    SCNNode *_referenceNode;
    NSMapTable *_bindPose;
    SCNScene *_scene;
}

+ (id)skeleton;
@property(readonly) NSMapTable *bindPose; // @synthesize bindPose=_bindPose;
@property(readonly) SCNNode *referenceNode; // @synthesize referenceNode=_referenceNode;
@property(readonly) SCNNode *rootNode; // @synthesize rootNode=_rootNode;
@property(readonly) SCNScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)updateRig:(id)arg1 fromBone:(id)arg2 symmetry:(_Bool)arg3 applyRange:(_Bool)arg4;
- (id)bonesForRig:(id)arg1;
- (void)getRigValues:(id)arg1 symmetry:(_Bool)arg2 withBone:(id)arg3 spacingOut:(double *)arg4 elevationOut:(double *)arg5 scaleOut:(double *)arg6 rotationOut:(double *)arg7;
- (float)_getNodeAngle:(id)arg1;
- (struct SCNVector3)absolutePositionForRigElevation:(double)arg1 spacing:(double)arg2 symmetry:(_Bool)arg3;
- (void)updateBonesFromRigs:(id)arg1;
- (void)updateBoneForRig:(id)arg1;
- (struct SCNVector3)bindPoseForNode:(id)arg1;
- (void)storeBindPose:(id)arg1;
- (void)commonInit;
- (id)init;

@end

