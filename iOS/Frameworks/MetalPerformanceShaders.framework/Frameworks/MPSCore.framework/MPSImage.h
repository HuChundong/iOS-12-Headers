//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLDevice, MTLTexture;

@interface MPSImage : NSObject
{
    // Error parsing type: ^{MPSDevice=^^?^{MPSDevice}@^{MPSDeviceFreeList}{atomic<MTLLibraryNode *>=A^{MTLLibraryNode}}[2[2[2{atomic<void *>=A^v}]]][563{MPSPixelCapabilities=b1b1b1b1b1b2b1b8}]^{MPSFunctionTable}{atomic<void *>=A^v}Ii{MPSGPUInfo=b8b8b8b16b4b20}[79{atomic<MPSLibrary *>=A^{MPSLibrary}}]}, name: _device
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _featureChannels;
    unsigned long long _featureChannelsLayout;
    unsigned long long _numberOfImages;
    unsigned long long _textureType;
    NSString *_label;
    struct MPSPixelInfo _pixelInfo;
    MPSImage *_parent;
    // Error parsing type: {MPSAutoTexture="_texture"{atomic<void *>="__a_"A^v}"_resourceSize"{?="size"Q"align"Q}"_rowBytes"Q""(?="_subTex"{?="parent"^{MPSAutoTexture}"subRangeStart"I"subRangeSize"I}""{?="_descriptor"@"MTLTextureDescriptor"""(?="_tex"{?="device"@"<MTLDevice>"}"_temporary"{?="cache"@"MPSCommandBufferImageCache"})})"_type"C"_twiddled"C}, name: _texture
    _Bool _updatedAlready;
}

+ (id)defaultAllocator;
@property(readonly, retain, nonatomic) MPSImage *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) unsigned long long featureChannelsLayout; // @synthesize featureChannelsLayout=_featureChannelsLayout;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long numberOfImages; // @synthesize numberOfImages=_numberOfImages;
@property(readonly, nonatomic) unsigned long long featureChannels; // @synthesize featureChannels=_featureChannels;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)resourceSize;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 featureChannelInfo:(CDStruct_4bcfbbae)arg5 imageIndex:(unsigned long long)arg6;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_4bcfbbae)arg6 imageIndex:(unsigned long long)arg7;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 featureChannelInfo:(CDStruct_4bcfbbae)arg5 imageIndex:(unsigned long long)arg6;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_4bcfbbae)arg6 imageIndex:(unsigned long long)arg7;
- (unsigned long long)getPixelChannelSize;
- (_Bool)isEqual:(id)arg1;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (struct NSArray *)batchRepresentationWithSubRange:(struct _NSRange)arg1;
- (struct NSArray *)batchRepresentation;
- (id)subImageWithFeatureChannelRange:(struct _NSRange)arg1;
- (id)initWithParentImage:(id)arg1 sliceRange:(struct _NSRange)arg2 featureChannels:(unsigned long long)arg3;
- (id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2;
- (id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3;
- (id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2;
- (id)initWithDescriptor:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 onDevice:(id)arg4;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) unsigned long long pixelSize;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long precision;
@property(readonly, nonatomic) unsigned long long usage;
@property(readonly, nonatomic) unsigned long long pixelFormat;
@property(readonly, nonatomic) unsigned long long textureType;
@property(readonly, nonatomic) id <MTLTexture> texture;
@property(readonly, retain, nonatomic) id <MTLDevice> device;

@end

