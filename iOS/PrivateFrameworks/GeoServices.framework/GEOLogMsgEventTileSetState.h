//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventTileSetState : PBCodable <NSCopying>
{
    double _durationInOldState;
    double _newCoverage;
    double _oldCoverage;
    int _tileSetStateType;
    struct {
        unsigned int durationInOldState:1;
        unsigned int newCoverage:1;
        unsigned int oldCoverage:1;
        unsigned int tileSetStateType:1;
    } _has;
}

@property(nonatomic) double newCoverage; // @synthesize newCoverage=_newCoverage;
@property(nonatomic) double oldCoverage; // @synthesize oldCoverage=_oldCoverage;
@property(nonatomic) double durationInOldState; // @synthesize durationInOldState=_durationInOldState;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNewCoverage;
@property(nonatomic) _Bool hasOldCoverage;
- (int)StringAsTileSetStateType:(id)arg1;
- (id)tileSetStateTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTileSetStateType;
@property(nonatomic) int tileSetStateType; // @synthesize tileSetStateType=_tileSetStateType;
@property(nonatomic) _Bool hasDurationInOldState;

@end

