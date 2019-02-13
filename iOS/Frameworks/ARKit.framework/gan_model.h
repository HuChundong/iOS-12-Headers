//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface gan_model : NSObject
{
    MLModel *_model;
}

@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromInput:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;

@end
