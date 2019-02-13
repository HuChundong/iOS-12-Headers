//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, RTLearnedVisit;

@interface RTLearnedPlaceTypeInferenceGenerator : NSObject
{
    NSMutableArray *_placeStats;
    RTLearnedVisit *_firstVisit;
    RTLearnedVisit *_lastVisit;
}

@property(retain, nonatomic) RTLearnedVisit *lastVisit; // @synthesize lastVisit=_lastVisit;
@property(retain, nonatomic) RTLearnedVisit *firstVisit; // @synthesize firstVisit=_firstVisit;
@property(retain, nonatomic) NSMutableArray *placeStats; // @synthesize placeStats=_placeStats;
- (void).cxx_destruct;
- (void)log;
- (id)inferPlaceTypes;
- (id)inferPlaceTypesFromTopMedianDwellTime;
- (id)inferPlaceTypesFromDailyPatterns;
- (void)submitVisits:(id)arg1 place:(id)arg2;
- (id)init;

@end
