//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFQueue.h>

@interface SVSTranscriptAnimationQueue : AFQueue
{
}

- (id)nextNonPinningAnimationForTranscriptItem:(id)arg1;
- (id)dequeueAllAnimations;
- (id)dequeNextAnimation;
- (id)nextAnimation;
- (void)enqueueAnimations:(id)arg1;
- (void)enqueueAnimation:(id)arg1;

@end
