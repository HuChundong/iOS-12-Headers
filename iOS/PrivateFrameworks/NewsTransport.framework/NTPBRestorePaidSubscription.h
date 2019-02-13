//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBRestorePaidSubscription : PBCodable <NSCopying>
{
    NSMutableArray *_restoredPaidSubscriptionChannelIds;
}

+ (Class)restoredPaidSubscriptionChannelIdsType;
@property(retain, nonatomic) NSMutableArray *restoredPaidSubscriptionChannelIds; // @synthesize restoredPaidSubscriptionChannelIds=_restoredPaidSubscriptionChannelIds;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;
- (void)addRestoredPaidSubscriptionChannelIds:(id)arg1;
- (void)clearRestoredPaidSubscriptionChannelIds;

@end
