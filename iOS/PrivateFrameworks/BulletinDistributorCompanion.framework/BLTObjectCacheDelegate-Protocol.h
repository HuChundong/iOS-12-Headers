//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BLTObjectCache, NSString;
@protocol NSSecureCoding;

@protocol BLTObjectCacheDelegate <NSObject>
- (void)objectCache:(BLTObjectCache *)arg1 removeObjectForKey:(NSString *)arg2 withBlock:(void (^)(NSError *))arg3;
- (void)objectCache:(BLTObjectCache *)arg1 storeObject:(id <NSSecureCoding>)arg2 withKey:(NSString *)arg3 withBlock:(void (^)(NSError *))arg4;
- (void)objectCache:(BLTObjectCache *)arg1 objectForKey:(NSString *)arg2 withBlock:(void (^)(id <NSSecureCoding>))arg3;
- (void)objectCache:(BLTObjectCache *)arg1 keysWithBlock:(void (^)(NSSet *))arg2;
@end

