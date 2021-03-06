//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity, NSDate;

@interface FIUIWorkoutSwimmingSet : NSObject
{
    NSDate *_startDate;
    NSDate *_movementEndDate;
    NSDate *_endDate;
    long long _dominantStrokeStyle;
    long long _strokeCount;
    HKQuantity *_distance;
}

+ (id)_decimalNumberFormatter;
@property(retain, nonatomic) HKQuantity *distance; // @synthesize distance=_distance;
@property(nonatomic) long long strokeCount; // @synthesize strokeCount=_strokeCount;
@property(nonatomic) long long dominantStrokeStyle; // @synthesize dominantStrokeStyle=_dominantStrokeStyle;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *movementEndDate; // @synthesize movementEndDate=_movementEndDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)formattedDominantStrokeStyle;
- (id)formattedStrokeCountUsingFormatType:(long long)arg1 formattingManager:(id)arg2;
- (id)formattedPaceUsingFormatType:(long long)arg1 formattingManager:(id)arg2;
- (id)formattedDistanceValueWithFormattingManager:(id)arg1;
- (id)formattedRestDurationWithFormattingManager:(id)arg1;
- (id)formattedActiveDurationWithFormattingManager:(id)arg1;
- (double)_restingDuration;
- (double)_activeDuration;

@end

