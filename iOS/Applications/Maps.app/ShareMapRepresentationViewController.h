//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MKMapView;
@protocol ShareItemSource;

__attribute__((visibility("hidden")))
@interface ShareMapRepresentationViewController : UIViewController
{
    MKMapView *_mapView;
    id <ShareItemSource> _shareItem;
}

@property(readonly, nonatomic) id <ShareItemSource> shareItem; // @synthesize shareItem=_shareItem;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)_updateMapRegion;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithShareItem:(id)arg1;

@end
