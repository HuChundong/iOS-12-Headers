//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsThemeView.h"

@class MapsThemeButton, UIScrollView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface RelatedSearchSuggestionView : MapsThemeView
{
    _Bool _showCloseButton;
    UIVisualEffectView *_blurView;
    UIScrollView *_scrollView;
    MapsThemeButton *_closeButton;
}

@property(nonatomic) __weak MapsThemeButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)setLayoutStyle:(unsigned long long)arg1;
- (void)setAlpha:(double)arg1 animated:(_Bool)arg2;
- (void)setAlpha:(double)arg1;
- (void)_setCornerRadiusWithMaskedCorners:(unsigned long long)arg1 maskImage:(id)arg2;

@end
