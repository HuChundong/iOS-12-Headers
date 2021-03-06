//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ENGroupID, ENStableGroupID;

@protocol IDSGroupContextCacheMiddlewareDaemonProtocol
- (void)deleteAllCachedValuesForGroupWithID:(ENGroupID *)arg1 WithCompletion:(void (^)(void))arg2;
- (void)deleteAllKnownGroupsWithCompletion:(void (^)(void))arg1;
- (void)fetchAllKnownGroups:(void (^)(NSArray *))arg1;
- (void)latestCachedGroupWithStableID:(ENStableGroupID *)arg1 completion:(void (^)(ENGroup *))arg2;
@end

