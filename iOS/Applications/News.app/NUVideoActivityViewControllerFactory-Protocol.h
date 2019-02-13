//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIActivityViewController, UIViewController;
@protocol NUURLHandling, NUVideoItem;

@protocol NUVideoActivityViewControllerFactory <NSObject>
- (UIActivityViewController *)activityViewControllerForVideoItem:(id <NUVideoItem>)arg1 presentingViewController:(UIViewController *)arg2 articleViewingSessionID:(NSString *)arg3 URLHandler:(id <NUURLHandling>)arg4;
@end
