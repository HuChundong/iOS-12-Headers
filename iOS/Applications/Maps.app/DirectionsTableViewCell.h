//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsThemeTableViewCell.h"

@class MapsTheme, NSLayoutConstraint, RouteStepLabelListView, SimpleSignView, UILayoutGuide, UIView;

__attribute__((visibility("hidden")))
@interface DirectionsTableViewCell : MapsThemeTableViewCell
{
    SimpleSignView *_signView;
    RouteStepLabelListView *_labelListView;
    _Bool _alignLeftIfNoManeuverSign;
    _Bool _isDimmedStep;
    NSLayoutConstraint *_trailingGuideWidth;
    NSLayoutConstraint *_trailingGuideToContentViewConstraint;
    UILayoutGuide *_trailingViewGuide;
    _Bool _isNightMode;
    _Bool _isLightContent;
    _Bool _isSelectedRow;
    _Bool _alignSeparatorWithLeadingText;
    MapsTheme *_preferredMapsTheme;
    UIView *_trailingView;
}

+ (id)backgroundColorForIndex:(long long)arg1;
+ (double)directionsTableCellSignLeftMarginWidth;
+ (double)directionsTableCellSignHeight;
+ (double)directionsTableCellSignWidth;
+ (double)directionsTableCellRightMarginWidth;
+ (double)directionsTableCellLeftMarginWidth;
+ (double)directionsTableViewStartEndCellHeight;
+ (double)directionsTableViewCellHeight;
+ (CDStruct_092aca68)arrowMetrics;
+ (double)heightForWidth:(double)arg1 route:(id)arg2 step:(id)arg3;
+ (Class)_labelListViewClassForRoute:(id)arg1 step:(id)arg2;
+ (double)_textWidthForWidth:(double)arg1 withManeuver:(_Bool)arg2;
+ (id)reuseIdentifier;
+ (id)currentStepColor;
@property(retain, nonatomic) UIView *trailingView; // @synthesize trailingView=_trailingView;
@property(nonatomic) _Bool alignSeparatorWithLeadingText; // @synthesize alignSeparatorWithLeadingText=_alignSeparatorWithLeadingText;
@property(nonatomic) _Bool isSelectedRow; // @synthesize isSelectedRow=_isSelectedRow;
@property(nonatomic) _Bool isLightContent; // @synthesize isLightContent=_isLightContent;
@property(nonatomic) _Bool isNightMode; // @synthesize isNightMode=_isNightMode;
- (void).cxx_destruct;
- (struct CGRect)_separatorFrame;
- (void)setBackgroundView:(id)arg1;
- (id)_minorLabelColor;
- (id)_majorLabelColor;
@property(retain, nonatomic) MapsTheme *preferredMapsTheme; // @synthesize preferredMapsTheme=_preferredMapsTheme;
- (void)_updateStyleValuesFromTheme;
- (void)setIsDimmedStep:(_Bool)arg1;
- (id)_signViewStyle;
- (id)signView;
- (void)_updateSignViewForStep:(id)arg1 shieldImage:(id)arg2 route:(id)arg3;
- (id)_shieldImageFromStep:(id)arg1 route:(id)arg2 shieldSize:(long long)arg3;
- (void)setAccessoryType:(long long)arg1;
- (double)_trailingGuideToContentViewDistance;
- (void)setRoute:(id)arg1 step:(id)arg2 stepIndex:(unsigned long long)arg3 alignToLeftEdgeIfNoManeuverSign:(_Bool)arg4 size:(long long)arg5;
- (void)layoutSubviews;

@end
