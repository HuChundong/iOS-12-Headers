//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIEnhancementHistogram;

__attribute__((visibility("hidden")))
@interface CIEnhancementCalculation : NSObject
{
    CDStruct_bfe67ca5 originalFaceColor;
    CIEnhancementHistogram *lumHist;
    CIEnhancementHistogram *rgbSumHist;
    CIEnhancementHistogram *satHist;
    CIEnhancementHistogram *borderHist;
    double exposureValue;
    double maxShadow;
    double minShadow;
    double exposureValueAtZeroShadow;
    double curvePercent;
    _Bool faceInputSet;
    double percentFaceChange;
}

+ (double)bestWarmthForI:(double)arg1 q:(double)arg2 percentChange:(double *)arg3;
@property(readonly) CIEnhancementHistogram *borderHist; // @synthesize borderHist;
@property(readonly) CIEnhancementHistogram *satHist; // @synthesize satHist;
@property(readonly) CIEnhancementHistogram *rgbSumHist; // @synthesize rgbSumHist;
@property(readonly) CIEnhancementHistogram *lumHist; // @synthesize lumHist;
- (void)printHistogramsDownsampledTo:(unsigned int)arg1;
- (void)printAnalysis;
- (void)printHistogram:(id)arg1 downsampledTo:(unsigned int)arg2;
- (void)downSampleHistogram:(id)arg1 to:(unsigned int)arg2 storeIn:(double *)arg3;
- (id)rawShadow;
- (id)shadow;
- (int)putShadowsAnalysisInto:(double *)arg1;
- (struct CGPoint)curvePointAtIndex:(unsigned long long)arg1;
- (unsigned long long)curveCount;
- (id)vibrance;
@property(readonly) CDStruct_bfe67ca5 originalFaceColor; // @synthesize originalFaceColor;
- (id)faceBalanceWarmth;
- (id)faceBalanceStrength;
- (void)setShadowsMin:(double)arg1 max:(double)arg2 zeroExposure:(double)arg3;
- (void)setExposureValue:(double)arg1;
- (void)setupFaceColor:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;
- (void)setFaceColorFromChromaI:(double)arg1 andChromaQ:(double)arg2;
- (void)setSaturationHistogram:(id)arg1;
- (void)setBorderHistogram:(id)arg1;
- (void)setRGBSumHistogram:(id)arg1;
- (void)setLuminanceHistogram:(id)arg1;
- (void)setCurvePercent:(double)arg1;
- (void)dealloc;
- (id)init;

@end
