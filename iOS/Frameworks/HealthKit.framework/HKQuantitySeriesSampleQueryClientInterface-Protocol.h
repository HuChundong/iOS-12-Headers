//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class HKCodableQuantitySeries, NSUUID;

@protocol HKQuantitySeriesSampleQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverQuantitySeries:(HKCodableQuantitySeries *)arg1 seriesAnchor:(long long)arg2 isFinal:(_Bool)arg3 query:(NSUUID *)arg4;
@end
