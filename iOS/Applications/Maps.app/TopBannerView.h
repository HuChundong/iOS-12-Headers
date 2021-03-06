//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CardView.h"

@class NSArray, UIScrollView, UIStackView;

__attribute__((visibility("hidden")))
@interface TopBannerView : CardView
{
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)_updateItemViews;
- (void)layoutSubviews;
- (id)_initialConstraints;
- (void)_createSubviews;
- (void)_commonInit;
- (id)initAllowingBlurred:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

