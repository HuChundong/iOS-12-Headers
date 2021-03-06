//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/NCMaterialsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NCNotificationListCellActionButton, NSString, UIStackView, _UIStatesFeedbackGenerator;

@interface NCNotificationListCellActionButtonsView : UIView <PLContentSizeCategoryAdjusting, NCMaterialsAdjusting>
{
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _highlightDefaultActionButton;
    _Bool _didPlayHaptic;
    double _stretchedWidth;
    double _defaultWidth;
    NSString *_backgroundGroupName;
    UIView *_clippingView;
    UIStackView *_buttonsStackView;
    NCNotificationListCellActionButton *_defaultActionButton;
    long long _materialRecipe;
    unsigned long long _backgroundMaterialOptions;
    unsigned long long _overlayMaterialOptions;
    _UIStatesFeedbackGenerator *_defaultActionFeedbackGenerator;
}

+ (id)_openButtonDescriptionForNotificationRequest:(id)arg1 cell:(id)arg2;
+ (id)_actionButtonDescriptionsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3;
@property(nonatomic) _Bool didPlayHaptic; // @synthesize didPlayHaptic=_didPlayHaptic;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *defaultActionFeedbackGenerator; // @synthesize defaultActionFeedbackGenerator=_defaultActionFeedbackGenerator;
@property(nonatomic) unsigned long long overlayMaterialOptions; // @synthesize overlayMaterialOptions=_overlayMaterialOptions;
@property(nonatomic) unsigned long long backgroundMaterialOptions; // @synthesize backgroundMaterialOptions=_backgroundMaterialOptions;
@property(nonatomic) long long materialRecipe; // @synthesize materialRecipe=_materialRecipe;
@property(retain, nonatomic) NCNotificationListCellActionButton *defaultActionButton; // @synthesize defaultActionButton=_defaultActionButton;
@property(retain, nonatomic) UIStackView *buttonsStackView; // @synthesize buttonsStackView=_buttonsStackView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(copy, nonatomic) NSString *backgroundGroupName; // @synthesize backgroundGroupName=_backgroundGroupName;
@property(readonly, nonatomic) double defaultWidth; // @synthesize defaultWidth=_defaultWidth;
@property(nonatomic) double stretchedWidth; // @synthesize stretchedWidth=_stretchedWidth;
@property(nonatomic) _Bool highlightDefaultActionButton; // @synthesize highlightDefaultActionButton=_highlightDefaultActionButton;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (void)adjustForChangeInMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)_actuateFeedbackForDefaultActionUnlockedIfNecessary;
- (void)_actuateFeedbackForDefaultActionLockedIfNecessary;
- (void)_configureDefaultActionFeedbackIfNecessary;
- (void)_performNonDefaultActionButtonsHideRevealAnimation:(CDUnknownBlockType)arg1;
- (void)_revealNonDefaultActionButtons;
- (void)_hideNonDefaultActionButtons;
- (void)_layoutButtonsStackView;
- (void)_layoutClippingView;
- (void)_configureButtonsStackViewIfNecessary;
- (void)_configureClippingViewIfNecessary;
- (void)_configureDefaultWidth;
- (double)_maxAllowedButtonWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool shouldPerformDefaultAction;
- (void)_configureActionButtonsForActionButtonDescriptions:(id)arg1 cell:(id)arg2;
- (void)configureOpenActionButtonForNotificationRequest:(id)arg1 cell:(id)arg2;
- (void)configureCellActionButtonsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

