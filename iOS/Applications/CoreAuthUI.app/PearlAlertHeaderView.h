//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LAUIPearlGlyphView, NSString, UILabel;

@interface PearlAlertHeaderView : UIView
{
    UILabel *_messageLabel;
    UILabel *_titleLabel;
    LAUIPearlGlyphView *_glyphView;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy) NSString *title;
- (void)_shakeLayer:(id)arg1;
- (void)shakeTitle;
- (void)shakeGlyph;
@property(copy) NSString *message;
@property __weak LAUIPearlGlyphView *glyph;

@end

