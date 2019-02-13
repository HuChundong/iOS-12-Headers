//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/AAUIDeviceToDeviceEncryptionHelperDelegate-Protocol.h>

@class AAUIDeviceToDeviceEncryptionHelper, NSString;

@interface CKCloudKitAccountRepairController : NSObject <AAUIDeviceToDeviceEncryptionHelperDelegate>
{
    AAUIDeviceToDeviceEncryptionHelper *_encryptionHelper;
}

@property(retain, nonatomic) AAUIDeviceToDeviceEncryptionHelper *encryptionHelper; // @synthesize encryptionHelper=_encryptionHelper;
- (void).cxx_destruct;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(CDUnknownBlockType)arg2;
- (void)beginRepairWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)authenticationContext;
- (Class)authenticationContextClass;
- (id)primaryAppleAccount;
- (id)AKSecurityUpgradeContextMessages;
- (id)accountStore;
- (id)AAUIDeviceToDeviceEncryptionHelperWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
