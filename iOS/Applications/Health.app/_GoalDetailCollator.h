//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _GoalDetailCollator : NSObject
{
    long long _entryCount;
    long long _entriesExceedingGoal;
    double _totalPercentFromGoal;
}

- (id)detailStringWithProfile:(id)arg1 timeScope:(long long)arg2;
- (id)activitySummaryDetailStringWithActivitySummary:(id)arg1 profile:(id)arg2 activityValue:(long long)arg3;
- (void)processCoordinateUserInfo:(id)arg1;
- (id)init;

@end
