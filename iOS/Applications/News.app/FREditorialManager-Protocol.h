//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FREditorialTabBarItemManager;
@protocol FREditorialContentRefreshObserver;

@protocol FREditorialManager
@property(nonatomic) __weak FREditorialTabBarItemManager *editorialTabBarItemManager;
- (void)removeObserver:(id <FREditorialContentRefreshObserver>)arg1;
- (void)addObserver:(id <FREditorialContentRefreshObserver>)arg1;
- (void)refreshEditorialTabConfiguration;
- (void)prewarmWithCompletion:(void (^)(void))arg1;
- (void)loadEditorialTabConfigurationFromCacheWithCompletion:(void (^)(NSString *, NSString *, UIImage *, _Bool))arg1;
- (void)updateLastSeenDocumentVersion;
- (_Bool)isEditorialArticleIDAvailableFromCache;
@end
