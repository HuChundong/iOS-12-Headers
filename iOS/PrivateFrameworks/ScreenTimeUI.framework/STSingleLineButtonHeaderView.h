//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STSingleLineHeaderView.h>

@class UIButton;

@interface STSingleLineButtonHeaderView : STSingleLineHeaderView
{
    UIButton *_selectedButton;
    UIButton *_button1;
    UIButton *_button2;
}

@property(readonly, nonatomic) UIButton *button2; // @synthesize button2=_button2;
@property(readonly, nonatomic) UIButton *button1; // @synthesize button1=_button1;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setSpecifier:(id)arg1;
- (void)reloadFromSpecifier;
- (id)initWithSpecifier:(id)arg1 useContentLayoutGuide:(_Bool)arg2;

@end
