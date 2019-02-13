//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutYAxisAnchor, UIImageView, UILabel;

@interface STUsageTotalDeltaView : UIView
{
    _Bool _isVibrancyEnabled;
    NSLayoutYAxisAnchor *_labelLastBaselineAnchor;
    UIImageView *_imageView;
    UILabel *_label;
}

@property(readonly, nonatomic) _Bool isVibrancyEnabled; // @synthesize isVibrancyEnabled=_isVibrancyEnabled;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, copy, nonatomic) NSLayoutYAxisAnchor *labelLastBaselineAnchor; // @synthesize labelLastBaselineAnchor=_labelLastBaselineAnchor;
- (void).cxx_destruct;
- (void)setDeltaFromAverage:(double)arg1 reportType:(unsigned long long)arg2;
- (id)lastBaselineAnchor;
- (id)init;
- (id)initWithVibrancyEnabled:(_Bool)arg1;

@end
