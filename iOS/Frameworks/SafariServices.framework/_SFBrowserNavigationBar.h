//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFNavigationBar.h>

@class _SFBrowserToolbar;

__attribute__((visibility("hidden")))
@interface _SFBrowserNavigationBar : _SFNavigationBar
{
}

+ (long long)_metricsCategory;
@property(readonly, nonatomic) _SFBrowserToolbar *toolbar;
- (id)newTextField;
- (double)placeholderHorizontalInset;
- (id)toolbarPlacedOnTop;
- (void)tintColorDidChange;
- (void)updateToolbarTintColor;

@end
