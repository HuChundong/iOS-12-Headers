//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class CARSession;

@protocol CARSessionObserving <NSObject>

@optional
- (void)sessionDidDisconnect:(CARSession *)arg1;
- (void)sessionDidConnect:(CARSession *)arg1;
- (void)cancelledConnectionAttemptOnTransport:(unsigned long long)arg1;
- (void)startedConnectionAttemptOnTransport:(unsigned long long)arg1;
@end
