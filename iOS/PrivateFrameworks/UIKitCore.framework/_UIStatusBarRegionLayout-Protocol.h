//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIView, _UIStatusBarRegion;

@protocol _UIStatusBarRegionLayout <NSObject>
@property(readonly, nonatomic) _Bool fitsAllItems;
@property(copy, nonatomic) NSArray *displayItems;
@property(nonatomic) __weak _UIStatusBarRegion *region;
- (void)invalidate;

@optional
@property(readonly, nonatomic) UIView *containerView;
- (_Bool)mayFitDisplayItems:(NSArray *)arg1;
@end
