//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUI/TPNumberPad.h>

@class UIButton;
@protocol TPSimpleNumberPadDelegate;

@interface TPSimpleNumberPad : TPNumberPad
{
    UIButton *_deleteButton;
    _Bool _showsDeleteButton;
    id <TPSimpleNumberPadDelegate> _delegate;
}

+ (id)_numberPadCharacters;
@property(nonatomic) _Bool showsDeleteButton; // @synthesize showsDeleteButton=_showsDeleteButton;
@property id <TPSimpleNumberPadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setNumberButtonsEnabled:(_Bool)arg1;
- (void)_updateDeleteButton;
- (void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2;
- (void)buttonUp:(id)arg1;
- (Class)numberPadButtonClass;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithButtons:(id)arg1;

@end
