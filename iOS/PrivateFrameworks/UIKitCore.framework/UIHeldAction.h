//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIDelayedAction.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface UIHeldAction : UIDelayedAction
{
    _Bool _holding;
    NSDate *_holdBegan;
    double _baseDelay;
    double _timeBalance;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)unschedule;
- (void)touchWithDelay:(double)arg1;
- (_Bool)isHolding;
- (void)resume;
- (void)hold;

@end
