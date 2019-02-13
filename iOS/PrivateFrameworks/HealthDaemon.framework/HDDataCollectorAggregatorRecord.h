//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDataAggregator, HDDataCollectorConfiguration, NSString;
@protocol HDCollectedSensorDatum;

@interface HDDataCollectorAggregatorRecord : NSObject
{
    _Bool _hasSetLastSensorDatum;
    HDDataAggregator *_aggregator;
    NSString *_identifier;
    HDDataCollectorConfiguration *_configuration;
    id <HDCollectedSensorDatum> _lastSensorDatum;
}

@property(readonly, nonatomic) _Bool hasSetLastSensorDatum; // @synthesize hasSetLastSensorDatum=_hasSetLastSensorDatum;
@property(copy, nonatomic) id <HDCollectedSensorDatum> lastSensorDatum; // @synthesize lastSensorDatum=_lastSensorDatum;
@property(retain, nonatomic) HDDataCollectorConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) HDDataAggregator *aggregator; // @synthesize aggregator=_aggregator;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAggregator:(id)arg1 identifier:(id)arg2;

@end
