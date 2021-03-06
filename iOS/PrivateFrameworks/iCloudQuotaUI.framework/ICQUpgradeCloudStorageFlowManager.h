//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCloudQuotaUI/ICQUpgradeFlowManager.h>

#import <iCloudQuotaUI/PSCloudStorageOffersManagerDelegate-Protocol.h>

@class NSDictionary, NSString, NSURLSession, PSCloudStorageOffersManager;

@interface ICQUpgradeCloudStorageFlowManager : ICQUpgradeFlowManager <PSCloudStorageOffersManagerDelegate>
{
    NSURLSession *_buyProductSession;
    NSString *_storagePurchaseButtonId;
    PSCloudStorageOffersManager *_storageOffersManager;
    CDUnknownBlockType _purchaseCompletionHandler;
}

+ (_Bool)_canDoTokenPurchaseWithOffer:(id)arg1;
+ (_Bool)shouldSubclassShowForOffer:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType purchaseCompletionHandler; // @synthesize purchaseCompletionHandler=_purchaseCompletionHandler;
@property(retain, nonatomic) PSCloudStorageOffersManager *storageOffersManager; // @synthesize storageOffersManager=_storageOffersManager;
@property(retain, nonatomic) NSString *storagePurchaseButtonId; // @synthesize storagePurchaseButtonId=_storagePurchaseButtonId;
- (void).cxx_destruct;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (id)secureTokenMissingError;
- (void)_performPurchase;
- (void)_performPurchaseUsingTouchID;
- (void)_performPurchaseUsingSettingsUI;
- (void)_adoptRemoteUIWithPurchaseToken:(id)arg1 buyParameters:(id)arg2 requestHeaders:(id)arg3;
- (void)_buyProductShouldUseToken:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_storageContextHeaderDictionary;
- (id)_storageContextJSONString;
- (id)_dummyRequestWithAccount:(id)arg1 token:(id)arg2;
- (id)_buyProductQueryDictionary;
- (id)_buyProductQueryKeySet;
@property(readonly, nonatomic) NSDictionary *storagePurchaseKeybag;
- (void)_performPageButtonActionWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initSubclassWithOffer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

