//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITextInteraction.h>

__attribute__((visibility("hidden")))
@interface UITextSelectionInteraction : UITextInteraction
{
    double _lastTapTimestamp;
    struct CGPoint _lastTapLocation;
    long long _previousRepeatedGranularity;
}

- (_Bool)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)performTapActionAtPoint:(struct CGPoint)arg1 granularity:(long long)arg2 modifierFlags:(long long)arg3;
- (void)performTapActionAtPoint:(struct CGPoint)arg1 granularity:(long long)arg2;
- (_Bool)isNowWithinRepeatedTapTime;
- (_Bool)_isShiftKeyBeingHeldForGesture:(id)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (id)initWithMode:(long long)arg1;

@end
