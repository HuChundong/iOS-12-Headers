//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSWPRep;

@protocol TSWPTextMagnifier <NSObject>
@property(nonatomic) struct CGPoint animationPoint;
@property(nonatomic) struct CGPoint offset;
@property(nonatomic) struct CGPoint magnificationPoint;
@property(readonly, nonatomic) _Bool terminalPointPlacedCarefully;
@property(readonly, nonatomic) struct CGPoint terminalPoint;
@property(retain, nonatomic) TSWPRep *target;
- (void)autoscrollWillNotStart;
- (void)setAutoscrollDirections:(int)arg1;
- (void)postAutoscrollPoint:(struct CGPoint)arg1;
- (void)stopMagnifying:(_Bool)arg1;
- (void)beginMagnifyingTarget:(TSWPRep *)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(_Bool)arg4;
@end

