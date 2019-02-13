//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKitUI/HKAnimatableObject.h>

@class UIColor, _HKIcon;

@interface _HKRing : HKAnimatableObject
{
    float _percentage;
    double _size;
    double _thickness;
    double _opacity;
    double _zRotation;
    UIColor *_topColor;
    UIColor *_bottomColor;
    _HKIcon *_icon;
    double _topColorRed;
    double _topColorGreen;
    double _topColorBlue;
    double _bottomColorRed;
    double _bottomColorGreen;
    double _bottomColorBlue;
    struct CGPoint _position;
}

@property(readonly, nonatomic) double bottomColorBlue; // @synthesize bottomColorBlue=_bottomColorBlue;
@property(readonly, nonatomic) double bottomColorGreen; // @synthesize bottomColorGreen=_bottomColorGreen;
@property(readonly, nonatomic) double bottomColorRed; // @synthesize bottomColorRed=_bottomColorRed;
@property(readonly, nonatomic) double topColorBlue; // @synthesize topColorBlue=_topColorBlue;
@property(readonly, nonatomic) double topColorGreen; // @synthesize topColorGreen=_topColorGreen;
@property(readonly, nonatomic) double topColorRed; // @synthesize topColorRed=_topColorRed;
@property(retain, nonatomic) _HKIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIColor *bottomColor; // @synthesize bottomColor=_bottomColor;
@property(retain, nonatomic) UIColor *topColor; // @synthesize topColor=_topColor;
@property(nonatomic) float percentage; // @synthesize percentage=_percentage;
@property(nonatomic) double zRotation; // @synthesize zRotation=_zRotation;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double thickness; // @synthesize thickness=_thickness;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
- (void).cxx_destruct;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)removeAllAnimationsForRingPropertyType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forRingPropertyType:(unsigned long long)arg2;
- (void)setCGPointValue:(struct CGPoint)arg1 forRingPropertyType:(unsigned long long)arg2;
- (void)setFloatValue:(double)arg1 forRingPropertyType:(unsigned long long)arg2;
- (id)init;

@end
