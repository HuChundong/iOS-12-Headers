//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContaineeViewController.h"

#import "HeaderViewDelegate-Protocol.h"

@class ContainerHeaderView, NSString, TrafficFeatureTitleView, TrafficIncidentsViewController, VKTrafficIncidentFeature;

__attribute__((visibility("hidden")))
@interface TrafficIncidentContaineeViewController : ContaineeViewController <HeaderViewDelegate>
{
    CDUnknownBlockType _dismissHandler;
    TrafficIncidentsViewController *_incidentsViewController;
    ContainerHeaderView *_headerView;
    TrafficFeatureTitleView *_titleView;
}

@property(retain, nonatomic) TrafficFeatureTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) ContainerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) TrafficIncidentsViewController *incidentsViewController; // @synthesize incidentsViewController=_incidentsViewController;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void).cxx_destruct;
- (void)headerViewTapped:(id)arg1;
- (void)headerViewButtonTapped:(id)arg1;
- (_Bool)updateConstraintsForLayout:(unsigned long long)arg1;
- (double)heightForLayout:(unsigned long long)arg1;
- (id)contentView;
- (void)applyAlphaToContent:(double)arg1;
- (void)viewDidLoad;
- (void)_updateHeaderView;
@property(nonatomic) _Bool visualEffectsDisabled;
@property(retain, nonatomic) VKTrafficIncidentFeature *incident;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
