//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>
#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface ARObjectDetectionResultData : NSObject <ARResultData, NSCopying, NSSecureCoding>
{
    NSArray *_detectedObjects;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *detectedObjects; // @synthesize detectedObjects=_detectedObjects;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
-     // Error parsing type: @160@0:8{?=[4]}16{?=[4]}80@144@152, name: anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
