//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteConfiguration/NSObject-Protocol.h>

@protocol RCOperationThrottler;

@protocol RCOperationThrottlerDelegate <NSObject>

@optional
- (void)operationThrottler:(id <RCOperationThrottler>)arg1 performAsyncOperationWithCompletion:(void (^)(void))arg2;
- (void)operationThrottlerPerformOperation:(id <RCOperationThrottler>)arg1;
@end

