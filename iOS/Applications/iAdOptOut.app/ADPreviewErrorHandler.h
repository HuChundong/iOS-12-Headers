//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADPreviewErrorHandler : NSObject
{
}

+ (void)showInvalidAppLaunchError;
+ (void)showNoEmailConfigurationError;
+ (void)showInvalidTagError;
+ (void)showPreviewNotEnabledError;
+ (void)showInvalidSizeError;
+ (void)showInvalidTypeError;
+ (void)showServerSetupError:(id)arg1;
+ (void)showAdLoadingError:(id)arg1;
+ (void)showInvalidURLError;
+ (id)instance;
- (void)showWarningTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;
- (void)showErrorTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;

@end
