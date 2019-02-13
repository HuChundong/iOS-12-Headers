//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKTaskConfiguration.h>

@class HKWorkoutConfiguration, NSDictionary, NSSet;

@interface HKWorkoutDataSourceConfiguration : HKTaskConfiguration
{
    HKWorkoutConfiguration *_workoutConfiguration;
    NSSet *_sampleTypesToCollect;
    NSDictionary *_filtersBySampleType;
    NSSet *_eventTypesToCollect;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSSet *eventTypesToCollect; // @synthesize eventTypesToCollect=_eventTypesToCollect;
@property(readonly, copy) NSDictionary *filtersBySampleType; // @synthesize filtersBySampleType=_filtersBySampleType;
@property(readonly, copy) NSSet *sampleTypesToCollect; // @synthesize sampleTypesToCollect=_sampleTypesToCollect;
@property(readonly, copy) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithWorkoutConfiguration:(id)arg1 sampleTypesToCollect:(id)arg2 filters:(id)arg3 eventTypesToCollect:(id)arg4;

@end
