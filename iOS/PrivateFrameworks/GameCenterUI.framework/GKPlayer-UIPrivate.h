//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKPlayer.h>

@interface GKPlayer (UIPrivate)
+ (void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2;
+ (long long)sizeForPhotoSize:(long long)arg1;
- (id)placeholderImageForType:(unsigned char)arg1;
- (id)cacheKeyForType:(unsigned char)arg1;
- (id)imageSourceForPlaceholders;
- (id)placeholderImageSelected;
- (id)placeholderImage;
- (id)photoURLForSize:(long long)arg1;
- (id)imageURLForPhotoSizeList;
@end
