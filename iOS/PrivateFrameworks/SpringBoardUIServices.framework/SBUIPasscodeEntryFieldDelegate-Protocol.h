//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class NSString, SBUIPasscodeEntryField;

@protocol SBUIPasscodeEntryFieldDelegate <NSObject>

@optional
- (void)passcodeEntryFieldDidResignFirstResponder:(SBUIPasscodeEntryField *)arg1;
- (_Bool)passcodeEntryFieldShouldShowSystemKeyboard:(SBUIPasscodeEntryField *)arg1;
- (void)passcodeEntryFieldTextDidChange:(SBUIPasscodeEntryField *)arg1;
- (_Bool)passcodeEntryField:(SBUIPasscodeEntryField *)arg1 shouldInsertText:(NSString *)arg2;
- (void)passcodeEntryFieldDidCancelEntry:(SBUIPasscodeEntryField *)arg1;
- (void)passcodeEntryFieldDidAcceptEntry:(SBUIPasscodeEntryField *)arg1;
@end
