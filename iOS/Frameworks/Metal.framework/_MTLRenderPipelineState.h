//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLRenderPipelineState-Protocol.h>

@class MTLIndirectArgumentBufferEmulationData, NSString;
@protocol MTLDevice;

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState>
{
    NSString *_label;
    id <MTLDevice> _device;
    _Bool _threadgroupSizeMatchesTileSize;
    MTLIndirectArgumentBufferEmulationData *_vertexIABEmulationData;
    MTLIndirectArgumentBufferEmulationData *_fragmentIABEmulationData;
    _Bool _supportIndirectCommandBuffers;
    unsigned long long _uniqueIdentifier;
}

@property(readonly) _Bool threadgroupSizeMatchesTileSize; // @synthesize threadgroupSizeMatchesTileSize=_threadgroupSizeMatchesTileSize;
@property(retain, nonatomic) MTLIndirectArgumentBufferEmulationData *fragmentIABEmulationData; // @synthesize fragmentIABEmulationData=_fragmentIABEmulationData;
@property(retain, nonatomic) MTLIndirectArgumentBufferEmulationData *vertexIABEmulationData; // @synthesize vertexIABEmulationData=_vertexIABEmulationData;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) NSString *label; // @synthesize label=_label;
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly) _Bool supportIndirectCommandBuffers;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
- (void)dealloc;
- (id)initWithDeviceAndTileDesc:(id)arg1 tilePipelineStateDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long imageblockSampleLength; // @dynamic imageblockSampleLength;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup; // @dynamic maxTotalThreadsPerThreadgroup;
@property(readonly) Class superclass;

@end
