//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventTimeToLeaveHypothesis : PBCodable <NSCopying>
{
    double _earliestArrivalOffset;
    double _earliestDepartureOffset;
    double _latestArrivalOffset;
    double _latestDepartureOffset;
    int _arrival;
    int _departure;
    unsigned int _numberOfReroutes;
    int _ttlUiNotificationShown;
    struct {
        unsigned int earliestArrivalOffset:1;
        unsigned int earliestDepartureOffset:1;
        unsigned int latestArrivalOffset:1;
        unsigned int latestDepartureOffset:1;
        unsigned int arrival:1;
        unsigned int departure:1;
        unsigned int numberOfReroutes:1;
        unsigned int ttlUiNotificationShown:1;
    } _has;
}

@property(nonatomic) double latestArrivalOffset; // @synthesize latestArrivalOffset=_latestArrivalOffset;
@property(nonatomic) double earliestArrivalOffset; // @synthesize earliestArrivalOffset=_earliestArrivalOffset;
@property(nonatomic) double latestDepartureOffset; // @synthesize latestDepartureOffset=_latestDepartureOffset;
@property(nonatomic) double earliestDepartureOffset; // @synthesize earliestDepartureOffset=_earliestDepartureOffset;
@property(nonatomic) unsigned int numberOfReroutes; // @synthesize numberOfReroutes=_numberOfReroutes;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLatestArrivalOffset;
@property(nonatomic) _Bool hasEarliestArrivalOffset;
@property(nonatomic) _Bool hasLatestDepartureOffset;
@property(nonatomic) _Bool hasEarliestDepartureOffset;
- (int)StringAsTtlUiNotificationShown:(id)arg1;
- (id)ttlUiNotificationShownAsString:(int)arg1;
@property(nonatomic) _Bool hasTtlUiNotificationShown;
@property(nonatomic) int ttlUiNotificationShown; // @synthesize ttlUiNotificationShown=_ttlUiNotificationShown;
@property(nonatomic) _Bool hasNumberOfReroutes;
- (int)StringAsArrival:(id)arg1;
- (id)arrivalAsString:(int)arg1;
@property(nonatomic) _Bool hasArrival;
@property(nonatomic) int arrival; // @synthesize arrival=_arrival;
- (int)StringAsDeparture:(id)arg1;
- (id)departureAsString:(int)arg1;
@property(nonatomic) _Bool hasDeparture;
@property(nonatomic) int departure; // @synthesize departure=_departure;

@end

