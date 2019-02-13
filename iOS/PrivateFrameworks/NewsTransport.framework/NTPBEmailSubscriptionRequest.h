//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying>
{
    long long _dsId;
    NSString *_languageCode;
    NSString *_userStorefrontId;
    struct {
        unsigned int dsId:1;
    } _has;
}

@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property(nonatomic) long long dsId; // @synthesize dsId=_dsId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(readonly, nonatomic) _Bool hasUserStorefrontId;
@property(nonatomic) _Bool hasDsId;

@end
