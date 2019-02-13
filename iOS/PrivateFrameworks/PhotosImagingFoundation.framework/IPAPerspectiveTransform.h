//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageTransform.h>

@protocol IPAQuadGeometry;

__attribute__((visibility("hidden")))
@interface IPAPerspectiveTransform : IPAImageTransform
{
    struct Matrix4d _projectionTransform;
    struct Matrix4d _viewingTransform;
    id <IPAQuadGeometry> _intrinsicGeometry;
    _Bool _isInverse;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)canAlignToPixelsExactly;
- (id)intrinsicGeometry;
- (id)inverseTransform;
- (struct Vector2d)mapVector:(struct Vector2d)arg1;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 projectionTransform:(const struct Matrix4d *)arg3 viewingTransform:(const struct Matrix4d *)arg4;

@end
