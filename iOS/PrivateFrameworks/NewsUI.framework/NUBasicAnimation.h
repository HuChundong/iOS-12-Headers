//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CABasicAnimation.h>

#import <NewsUI/CAAnimationDelegate-Protocol.h>

@class NSString;

@interface NUBasicAnimation : CABasicAnimation <CAAnimationDelegate>
{
    CDUnknownBlockType _completion;
}

+ (id)animationWithKeyPath:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
