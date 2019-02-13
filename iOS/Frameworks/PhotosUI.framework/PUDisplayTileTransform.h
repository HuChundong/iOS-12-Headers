//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class NSString, PUModelTileTransform;

__attribute__((visibility("hidden")))
@interface PUDisplayTileTransform : NSObject <NSCopying>
{
    _Bool _hasUserInput;
    NSString *_userInputOriginIdentifier;
    double __initialScale;
    struct CGSize _transformPadding;
    struct CGSize __initialSize;
    struct CGSize __displaySize;
    struct CGAffineTransform _affineTransform;
}

+ (id)displayTileTransformWithModelTileTransform:(id)arg1 initialScale:(double)arg2 initialSize:(struct CGSize)arg3 displaySize:(struct CGSize)arg4 secondaryDisplayTileTransform:(id)arg5;
@property(nonatomic, setter=_setDisplaySize:) struct CGSize _displaySize; // @synthesize _displaySize=__displaySize;
@property(nonatomic, setter=_setInitialSize:) struct CGSize _initialSize; // @synthesize _initialSize=__initialSize;
@property(nonatomic, setter=_setInitialScale:) double _initialScale; // @synthesize _initialScale=__initialScale;
@property(nonatomic, setter=_setTransformPadding:) struct CGSize transformPadding; // @synthesize transformPadding=_transformPadding;
@property(copy, nonatomic, setter=_setUserInputOriginIdentifier:) NSString *userInputOriginIdentifier; // @synthesize userInputOriginIdentifier=_userInputOriginIdentifier;
@property(nonatomic, setter=_setHasUserInput:) _Bool hasUserInput; // @synthesize hasUserInput=_hasUserInput;
@property(nonatomic, setter=_setAffineTransform:) struct CGAffineTransform affineTransform; // @synthesize affineTransform=_affineTransform;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)newDisplayTileTransformWithUserAffineTransform:(struct CGAffineTransform)arg1 userInputOriginIdentifier:(id)arg2;
@property(readonly, nonatomic) PUModelTileTransform *modelTileTransform;

@end
