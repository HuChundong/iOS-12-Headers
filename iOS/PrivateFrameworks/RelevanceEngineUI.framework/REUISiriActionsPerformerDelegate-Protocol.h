//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngineUI/NSObject-Protocol.h>

@class NSError, REUISiriActionsPerformer, UIImage, UIViewController;

@protocol REUISiriActionsPerformerDelegate <NSObject>
- (void)siriActionsPerformer:(REUISiriActionsPerformer *)arg1 didFailWithError:(NSError *)arg2;
- (void)siriActionsPerformerDidSucceed:(REUISiriActionsPerformer *)arg1;
- (_Bool)siriActionsPerformer:(REUISiriActionsPerformer *)arg1 wantsToPresentViewController:(UIViewController *)arg2;
- (UIImage *)siriActionsPerformerWantsAlertBackgroundImage:(REUISiriActionsPerformer *)arg1;
@end
