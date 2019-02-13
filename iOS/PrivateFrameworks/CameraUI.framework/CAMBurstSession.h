//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIBurstImageSet, NSString;

@interface CAMBurstSession : NSObject
{
    _Bool _finalized;
    unsigned long long _estimatedCount;
    unsigned long long _count;
    CIBurstImageSet *__burstImageSet;
}

@property(readonly, nonatomic) CIBurstImageSet *_burstImageSet; // @synthesize _burstImageSet=__burstImageSet;
@property(nonatomic, getter=_isFinalized, setter=_setFinalized:) _Bool finalized; // @synthesize finalized=_finalized;
@property(nonatomic, setter=_setCount:) unsigned long long count; // @synthesize count=_count;
@property(nonatomic, setter=_setEstimatedCount:) unsigned long long estimatedCount; // @synthesize estimatedCount=_estimatedCount;
- (void).cxx_destruct;
- (void)addStillImageLocalPersistenceResult:(id)arg1 withFaces:(id)arg2;
- (void)addStillImageCaptureResult:(id)arg1;
- (id)performBurstAnalysisForDevice:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)description;
- (id)init;

@end
