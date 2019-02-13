//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNConvolutionNode.h>

@class MPSCNNConvolutionGradientStateNode;

@interface MPSCNNBinaryConvolutionNode : MPSCNNConvolutionNode
{
    float _scaleValue;
    unsigned long long _type;
    unsigned long long _flags;
    float *_outputBiasTerms;
    float *_outputScaleTerms;
    float *_inputBiasTerms;
    float *_inputScaleTerms;
}

+ (id)nodeWithSource:(id)arg1 weights:(id)arg2 outputBiasTerms:(const float *)arg3 outputScaleTerms:(const float *)arg4 inputBiasTerms:(const float *)arg5 inputScaleTerms:(const float *)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8;
+ (id)nodeWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (void)dealloc;
- (id)convolutionState;
@property(readonly, nonatomic) MPSCNNConvolutionGradientStateNode *convolutionGradientState;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1 weights:(id)arg2 outputBiasTerms:(const float *)arg3 outputScaleTerms:(const float *)arg4 inputBiasTerms:(const float *)arg5 inputScaleTerms:(const float *)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8;
- (id)initWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5;

@end
