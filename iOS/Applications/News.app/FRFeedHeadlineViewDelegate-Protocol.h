//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRFeedHeadlineView, NSArray, UIWindow;

@protocol FRFeedHeadlineViewDelegate <NSObject>
- (_Bool)shouldAttemptToRenderImageSynchronouslyForHeadlineView:(FRFeedHeadlineView *)arg1;
- (_Bool)shouldAnimateImageLoadForHeadlineView:(FRFeedHeadlineView *)arg1;

@optional
- (NSArray *)accessibilityCustomActionsForHeadlineView:(FRFeedHeadlineView *)arg1;
- (void)feedHeadlineView:(FRFeedHeadlineView *)arg1 shouldDisplayShareSheet:(_Bool)arg2;
- (void)feedHeadlineView:(FRFeedHeadlineView *)arg1 movedToWindow:(UIWindow *)arg2;
@end

