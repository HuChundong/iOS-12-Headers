//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRNonBatchedAdRequestContent.h"

@class NSString;

@interface FRAdRequestArticleRelatedContext : FRNonBatchedAdRequestContent
{
    _Bool _referralUsesPublisherInventory;
    long long _referralLocation;
    NSString *_campaignID;
}

@property(copy, nonatomic) NSString *campaignID; // @synthesize campaignID=_campaignID;
@property(nonatomic) _Bool referralUsesPublisherInventory; // @synthesize referralUsesPublisherInventory=_referralUsesPublisherInventory;
@property(nonatomic) long long referralLocation; // @synthesize referralLocation=_referralLocation;
- (void).cxx_destruct;

@end

