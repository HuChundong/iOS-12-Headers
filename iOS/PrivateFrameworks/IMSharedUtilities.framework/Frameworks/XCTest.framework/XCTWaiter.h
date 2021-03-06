//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCTWaiterManagement-Protocol.h>
#import <XCTest/XCTestExpectationDelegate-Protocol.h>

@class NSArray, NSString, _XCTWaiterImpl;
@protocol OS_dispatch_queue, XCTWaiterDelegate;

@interface XCTWaiter : NSObject <XCTestExpectationDelegate, XCTWaiterManagement>
{
    _XCTWaiterImpl *_internalImplementation;
}

+ (long long)waitForExpectations:(id)arg1 timeout:(double)arg2 enforceOrder:(_Bool)arg3;
+ (long long)waitForExpectations:(id)arg1 timeout:(double)arg2;
+ (void)wait:(double)arg1;
+ (void)setStallHandler:(CDUnknownBlockType)arg1;
+ (void)handleStalledWaiter:(id)arg1;
+ (CDUnknownBlockType)installWatchdogForWaiter:(id)arg1 timeout:(double)arg2;
+ (double)watchdogTimeoutSlop;
+ (void)setWatchdogTimeoutSlop:(double)arg1;
+ (id)subsystemQueue;
@property(readonly) _XCTWaiterImpl *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
- (void).cxx_destruct;
@property(readonly) _Bool currentContextIsNested;
- (long long)result;
@property(readonly) double timeout;
- (void)setState:(long long)arg1;
- (long long)state;
@property(readonly, getter=isInProgress) _Bool inProgress;
@property struct __CFRunLoop *waitingRunLoop;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
- (void)setWaitCallStackReturnAddresses:(id)arg1;
@property(readonly, copy) NSArray *waitCallStackReturnAddresses;
@property(readonly) NSArray *fulfilledExpectations;
@property __weak id <XCTWaiterDelegate> delegate;
- (void)_queue_validateExpectationFulfillmentWithTimeoutState:(_Bool)arg1;
- (_Bool)_queue_enforceOrderingWithFulfilledExpectations:(id)arg1;
- (void)_queue_computeInitiallyFulfilledExpectations;
- (void)_queue_setExpectations:(id)arg1;
- (void)_validateExpectationFulfillmentWithTimeoutState:(_Bool)arg1;
- (void)didFulfillExpectation:(id)arg1;
- (void)cancelPrimitiveWait;
- (void)cancelWaiting;
- (void)primitiveWait:(double)arg1;
- (void)interruptForWaiter:(id)arg1;
- (long long)waitForExpectations:(id)arg1 timeout:(double)arg2 enforceOrder:(_Bool)arg3;
- (long long)waitForExpectations:(id)arg1 timeout:(double)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

