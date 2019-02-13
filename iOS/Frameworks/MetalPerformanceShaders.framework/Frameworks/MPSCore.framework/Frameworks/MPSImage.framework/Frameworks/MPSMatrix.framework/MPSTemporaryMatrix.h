//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSMatrix/MPSMatrix.h>

@interface MPSTemporaryMatrix : MPSMatrix
{
    unsigned long long _readCount;
}

+ (void)prefetchStorageWithCommandBuffer:(id)arg1 matrixDescriptorList:(id)arg2;
+ (id)temporaryMatrixWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2;
@property(nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)initWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2;

@end
