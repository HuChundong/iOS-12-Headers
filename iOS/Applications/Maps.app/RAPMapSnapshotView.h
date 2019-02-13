//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MKMapSnapshotOptions, MKMapSnapshotter, NSLayoutConstraint, UIActivityIndicatorView, UIImageView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface RAPMapSnapshotView : UIView
{
    UIActivityIndicatorView *_spinner;
    UIImageView *_snapshotImageView;
    NSLayoutConstraint *_snapshotHeightConstraint;
    UIVisualEffectView *_blurView;
    UIImageView *_disclosureIndicatorImageView;
    UIView *_overlayView;
    _Bool _shouldUpdateMapSnapshot;
    MKMapSnapshotter *_runningSnapshotter;
    NSLayoutConstraint *_blurViewWidthConstraint;
    _Bool _showsPin;
    MKMapSnapshotOptions *_snapshotOptionsTemplate;
    double _mapHeight;
}

@property(nonatomic) double mapHeight; // @synthesize mapHeight=_mapHeight;
@property(nonatomic) _Bool showsPin; // @synthesize showsPin=_showsPin;
@property(copy, nonatomic) MKMapSnapshotOptions *snapshotOptionsTemplate; // @synthesize snapshotOptionsTemplate=_snapshotOptionsTemplate;
- (void).cxx_destruct;
- (void)_showDisclosureIndicator;
- (void)_updateSnapshotIfNeeded;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGRect)rectFromMKMapRect:(CDStruct_02837cd9)arg1;
- (void)setHidden:(_Bool)arg1;
@property(nonatomic) _Bool showsOverlaidDisclosureIndicator;
- (void)showOverlayView:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end
