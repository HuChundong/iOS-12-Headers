//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RoutePickingCell.h"

@class NSLayoutConstraint, _MKUILabel;

__attribute__((visibility("hidden")))
@interface TransitRoutePickingNoMoreRoutesCell : RoutePickingCell
{
    _MKUILabel *_noMoreRoutesLabel;
    NSLayoutConstraint *_labelToTopConstraint;
}

- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSeparatorStyle:(long long)arg1;
- (void)_updateConstraintValues;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)_autolayoutConstraints;
- (void)_createSubviews;
- (id)init;

@end
