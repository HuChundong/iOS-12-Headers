//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WLDXPCTransactionScope, WLKPlaybackSummary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WLDPlaybackObserver : NSObject
{
    _Bool _isObserving;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    WLKPlaybackSummary *_lastSummary;
    WLDXPCTransactionScope *_transaction;
    CDUnknownBlockType _updateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (_Bool)_isSummary:(id)arg1 signifantChangeFromSummary:(id)arg2;
- (void)_updateWithInfo:(id)arg1;
- (void)_updateTransactionState;
- (id)_nowPlayingSummaryWithError:(id *)arg1;
- (_Bool)_nowPlayingAppIsPlaying;
- (id)_nowPlayingBundleID;
- (void)_nowPlayingInfoDidChangeNotification:(id)arg1;
- (void)_nowPlayingAppIsPlayingDidChangeNotification:(id)arg1;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (id)nowPlayingSummary;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;

@end

