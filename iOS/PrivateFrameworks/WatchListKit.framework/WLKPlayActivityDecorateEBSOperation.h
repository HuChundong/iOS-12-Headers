//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary, NSString;

@interface WLKPlayActivityDecorateEBSOperation : WLKNetworkRequestOperation
{
    NSString *_channelID;
    NSString *_externalContentID;
    NSDictionary *_responseDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(readonly, copy, nonatomic) NSString *externalContentID; // @synthesize externalContentID=_externalContentID;
@property(readonly, copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (void)didFinish;
- (id)responseProcessor;
- (id)initWithChannelID:(id)arg1 externalContentID:(id)arg2;

@end
