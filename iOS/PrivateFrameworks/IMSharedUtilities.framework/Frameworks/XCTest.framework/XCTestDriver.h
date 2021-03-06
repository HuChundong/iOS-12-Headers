//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCDebugLogDelegate-Protocol.h>
#import <XCTest/XCTASDebugLogDelegate-Protocol.h>
#import <XCTest/XCTRunnerIDESessionDelegate-Protocol.h>

@class NSMutableArray, NSString, XCTestConfiguration;
@protocol OS_dispatch_queue;

@interface XCTestDriver : NSObject <XCTRunnerIDESessionDelegate, XCDebugLogDelegate, XCTASDebugLogDelegate>
{
    XCTestConfiguration *_testConfiguration;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_debugMessageBuffer;
    int _debugMessageBufferOverflow;
}

+ (id)sharedTestDriver;
+ (double)IDEConnectionTimeout;
+ (void)initialize;
@property int debugMessageBufferOverflow; // @synthesize debugMessageBufferOverflow=_debugMessageBufferOverflow;
@property(retain) NSMutableArray *debugMessageBuffer; // @synthesize debugMessageBuffer=_debugMessageBuffer;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) XCTestConfiguration *testConfiguration; // @synthesize testConfiguration=_testConfiguration;
- (void).cxx_destruct;
- (void)runTestConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runTestSuite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportStallOnMainThreadInTestCase:(id)arg1 method:(id)arg2 file:(id)arg3 line:(unsigned long long)arg4;
- (_Bool)runTestsAndReturnError:(id *)arg1;
- (id)_readyIDESession:(id *)arg1 forTestRunSession:(id)arg2;
- (id)_transportForIDESession:(id *)arg1;
- (void)_queue_flushDebugMessageBufferWithBlock:(CDUnknownBlockType)arg1;
- (void)logDebugMessage:(id)arg1;
- (void)printBufferedDebugMessages;
- (void)logStartupInfo;
- (id)initWithTestConfiguration:(id)arg1;
- (void)IDESessionDidDisconnect:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

