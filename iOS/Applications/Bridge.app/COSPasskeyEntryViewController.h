//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class COSPinKeyView, NSString, NSTimer, UIActivityIndicatorView, UILabel, UITextField;

@interface COSPasskeyEntryViewController : UIViewController <UITextFieldDelegate>
{
    UILabel *_instructionLabel;
    COSPinKeyView *_pinKeyView;
    UIActivityIndicatorView *_activityView;
    UITextField *_passkeyField;
    NSTimer *_textChangedTimer;
}

@property(retain, nonatomic) NSTimer *textChangedTimer; // @synthesize textChangedTimer=_textChangedTimer;
@property(retain, nonatomic) UITextField *passkeyField; // @synthesize passkeyField=_passkeyField;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) COSPinKeyView *pinKeyView; // @synthesize pinKeyView=_pinKeyView;
@property(retain, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
- (void).cxx_destruct;
- (void)returnToPasskeyEntry;
- (void)enteredPasskey:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

