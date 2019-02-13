//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSLock;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestTileGroupObserverProxy : NSObject
{
    NSHashTable *_observers;
    NSLock *_observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (unsigned long long)observersCount;
- (void)forEachObserver:(CDUnknownBlockType)arg1 finished:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)init;

@end
