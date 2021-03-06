//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/DKDGLDataBufferAccessor-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface DKDGLDataArrayBuffer : NSObject <DKDGLDataBufferAccessor>
{
    NSMutableArray *_vertexAttributes;
    unsigned long long mVertexCount;
    unsigned long long _dataTypeSizeInBytes;
    unsigned int _bufferUsage;
    long long *mNeedsUpdateFirstIndex;
    long long *mNeedsUpdateLastIndex;
    char *mGLData;
    _Bool mGLDataBufferHasBeenSetup;
    unsigned int *mGLDataBuffers;
    NSMutableDictionary *mAttributeOffsetsDictionary;
    unsigned long long _GLDataBufferEntrySize;
    unsigned long long _bufferCount;
    unsigned long long _currentBufferIndex;
}

@property(nonatomic) unsigned long long currentBufferIndex; // @synthesize currentBufferIndex=_currentBufferIndex;
@property(readonly, nonatomic) unsigned long long bufferCount; // @synthesize bufferCount=_bufferCount;
@property(readonly, nonatomic) unsigned long long GLDataBufferEntrySize; // @synthesize GLDataBufferEntrySize=_GLDataBufferEntrySize;
@property(readonly, copy) NSString *description;
- (void)setGLPoint4D:(CDStruct_f2e236b6)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_f2e236b6)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint3D:(CDStruct_03942939)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_03942939)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_6e3f967a)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)vertexCount;
@property(readonly, nonatomic) _Bool hasUpdatedData;
- (char *)GLDataPointer;
- (void)swapGLDataBuffers;
- (void)disableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)enableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)addIndexNeedsUpdate:(long long)arg1;
- (void)addIndexRangeNeedsUpdate:(struct _NSRange)arg1;
- (void)addAllIndexesNeedUpdate;
- (void)dealloc;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 bufferCount:(unsigned long long)arg3;
- (unsigned long long)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned long long)arg2 component:(unsigned long long)arg3;
- (void)updateDataBufferIfNecessary;
- (void)p_setupGLDataBufferIfNecessary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

