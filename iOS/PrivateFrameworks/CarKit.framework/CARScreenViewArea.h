//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CARScreenViewArea : NSObject
{
    struct CGRect _visibleFrame;
    struct CGRect _safeFrame;
}

@property(readonly, nonatomic) struct CGRect safeFrame; // @synthesize safeFrame=_safeFrame;
@property(readonly, nonatomic) struct CGRect visibleFrame; // @synthesize visibleFrame=_visibleFrame;
- (id)description;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1;

@end

