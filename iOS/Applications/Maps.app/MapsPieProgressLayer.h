//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface MapsPieProgressLayer : CALayer
{
    UIColor *_progressColor;
    double _borderLineWidth;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) double borderLineWidth; // @synthesize borderLineWidth=_borderLineWidth;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) double progress; // @dynamic progress;

@end

