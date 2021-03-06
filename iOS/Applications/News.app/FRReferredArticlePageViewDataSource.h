//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRArticlePageViewDataSource-Protocol.h"
#import "FRArticlePageViewDelegate-Protocol.h"
#import "FRArticleViewControllerDelegate-Protocol.h"
#import "FRDiscoverMoreInterstitialViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol FCHeadlineProviding, FRFeldsparContext, FRReferredArticlePageViewDataSourceDelegate, UIStateRestoring;

@interface FRReferredArticlePageViewDataSource : NSObject <FRArticleViewControllerDelegate, FRDiscoverMoreInterstitialViewControllerDelegate, FRArticlePageViewDataSource, FRArticlePageViewDelegate>
{
    _Bool _showMoreFromPublisherHeadlines;
    _Bool _showDiscoverMoreInterstitial;
    NSString *_stateRestoreKey;
    id <FRFeldsparContext> _feldsparContext;
    NSArray *_headlines;
    id <FCHeadlineProviding> _selectedHeadline;
    NSString *_previousArticleID;
    long long _articleOpenedFrom;
    NSDictionary *_referredHeadlineSectionByHeadlineID;
    NSString *_editorialTabName;
    id <FRReferredArticlePageViewDataSourceDelegate> _delegate;
}

+ (id)editorialBannerTitle;
+ (id)spotlightBannerTitle;
+ (id)trendingBannerTitle;
+ (id)forYouBannerTitle;
+ (id)topStoriesBannerTitle;
@property(nonatomic) __weak id <FRReferredArticlePageViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *editorialTabName; // @synthesize editorialTabName=_editorialTabName;
@property(retain, nonatomic) NSDictionary *referredHeadlineSectionByHeadlineID; // @synthesize referredHeadlineSectionByHeadlineID=_referredHeadlineSectionByHeadlineID;
@property(nonatomic) long long articleOpenedFrom; // @synthesize articleOpenedFrom=_articleOpenedFrom;
@property(copy, nonatomic) NSString *previousArticleID; // @synthesize previousArticleID=_previousArticleID;
@property(nonatomic) _Bool showDiscoverMoreInterstitial; // @synthesize showDiscoverMoreInterstitial=_showDiscoverMoreInterstitial;
@property(nonatomic) _Bool showMoreFromPublisherHeadlines; // @synthesize showMoreFromPublisherHeadlines=_showMoreFromPublisherHeadlines;
@property(retain, nonatomic) id <FCHeadlineProviding> selectedHeadline; // @synthesize selectedHeadline=_selectedHeadline;
@property(retain, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(readonly, copy, nonatomic) NSString *stateRestoreKey; // @synthesize stateRestoreKey=_stateRestoreKey;
- (void).cxx_destruct;
- (void)discoverMoreInterstitialViewControllerGoToForButtonTapped:(id)arg1;
- (id)headlineContextWithHeadline:(id)arg1 sectionTitle:(id)arg2 sectionThemeColor:(id)arg3;
- (id)discoverMoreHeadlineContextWithHeadline:(id)arg1;
- (id)articlePageViewController:(id)arg1 headlineAfterHeadlineContext:(id)arg2;
- (id)articlePageViewController:(id)arg1 headlineBeforeHeadlineContext:(id)arg2;
- (id)articlePageViewController:(id)arg1 viewControllerWithHeadlineContext:(id)arg2 preloading:(_Bool)arg3;
- (unsigned long long)numberOfArticlesForArticlePageViewController:(id)arg1;
- (void)articlePageViewController:(id)arg1 didFinishLoadingEndOfArticleSectionWithHeadline:(id)arg2 publisherHeadlines:(id)arg3 relatedHeadlines:(id)arg4;
- (id)filterSeletedHeadline:(id)arg1 headlines:(id)arg2;
- (void)_reIndexArticlePagesWithHeadlines:(id)arg1;
- (id)setReferredHeadlineSectionWithHeadlines:(id)arg1 bannerTitle:(id)arg2 sectionThemeColor:(id)arg3 showDiscoverMoreInterstitial:(_Bool)arg4;
- (id)discoverMoreHeadlineWithShowDiscoverMoreInterstitial:(_Bool)arg1 nextArticleAffordanceType:(long long)arg2 tappedNextArticleAffordanceFeedID:(id)arg3 withNextArticleAffordance:(_Bool)arg4;
- (void)handleFetchOperationResultWithHeadlines:(id)arg1 bannerTitle:(id)arg2 sectionThemeColor:(id)arg3 showDiscoverMoreInterstitial:(_Bool)arg4;
- (void)fetchEditorialPickHeadlinesWithshowDiscoverMoreInterstitial:(_Bool)arg1;
- (void)fetchTopStoriesHeadlinesWithshowDiscoverMoreInterstitial:(_Bool)arg1;
- (void)intialSetupWithHeadlines:(id)arg1 pivotHeadline:(id)arg2 sectionDataByArticleID:(id)arg3 articleOpenedFrom:(long long)arg4 notificationSenderChannelID:(id)arg5 showDiscoverMoreInterstitial:(_Bool)arg6;
- (void)prepareForCoordinatedRestore;
- (void)setStateRestoreKey:(id)arg1;
- (id)initWithHeadlines:(id)arg1 pivotHeadline:(id)arg2 sectionDataByArticleID:(id)arg3 articleOpenedFrom:(long long)arg4 notificationSenderChannelID:(id)arg5 feldsparContext:(id)arg6 showDiscoverMoreInterstitial:(_Bool)arg7 previousArticleID:(id)arg8 editorialTabName:(id)arg9 delegate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
@property(readonly) Class superclass;

@end

