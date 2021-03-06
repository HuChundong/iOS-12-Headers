//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIStackView;

__attribute__((visibility("hidden")))
@interface RidesharingRatingView : UIView
{
    UIStackView *_stackView;
    unsigned long long _stars;
    CDUnknownBlockType _updateBlock;
}

- (void).cxx_destruct;
- (id)description;
- (void)performCallBackWithStarValue;
- (void)handleStarTouches:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)update;
- (void)_commonInitWithStars:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelectedStars:(unsigned long long)arg1 updateBlock:(CDUnknownBlockType)arg2;

@end

