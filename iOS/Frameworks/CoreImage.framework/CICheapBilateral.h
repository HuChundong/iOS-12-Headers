//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICheapBilateral : CIFilter
{
    CIImage *inputImage;
    CIImage *inputSource;
    NSNumber *inputSigmaSpace;
    NSNumber *inputSigmaRange;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputSigmaRange; // @synthesize inputSigmaRange;
@property(retain, nonatomic) NSNumber *inputSigmaSpace; // @synthesize inputSigmaSpace;
@property(retain, nonatomic) CIImage *inputSource; // @synthesize inputSource;
- (id)outputImage;

@end
