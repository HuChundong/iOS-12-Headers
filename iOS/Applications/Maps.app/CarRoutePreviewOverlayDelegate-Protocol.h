//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CarRoutePreviewOverlaySign;

@protocol CarRoutePreviewOverlayDelegate <NSObject>
- (void)routePreviewSign:(CarRoutePreviewOverlaySign *)arg1 isShowingAlternates:(_Bool)arg2;
- (void)routePreviewSign:(CarRoutePreviewOverlaySign *)arg1 selectedAlternateRouteAtIndex:(unsigned long long)arg2;
- (void)routePreviewSignSelectedStart:(CarRoutePreviewOverlaySign *)arg1;
- (void)routePreviewSignSelectedPrevious:(CarRoutePreviewOverlaySign *)arg1;
- (void)routePreviewSignSelectedNext:(CarRoutePreviewOverlaySign *)arg1;

@optional
- (void)routePreviewSignSelectedDestinationHandoff:(CarRoutePreviewOverlaySign *)arg1;
@end
