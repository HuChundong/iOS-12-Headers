//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface RidesAllowRouteSharingView : UIView
{
    CDUnknownBlockType _performAllowSharingCommand;
    UILabel *_detailLabel;
    UIButton *_allowActionButton;
}

@property(retain, nonatomic) UIButton *allowActionButton; // @synthesize allowActionButton=_allowActionButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(copy, nonatomic) CDUnknownBlockType performAllowSharingCommand; // @synthesize performAllowSharingCommand=_performAllowSharingCommand;
- (void).cxx_destruct;
- (void)allowRouteSharing:(id)arg1;
@property(readonly, nonatomic) UIView *findAppsCommandPresentationSource;
- (void)_setupConstraints;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

