//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUControllableCollectionViewLayoutOverrideAttributes, NSIndexPath;

@protocol HUControllableCollectionViewLayout <NSObject>
- (void)clearAllOverrideAttributes;
- (void)clearOverrideAttributesForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)applyOverrideAttributes:(HUControllableCollectionViewLayoutOverrideAttributes *)arg1 toItemAtIndexPath:(NSIndexPath *)arg2;
@end

