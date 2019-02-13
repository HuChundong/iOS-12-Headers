//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFMutexLock, NSMutableDictionary;

@interface FRCardConfigurationCache : NSObject
{
    NSMutableDictionary *_fontCache;
    NSMutableDictionary *_imageCache;
    NFMutexLock *_fontWriteLock;
}

@property(retain, nonatomic) NFMutexLock *fontWriteLock; // @synthesize fontWriteLock=_fontWriteLock;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(retain) NSMutableDictionary *fontCache; // @synthesize fontCache=_fontCache;
- (void).cxx_destruct;
- (id)cacheImageItemForCardSize:(struct CGSize)arg1;
- (id)cacheFontItemForFontSize:(double)arg1;
- (id)init;

@end
