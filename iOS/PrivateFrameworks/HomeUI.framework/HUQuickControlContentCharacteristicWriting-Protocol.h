//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HMCharacteristic, NSSet;
@protocol HUQuickControlContentCharacteristicWritingDelegate;

@protocol HUQuickControlContentCharacteristicWriting <NSObject>
@property(readonly, copy, nonatomic) NSSet *affectedCharacteristics;
@property(nonatomic) __weak id <HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate;
- (id)overrideValueForCharacteristic:(HMCharacteristic *)arg1;
@end
