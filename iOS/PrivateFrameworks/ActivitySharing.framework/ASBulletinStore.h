//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ASBulletinStore : NSObject
{
    NSArray *_bulletins;
}

@property(readonly, nonatomic) NSArray *bulletins; // @synthesize bulletins=_bulletins;
- (void).cxx_destruct;
- (void)_persistBulletins;
- (void)removeBulletinsMatchingCriteria:(CDUnknownBlockType)arg1;
- (void)removeAllBulletins;
- (void)addBulletins:(id)arg1;
- (id)init;

@end
