//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "LUIUserInfoViewDelegate-Protocol.h"

@class LKUser, LUIUserInfoView, NSString;

@interface LUIUserInfoViewController : UIViewController <LUIUserInfoViewDelegate>
{
    LKUser *_user;
    LUIUserInfoView *_userInfoView;
}

@property(retain, nonatomic) LUIUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) LKUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)okButtonPressed:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
