//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PurchaseManifest : NSObject
{
    NSMutableDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_path;
}

+ (id)_sharedManifestWithManifestType:(long long)arg1;
+ (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)removeItemWithMessage:(id)arg1 connection:(id)arg2;
+ (void)rebuildWithMessage:(id)arg1 connection:(id)arg2;
+ (void)observeXPCServer:(id)arg1;
+ (void)getPathsWithMessage:(id)arg1 connection:(id)arg2;
+ (id)sharedManifestForDownloadKind:(id)arg1;
+ (void)jetsam;
- (_Bool)_writeToFile;
- (id)_dictionary;
- (id)removeItemsWithAssetPaths:(id)arg1 error:(id *)arg2;
- (void)rebuildManifest;
@property(readonly) NSArray *purchaseManifestItems;
@property(readonly) NSString *path;
- (void)jetsam;
- (void)addCompletedItem:(id)arg1;
- (void)dealloc;
- (id)initWithPurchaseDirectory:(id)arg1;
- (id)init;

@end

