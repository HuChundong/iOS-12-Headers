//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSRemoteNotifierDelegate-Protocol.h>

@class NSArray, NSOperationQueue, NSString, NSUndoManager, VSAccount, VSKeychainEditingContext, VSRemoteNotifier;

@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate>
{
    _Bool _needsUpdateCachedFirstAccount;
    VSAccount *_cachedFirstAccount;
    VSKeychainEditingContext *_keychainEditingContext;
    NSOperationQueue *_keychainQueue;
    id _changeObserver;
    VSRemoteNotifier *_remoteNotifier;
}

+ (Class)accountClass;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(nonatomic) __weak id changeObserver; // @synthesize changeObserver=_changeObserver;
@property(retain, nonatomic) NSOperationQueue *keychainQueue; // @synthesize keychainQueue=_keychainQueue;
@property(retain, nonatomic) VSKeychainEditingContext *keychainEditingContext; // @synthesize keychainEditingContext=_keychainEditingContext;
@property _Bool needsUpdateCachedFirstAccount; // @synthesize needsUpdateCachedFirstAccount=_needsUpdateCachedFirstAccount;
@property(retain) VSAccount *cachedFirstAccount; // @synthesize cachedFirstAccount=_cachedFirstAccount;
- (void).cxx_destruct;
- (void)removeAccounts:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveAccounts:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_insertAccount:(id)arg1 inContext:(id)arg2;
- (void)fetchAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *accounts;
- (id)firstAccount;
- (_Bool)_updateCachedFirstAccount;
- (id)firstAccountIfLoaded;
- (_Bool)isFirstAccountLoaded;
@property(retain, nonatomic) NSUndoManager *undoManager;
- (id)_keychainItemsWithLimit:(unsigned long long)arg1;
- (id)_accountForKeychainItem:(id)arg1;
- (void)_sendRemoteNotification;
- (void)_sendLocalNotification;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
