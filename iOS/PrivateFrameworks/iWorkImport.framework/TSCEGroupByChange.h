//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSUMutableUUIDSet, TSUUUIDSet;

__attribute__((visibility("hidden")))
@interface TSCEGroupByChange : NSObject <NSCopying>
{
    TSUMutableUUIDSet *_previousGroupNodeUids;
    TSUMutableUUIDSet *_updatedGroupNodeUids;
    TSUMutableUUIDSet *_removedGroupNodeUids;
    unsigned char _changeType;
    unsigned char _previousLevel;
    unsigned char _updatedLevel;
    UUIDData_5fbc143e _groupByUid;
    UUIDMap_b66c2694 _previousGroupNodeToUpdated;
    UUIDMap_b66c2694 _updatedGroupNodeToPrevious;
}

+ (id)stringForGroupByChangeType:(unsigned char)arg1;
@property(readonly, nonatomic) UUIDMap_b66c2694 *updatedGroupNodeToPrevious; // @synthesize updatedGroupNodeToPrevious=_updatedGroupNodeToPrevious;
@property(readonly, nonatomic) TSUUUIDSet *removedGroupNodeUids; // @synthesize removedGroupNodeUids=_removedGroupNodeUids;
@property(readonly, nonatomic) TSUUUIDSet *updatedGroupNodeUids; // @synthesize updatedGroupNodeUids=_updatedGroupNodeUids;
@property(readonly, nonatomic) TSUUUIDSet *previousGroupNodeUids; // @synthesize previousGroupNodeUids=_previousGroupNodeUids;
@property(readonly, nonatomic) UUIDMap_b66c2694 *previousGroupNodeToUpdated; // @synthesize previousGroupNodeToUpdated=_previousGroupNodeToUpdated;
@property(readonly, nonatomic) UUIDData_5fbc143e groupByUid; // @synthesize groupByUid=_groupByUid;
@property(nonatomic) unsigned char updatedLevel; // @synthesize updatedLevel=_updatedLevel;
@property(nonatomic) unsigned char previousLevel; // @synthesize previousLevel=_previousLevel;
@property(nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchive:(struct GroupByChangeArchive *)arg1;
- (id)initWithArchive:(const struct GroupByChangeArchive *)arg1;
- (unsigned char)updatedRelativeAncestorLevelForPreviousAncestorCategoryLevel:(unsigned char)arg1 numLevels:(unsigned char)arg2;
- (unsigned char)previousRelativeAncestorLevelForUpdatedAncestorCategoryLevel:(unsigned char)arg1 numLevels:(unsigned char)arg2;
- (UUIDData_5fbc143e)updatedGroupNodeUidForPreviousGroupNodeUid:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)previousGroupNodeUidForUpdatedGroupNodeUid:(const UUIDData_5fbc143e *)arg1;
- (void)removeAllEntriesToUpdatedGroupNodeUid:(const UUIDData_5fbc143e *)arg1;
- (void)removeAllEntriesFromPreviousGroupUid:(const UUIDData_5fbc143e *)arg1;
- (void)mapPreviousGroupNodeUid:(const UUIDData_5fbc143e *)arg1 toUpdatedGroupNodeUid:(const UUIDData_5fbc143e *)arg2;
- (void)addRemoveOfGroupUid:(const UUIDData_5fbc143e *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned char)arg1 groupByUid:(const UUIDData_5fbc143e *)arg2;

@end

