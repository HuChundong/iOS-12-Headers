//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, UIView;

@protocol PUMutableReviewScreenBarsModel
@property(nonatomic) struct CGPoint controlCenterAlignmentPoint;
@property(nonatomic) _Bool useVerticalControlLayout;
@property(nonatomic, getter=isTransitioningWithCamera) _Bool transitioningWithCamera;
@property(nonatomic) _Bool shouldPlaceScrubberInScrubberBar;
@property(retain, nonatomic) UIView *accessoryView;
@property(copy, nonatomic) NSDictionary *availableItemsByIdentifier;
- (void)setControlCenterAlignmentPoint:(struct CGPoint)arg1 forceLayout:(_Bool)arg2;
@end
