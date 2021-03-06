//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPInstrumentableTarget-Protocol.h"

@class NSString, RAPQuestion, VKLabelMarker;
@protocol RAPMapStateProtocol, RAPMenuItem;

@protocol RAPLabelMarkerSelectionProtocol <RAPInstrumentableTarget>
@property(readonly, nonatomic) CDStruct_02837cd9 placePickingMapRect;
@property(readonly, nonatomic) id <RAPMapStateProtocol> placePickingMapState;
@property(readonly, nonatomic) int featureType;
@property(readonly, nonatomic) RAPQuestion<RAPMenuItem> *followUpQuestion;
@property(readonly, nonatomic) unsigned long long placePickingPreferredMapType;
@property(readonly, nonatomic) NSString *localizedPlacePickingPrompt;
- (void)setSelectedLabelMarker:(VKLabelMarker *)arg1 withMapState:(id <RAPMapStateProtocol>)arg2;
@end

