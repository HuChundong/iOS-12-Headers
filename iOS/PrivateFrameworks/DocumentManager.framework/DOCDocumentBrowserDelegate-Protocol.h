//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocumentManager/NSObject-Protocol.h>

@class DOCBrowserViewController, DOCConcreteLocation, DOCItem, NSArray;

@protocol DOCDocumentBrowserDelegate <NSObject>
- (void)browserDidFinishGatheringItemsAndThumbnails:(DOCBrowserViewController *)arg1;
- (void)dismissButtonWasTappedInBrowser:(DOCBrowserViewController *)arg1;
- (void)locationsButtonWasTappedInBrowser:(DOCBrowserViewController *)arg1 sourceRect:(struct CGRect)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didUpdateCurrentLocationCanSelect:(_Bool)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didUpdateCurrentLocationIsWritable:(_Bool)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didUpdateImportSupportInCurrentLocation:(_Bool)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didUpdateNumberOfSelectableItems:(unsigned long long)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 isDisplayingEmptyCollection:(_Bool)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didResolveShownLocation:(DOCConcreteLocation *)arg2 previousLocation:(DOCConcreteLocation *)arg3;
- (void)browser:(DOCBrowserViewController *)arg1 wantsToShowLocation:(DOCConcreteLocation *)arg2 forceReplaceLocation:(_Bool)arg3;
- (void)browser:(DOCBrowserViewController *)arg1 didSelectItems:(NSArray *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didCommitPreviewOfDocument:(DOCItem *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didPickItem:(DOCItem *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 wantsToShowInfoForItem:(DOCItem *)arg2;
- (void)browserWantsToCreateNewFolder:(DOCBrowserViewController *)arg1 maxThumbnailSize:(struct CGSize)arg2;
- (void)browserWantsToCreateNewFile:(DOCBrowserViewController *)arg1;
@end
