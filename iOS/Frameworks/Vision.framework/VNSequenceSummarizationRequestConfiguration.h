//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber, VNSequenceSummarizationObservation;

__attribute__((visibility("hidden")))
@interface VNSequenceSummarizationRequestConfiguration : VNImageBasedRequestConfiguration
{
    VNSequenceSummarizationObservation *_inputObservation;
    NSNumber *_frameTimeStamp;
    NSNumber *_frameRate;
}

@property(copy, nonatomic) NSNumber *frameRate; // @synthesize frameRate=_frameRate;
@property(copy, nonatomic) NSNumber *frameTimeStamp; // @synthesize frameTimeStamp=_frameTimeStamp;
@property(retain, nonatomic) VNSequenceSummarizationObservation *inputObservation; // @synthesize inputObservation=_inputObservation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
