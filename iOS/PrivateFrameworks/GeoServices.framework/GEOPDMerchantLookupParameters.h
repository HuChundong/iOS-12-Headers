//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    long long _industryCode;
    double _transactionLocationAge;
    double _transactionTimestamp;
    NSString *_industryCategory;
    NSString *_merchantCode;
    NSString *_paymentNetwork;
    NSString *_rawMerchantCode;
    GEOLocation *_transactionLocation;
    struct {
        unsigned int industryCode:1;
        unsigned int transactionLocationAge:1;
        unsigned int transactionTimestamp:1;
    } _has;
}

@property(nonatomic) long long industryCode; // @synthesize industryCode=_industryCode;
@property(retain, nonatomic) NSString *industryCategory; // @synthesize industryCategory=_industryCategory;
@property(retain, nonatomic) NSString *rawMerchantCode; // @synthesize rawMerchantCode=_rawMerchantCode;
@property(nonatomic) double transactionLocationAge; // @synthesize transactionLocationAge=_transactionLocationAge;
@property(retain, nonatomic) GEOLocation *transactionLocation; // @synthesize transactionLocation=_transactionLocation;
@property(nonatomic) double transactionTimestamp; // @synthesize transactionTimestamp=_transactionTimestamp;
@property(retain, nonatomic) NSString *merchantCode; // @synthesize merchantCode=_merchantCode;
@property(retain, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIndustryCode;
@property(readonly, nonatomic) _Bool hasIndustryCategory;
@property(readonly, nonatomic) _Bool hasRawMerchantCode;
@property(nonatomic) _Bool hasTransactionLocationAge;
@property(readonly, nonatomic) _Bool hasTransactionLocation;
@property(nonatomic) _Bool hasTransactionTimestamp;
@property(readonly, nonatomic) _Bool hasMerchantCode;
@property(readonly, nonatomic) _Bool hasPaymentNetwork;

@end
