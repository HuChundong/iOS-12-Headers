//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PDFKit/NSObject-Protocol.h>

@class NSIndexPath, NSObject, PDFPage;
@protocol PDFKitPlatformThumbnailItem;

@protocol PDFCollectionViewDelegate <NSObject>
- (_Bool)allowsDragging;
- (void)didEndDisplayingItem:(NSObject<PDFKitPlatformThumbnailItem> *)arg1;
- (PDFPage *)scrubbingAtFraction:(double)arg1 betweenIndexPath:(NSIndexPath *)arg2 andIndexPath:(NSIndexPath *)arg3 outDiscreteFraction:(double *)arg4;
- (void)didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)selectionChanged;
@end

