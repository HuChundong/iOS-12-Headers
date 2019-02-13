//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUILibraryStackViewController.h>

#import <VideosUI/UICollectionViewDataSource-Protocol.h>
#import <VideosUI/VUIMediaEntitiesFetchControllerDelegate-Protocol.h>
#import <VideosUI/VUIMediaEntityDownloadViewControllerDelegate-Protocol.h>
#import <VideosUI/VUIProductLockupViewDelegate-Protocol.h>
#import <VideosUI/VUIRoundButtonDelegate-Protocol.h>

@class NSString, VUILibraryProductInfoView, VUIMediaEntitiesFetchController, VUIMediaEntityDownloadViewController, VUIMediaItem, VUIMetricsController, VUIProductLockupView;

__attribute__((visibility("hidden")))
@interface VUILibraryProductViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUIMediaEntityDownloadViewControllerDelegate, VUIMediaEntitiesFetchControllerDelegate, VUIProductLockupViewDelegate, VUIRoundButtonDelegate>
{
    VUIMediaItem *_mediaItem;
    VUIMediaEntitiesFetchController *_fetchController;
    VUIProductLockupView *_productLockupView;
    VUILibraryProductInfoView *_productInfoView;
    VUIMediaEntityDownloadViewController *_downloadViewController;
    VUIMetricsController *_metricsController;
}

@property(retain, nonatomic) VUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(retain, nonatomic) VUIMediaEntityDownloadViewController *downloadViewController; // @synthesize downloadViewController=_downloadViewController;
- (void).cxx_destruct;
- (id)_productSectionForHeader:(id)arg1 data:(id)arg2 group:(id)arg3 maxItemCount:(unsigned long long)arg4;
- (id)_productInfoViewWithMediaItem:(id)arg1;
- (id)_productLockupViewWithMediaItem:(id)arg1;
- (void)downloadViewController:(id)arg1 didRemoveDownloadForAssetController:(id)arg2;
- (void)didSelectButton:(id)arg1;
- (void)contentDescriptionExpanded;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)start;
- (void)configureWithCollectionView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithMediaLibrary:(id)arg1;
- (id)initWithMediaItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
