//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLTimeSpanClustering : PLDataClustering
{
    unsigned long long _averageNumberOfObjects;
    double _minimumSpan;
}

@property(nonatomic) double minimumSpan; // @synthesize minimumSpan=_minimumSpan;
@property(nonatomic) unsigned long long averageNumberOfObjects; // @synthesize averageNumberOfObjects=_averageNumberOfObjects;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)arg1 inDataset:(id)arg2;
- (id)init;

@end
