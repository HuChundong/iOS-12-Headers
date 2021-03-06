//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIButton, UILabel;
@protocol SKUIMessageBannerDelegate;

@interface SKUIMessageBanner : UIView
{
    id <SKUIMessageBannerDelegate> _delegate;
    UILabel *_label;
    UIButton *_button;
    UIView *_borderView;
    UIButton *_clearButton;
    NSAttributedString *_attributedMessage;
}

@property(retain, nonatomic) NSAttributedString *attributedMessage; // @synthesize attributedMessage=_attributedMessage;
@property(nonatomic) __weak id <SKUIMessageBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_clearButtonAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)value;
@property(retain, nonatomic) NSString *message;
@property(nonatomic) _Bool showsClearButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

