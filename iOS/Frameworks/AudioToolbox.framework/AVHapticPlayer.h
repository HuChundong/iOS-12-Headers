//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HapticClient, NSArray;

@interface AVHapticPlayer : NSObject
{
    HapticClient *_client;
    _Bool _resourcesAllocated;
    unsigned long long _behavior;
    NSArray *_channelArray;
    CDUnknownBlockType _connectionErrorHandler;
}

+ (_Bool)isSupported;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(readonly) _Bool resourcesAllocated; // @synthesize resourcesAllocated=_resourcesAllocated;
@property(readonly) HapticClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (_Bool)detachHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)setSequenceParam:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 param:(unsigned long long)arg4 value:(float)arg5 error:(id *)arg6;
- (_Bool)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)playHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 offset:(double)arg3;
- (_Bool)finishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopRunning;
- (void)startRunningWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopPrewarm;
- (void)prewarmWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)enableSequenceLooping:(unsigned long long)arg1 enable:(_Bool)arg2 error:(id *)arg3;
- (_Bool)prepareHapticSequence:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)loadHapticPattern:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)loadHapticSequence:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)loadHapticEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deallocateRenderResources;
- (void)allocateRenderResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)releaseChannels;
- (void)invalidateChannels;
@property(copy) CDUnknownBlockType connectionErrorHandler;
@property(readonly) double hapticLatency;
@property(readonly) double currentMediaTime;
@property(readonly, nonatomic) NSArray *channels;
- (_Bool)setNumberOfChannels:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)getBehavior;
- (void)dealloc;
- (id)initAndReturnError:(id *)arg1;

@end
