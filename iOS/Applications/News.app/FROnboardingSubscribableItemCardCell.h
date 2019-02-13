//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FROnboardingSubscribableItem, FRSubscriptionButton, UIImage, UIImageView;
@protocol FROnboardingSubscribableItemCardCellAccessibilityInfoProvider;

@interface FROnboardingSubscribableItemCardCell : UIView
{
    _Bool _selected;
    FROnboardingSubscribableItem *_item;
    UIImage *_cellImage;
    id <FROnboardingSubscribableItemCardCellAccessibilityInfoProvider> _accessibilityInfoProvider;
    UIView *_imageContainer;
    UIImageView *_selectedImageContainer;
    FRSubscriptionButton *_subscriptionButton;
    double _ambientMotionOffset;
}

@property(nonatomic) double ambientMotionOffset; // @synthesize ambientMotionOffset=_ambientMotionOffset;
@property(retain, nonatomic) FRSubscriptionButton *subscriptionButton; // @synthesize subscriptionButton=_subscriptionButton;
@property(retain, nonatomic) UIImageView *selectedImageContainer; // @synthesize selectedImageContainer=_selectedImageContainer;
@property(retain, nonatomic) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <FROnboardingSubscribableItemCardCellAccessibilityInfoProvider> accessibilityInfoProvider; // @synthesize accessibilityInfoProvider=_accessibilityInfoProvider;
@property(retain, nonatomic) UIImage *cellImage; // @synthesize cellImage=_cellImage;
@property(retain, nonatomic) FROnboardingSubscribableItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)accessibilityIgnoresInvertColors;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityElementHelp;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (void)showSelectedSubscriptionState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
