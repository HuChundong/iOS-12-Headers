//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVRunLoopCondition, AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetReaderOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    _Bool alwaysCopiesSampleData;
    _Bool supportsRandomAccess;
    NSArray *currentTimeRanges;
    AVWeakReference *weakReferenceToAssetReader;
    struct OpaqueFigAssetReader *figAssetReader;
    int extractionID;
    AVRunLoopCondition *sampleBufferAvailabilityCondition;
    _Bool currentConfigurationIsFinal;
    _Bool extractionCompleteForCurrentConfiguration;
    int finished;
    _Bool maximizePowerEfficiency;
}

@end
