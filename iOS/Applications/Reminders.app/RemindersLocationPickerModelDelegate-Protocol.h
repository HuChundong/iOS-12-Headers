//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, RemindersLocationPickerModel;

@protocol RemindersLocationPickerModelDelegate <NSObject>
- (void)locationPickerModel:(RemindersLocationPickerModel *)arg1 didEncounterError:(NSError *)arg2;
- (void)locationPickerModelDidChangeSelection:(RemindersLocationPickerModel *)arg1;
- (void)locationPickerModel:(RemindersLocationPickerModel *)arg1 didUpdateMeCardItem:(long long)arg2;
- (void)locationPickerModelDidUpdateCustomLocation:(RemindersLocationPickerModel *)arg1;
- (void)locationPickerModelDidUpdateCurrentLocation:(RemindersLocationPickerModel *)arg1;
@end

