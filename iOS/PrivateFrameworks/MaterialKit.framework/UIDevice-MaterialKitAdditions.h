//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDevice.h>

@interface UIDevice (MaterialKitAdditions)
+ (id)mt_lowQualityDevicesForBaseLuminanceOverlay;
+ (id)mt_mediumQualityDevicesForDynamicBlurRadius;
+ (id)mt_lowQualityDevicesForDynamicBlurRadius;
- (id)mt_currentProduct;
- (long long)mt_baseLuminanceOverlayGraphicsQuality;
- (long long)mt_dynamicBlurRadiusGraphicsQuality;
@end
