//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SVSUserUtteranceView;

@interface SVSUserUtteranceContainerView : UIView
{
    _Bool _showEditingView;
    SVSUserUtteranceView *_displayView;
    UIView *_tableView;
}

@property(nonatomic) __weak UIView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak SVSUserUtteranceView *displayView; // @synthesize displayView=_displayView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)baselineOffsetFromBottom;
- (double)firstLineBaselineOffsetFromTop;
- (void)animateToDisplayWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateToEditWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isFirstResponder;

@end
