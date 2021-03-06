//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIImage, UIStackView;
@protocol VUIRoundButtonDelegate;

@interface VUIRoundButton : UIView
{
    UIImage *_buttonImage;
    NSArray *_textLabels;
    id <VUIRoundButtonDelegate> _delegate;
    UIButton *_button;
    UIStackView *_textLabelStackView;
}

@property(retain, nonatomic) UIStackView *textLabelStackView; // @synthesize textLabelStackView=_textLabelStackView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <VUIRoundButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *textLabels; // @synthesize textLabels=_textLabels;
@property(retain, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=_buttonImage;
- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)buttonReleased:(id)arg1;
- (void)buttonSelected:(id)arg1;
- (void)configureTextStackView;
- (void)_setUpViews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

