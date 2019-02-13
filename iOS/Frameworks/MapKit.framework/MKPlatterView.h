//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, _MKUILabel;

@interface MKPlatterView : UIView
{
    _MKUILabel *_glyphLabel;
    UIView *_platterView;
    _Bool _highlighted;
    NSString *_glyph;
    UIFont *_glyphFont;
    UIColor *_glyphColor;
}

@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(retain, nonatomic) UIFont *glyphFont; // @synthesize glyphFont=_glyphFont;
@property(retain, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)infoCardThemeChanged:(id)arg1;
- (void)updateGlyph;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
