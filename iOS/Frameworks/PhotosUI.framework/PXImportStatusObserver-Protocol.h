//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PXAssetReference;
@protocol PXImportStatusManager;

@protocol PXImportStatusObserver <NSObject>
- (void)importStatusManager:(id <PXImportStatusManager>)arg1 didChangeStatusForAssetReference:(PXAssetReference *)arg2;
@end
