//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, PXUpdater, UILabel;

@interface PXCMMTranscriptTextView : UIView
{
    PXUpdater *_updater;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    NSString *_primaryText;
    NSString *_secondaryText;
}

@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (void)_updateSecondaryLabel;
- (void)_updatePrimaryLabel;
- (struct CGSize)_performLayoutInSize:(struct CGSize)arg1 minimizingSize:(_Bool)arg2 updateSubviewFrames:(_Bool)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

