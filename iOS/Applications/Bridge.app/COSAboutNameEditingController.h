//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface COSAboutNameEditingController : PSListController
{
    PSSpecifier *_textSpecifier;
}

@property(retain, nonatomic) PSSpecifier *textSpecifier; // @synthesize textSpecifier=_textSpecifier;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)canBeShownFromSuspendedState;
- (_Bool)shouldSelectResponderOnAppearance;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)suspend;
- (id)specifiers;

@end

