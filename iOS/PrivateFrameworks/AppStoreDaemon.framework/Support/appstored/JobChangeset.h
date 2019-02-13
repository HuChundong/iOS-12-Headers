//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DatabaseChangeset.h"

@class NSDictionary, NSMutableOrderedSet, NSOrderedSet;

@interface JobChangeset : DatabaseChangeset
{
    unsigned long long _changeTypes;
    NSDictionary *_changedJobProperties;
    NSMutableOrderedSet *_downloadPipelineAdditions;
    NSMutableOrderedSet *_downloadPipelineRestarts;
    NSMutableOrderedSet *_pipelineAdditions;
    NSMutableOrderedSet *_pipelineRemovals;
    NSMutableOrderedSet *_removedJobIDs;
    NSMutableOrderedSet *_removedPersistentJobIDs;
    NSMutableOrderedSet *_statusChangedJobIDs;
    unsigned long long _jobChangeTypes;
}

@property(copy, nonatomic) NSDictionary *changedJobProperties; // @synthesize changedJobProperties=_changedJobProperties;
@property(readonly, copy, nonatomic) NSOrderedSet *statusChangedJobIDs; // @synthesize statusChangedJobIDs=_statusChangedJobIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *removedPersistentJobIDs; // @synthesize removedPersistentJobIDs=_removedPersistentJobIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *removedJobIDs; // @synthesize removedJobIDs=_removedJobIDs;
@property(readonly, nonatomic) unsigned long long jobChangeTypes; // @synthesize jobChangeTypes=_jobChangeTypes;
@property(readonly, copy, nonatomic) NSOrderedSet *pipelineAdditions; // @synthesize pipelineAdditions=_pipelineAdditions;
@property(readonly, copy, nonatomic) NSOrderedSet *downloadPipelineRestarts; // @synthesize downloadPipelineRestarts=_downloadPipelineRestarts;
@property(readonly, copy, nonatomic) NSOrderedSet *downloadPipelineAdditions; // @synthesize downloadPipelineAdditions=_downloadPipelineAdditions;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unionChangeset:(id)arg1;
- (void)restartDownloadsOnPipelineWithIDs:(id)arg1;
- (void)startDownloadsOnPipelineWithIDs:(id)arg1;
- (void)removeJobFromPipelineWithID:(long long)arg1;
- (void)addStatusChangedJobID:(long long)arg1;
- (void)addRemovedPersistentJobID:(long long)arg1;
- (void)addRemovedJobID:(long long)arg1;
- (void)addJobsToPipelineWithIDs:(id)arg1;
- (void)addJobChangeTypes:(unsigned long long)arg1;
- (id)init;

@end
