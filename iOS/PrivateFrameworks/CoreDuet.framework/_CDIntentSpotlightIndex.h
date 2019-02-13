//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKKnowledgeStorageEventNotificationDelegate-Protocol.h>

@class _CDSpotlightEventIndexer, _DKKnowledgeStorage;
@protocol OS_dispatch_queue;

@interface _CDIntentSpotlightIndex : NSObject <_DKKnowledgeStorageEventNotificationDelegate>
{
    _Bool _includeAdditions;
    _DKKnowledgeStorage *_storage;
    _CDSpotlightEventIndexer *_indexer;
    double _delay;
    unsigned long long _batchSize;
    NSObject<OS_dispatch_queue> *_activityQueue;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool includeAdditions; // @synthesize includeAdditions=_includeAdditions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue; // @synthesize activityQueue=_activityQueue;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) _CDSpotlightEventIndexer *indexer; // @synthesize indexer=_indexer;
@property(readonly, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)triggerIndexIncludingAdditions:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2;
- (void)dealloc;
- (id)initWithKnowledgeStorage:(id)arg1;

@end
