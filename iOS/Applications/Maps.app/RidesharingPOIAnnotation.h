//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKAnnotation-Protocol.h"
#import "MKCustomFeatureAnnotation-Protocol.h"

@class NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface RidesharingPOIAnnotation : NSObject <MKCustomFeatureAnnotation, MKAnnotation>
{
    VKCustomFeature *_feature;
    CDStruct_2c43369c _coordinate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
@property(nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)feature;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end
