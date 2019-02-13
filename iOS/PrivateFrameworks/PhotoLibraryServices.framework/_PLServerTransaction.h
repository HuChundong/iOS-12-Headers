//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/_PLClientTransaction.h>

@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction
{
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (void)completeTransactionScope:(id)arg1;
- (void)completeTransaction;
- (void)abortTransaction;
- (id)changeScopes;
- (void)addChangeScopes:(id)arg1;
- (void)_enqueueChangeScopes:(id)arg1;
- (id)generateChangeScopesDescription;
- (_Bool)isClientTransaction;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;
- (void)dealloc;
- (id)init;

@end
