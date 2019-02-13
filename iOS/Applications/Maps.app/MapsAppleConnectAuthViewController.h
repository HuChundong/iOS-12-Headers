//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ACMobileAuthenticationContext, NSURL, UIBarButtonItem, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface MapsAppleConnectAuthViewController : UIViewController
{
    ACMobileAuthenticationContext *_appleConnectAuthenticationContext;
    UILabel *_statusLabel;
    UIButton *_reAuthButton;
    UIBarButtonItem *_cancelButton;
    _Bool _alreadyDisplayedACAuth;
    NSURL *_authProxyURL;
}

+ (void)presentAppleConnectAuthControllerFrom:(id)arg1 withProxyURL:(id)arg2;
@property(copy, nonatomic) NSURL *authProxyURL; // @synthesize authProxyURL=_authProxyURL;
@property(nonatomic) _Bool alreadyDisplayedACAuth; // @synthesize alreadyDisplayedACAuth=_alreadyDisplayedACAuth;
- (void).cxx_destruct;
- (void)_doAppleConnectAuthentication;
- (void)_dismissViewController;
- (void)_updateStatus:(_Bool)arg1 message:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithProxyURL:(id)arg1;

@end
