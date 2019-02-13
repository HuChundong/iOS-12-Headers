//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount;
@protocol OS_dispatch_queue;

@interface AccountStore : NSObject
{
    ACAccount *_account;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ACAccount *_activeAccount;
}

+ (_Bool)_shouldNotifyChangeFromExistingAccount:(id)arg1 toCurrentAccount:(id)arg2;
+ (void)_postAccountDidUpdateWithAccountStore:(id)arg1;
+ (void)_postAccountDidChangeWithAccountStore:(id)arg1;
+ (id)activeAccount;
+ (id)sharedInstance;
@property(readonly) ACAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
- (void).cxx_destruct;
- (void)handleAccountStoreDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
