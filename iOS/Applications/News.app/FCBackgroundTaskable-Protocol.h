//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FCBackgroundTaskable <NSObject>
- (void)fc_setMinimumBackgroundFetchInterval:(double)arg1;
- (void)fc_endBackgroundTask:(unsigned long long)arg1;
- (unsigned long long)fc_beginBackgroundTaskWithName:(NSString *)arg1 expirationHandler:(void (^)(void))arg2;
@end
