//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDCoreRoutineTrafficConditions, RTLocationOfInterest;

@interface RTTrafficConditionsMetric : NSObject
{
    RTLocationOfInterest *_locationOfInterest;
    AWDCoreRoutineTrafficConditions *_metric;
}

@property(readonly, nonatomic) AWDCoreRoutineTrafficConditions *metric; // @synthesize metric=_metric;
@property(readonly, nonatomic) RTLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
- (void).cxx_destruct;
- (id)description;
- (void)updatePrecisionRecallWithVisitedLocation:(id)arg1;
- (id)initWithPLOIETA:(id)arg1;
- (id)init;

@end

