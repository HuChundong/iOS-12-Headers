//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssertionServices/BKSAssertionClientMultiplexerListening-Protocol.h>
#import <AssertionServices/BKSAssertionClientProtocol-Protocol.h>

@class BKSAssertionClientMultiplexer, NSMapTable, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BKSBaseAssertionClient : NSObject <BKSAssertionClientProtocol, BKSAssertionClientMultiplexerListening>
{
    NSMapTable *_assertionHandlersByIdentifier;
    BKSAssertionClientMultiplexer *_multiplexer;
    NSObject<OS_dispatch_queue> *_assertionQueue;
}

- (void)_assertionQueue_sendEvent:(id)arg1 forEventType:(unsigned long long)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_sendMessage:(CDUnknownBlockType)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)_assertionQueue_unregisterHandlerWithIdentifier:(id)arg1 andNotify:(_Bool)arg2;
- (void)_assertionQueue_invalidateAllAssertions;
- (void)connectionWasDestroyed;
- (void)assertionQueue_handleMessage:(id)arg1;
- (void)assertionQueue_handleDestroyEvent:(id)arg1;
- (void)assertionQueue_handleEvent:(id)arg1 ofType:(unsigned long long)arg2;
- (void)unregisterClientHandlerForAssertionIdentifier:(id)arg1;
- (void)registerClientHandler:(id)arg1 forAssertionIdentifier:(id)arg2;
- (void)sendDestroyEvent:(id)arg1;
- (void)sendUpdateEvent:(id)arg1;
- (_Bool)sendCreateEvent:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *supportedAssertionType;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;
- (void)dealloc;
- (id)initWithMultiplexer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

