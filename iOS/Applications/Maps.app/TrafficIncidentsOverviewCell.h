//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

@class NSLayoutConstraint, TrafficIncidentsDateFormatter, UIView, VKTrafficIncidentFeature, _MKUILabel;

__attribute__((visibility("hidden")))
@interface TrafficIncidentsOverviewCell : MKTableViewCell
{
    UIView *_centeringView;
    NSLayoutConstraint *_titleLabelBaselineToTopConstraint;
    NSLayoutConstraint *_locationLabelBaselineToTitleLabelBaselineConstraint;
    NSLayoutConstraint *_startLabelBaselineToTitleLabelBaselineConstraint;
    NSLayoutConstraint *_startLabelBaselineToLocationLabelBaselineConstraint;
    NSLayoutConstraint *_bottomToStartLabelBaselineConstraint;
    NSLayoutConstraint *_endLabelBaselineToStartLabelBaselineConstraint;
    NSLayoutConstraint *_bottomToEndLabelBaselineConstraint;
    _Bool _isDimmed;
    VKTrafficIncidentFeature *_incident;
    _MKUILabel *_titleLabel;
    _MKUILabel *_locationLabel;
    _MKUILabel *_startLabel;
    _MKUILabel *_endLabel;
    TrafficIncidentsDateFormatter *_formatter;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) TrafficIncidentsDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) _MKUILabel *endLabel; // @synthesize endLabel=_endLabel;
@property(retain, nonatomic) _MKUILabel *startLabel; // @synthesize startLabel=_startLabel;
@property(retain, nonatomic) _MKUILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) _MKUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isDimmed; // @synthesize isDimmed=_isDimmed;
@property(retain, nonatomic) VKTrafficIncidentFeature *incident; // @synthesize incident=_incident;
- (void).cxx_destruct;
- (void)updateTheme;
- (void)prepareForReuse;
- (void)_updateLabels;
- (void)_updateStyleValuesFromTheme;
- (void)_updateFonts;
- (void)_updateConstraintValues;
- (id)_autolayoutConstraints;
- (void)_createSubviews;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

