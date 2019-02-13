//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTUidReturning-Protocol.h>

@class NSMutableDictionary, TSCECellValue, TSTGroupNodeFormatManager, TSTGroupValueTuple, TSUMutableUUIDSet, TSUUUIDSet;

__attribute__((visibility("hidden")))
@interface TSTGroupNode : NSObject <TSTUidReturning>
{
    UUIDData_5fbc143e _groupUid;
    TSCECellValue *_groupCellValue;
    unsigned char _groupLevel;
    unordered_map_facfd2e8 _aggNodes;
    NSMutableDictionary *_children;
    struct os_unfair_lock_s _childrenLock;
    TSUMutableUUIDSet *_rowUids;
    TSTGroupNode *_parentNode;
    TSTGroupNodeFormatManager *_formatManager;
}

+ (id)localizedStringForCellValue:(id)arg1 categoryLevel:(unsigned char)arg2 groupBy:(id)arg3;
+ (id)normalizedStringForCompare:(id)arg1;
+ (_Bool)needFormulasForAggregateType:(unsigned char)arg1;
+ (id)keyStringForCellValue:(id)arg1;
@property(nonatomic) TSTGroupNode *parentNode; // @synthesize parentNode=_parentNode;
@property(readonly, retain, nonatomic) TSUUUIDSet *rowUids; // @synthesize rowUids=_rowUids;
@property(readonly, nonatomic) unsigned char groupLevel; // @synthesize groupLevel=_groupLevel;
@property(readonly, retain, nonatomic) TSCECellValue *groupCellValue; // @synthesize groupCellValue=_groupCellValue;
@property(readonly) const UUIDData_5fbc143e *groupUid; // @synthesize groupUid=_groupUid;
- (id).cxx_construct;
- (void).cxx_destruct;
- (vector_4dc5f307)nodePath;
- (id)aggNodeForColumnUid:(const UUIDData_5fbc143e *)arg1;
- (id)groupNodeForRowUid:(const UUIDData_5fbc143e *)arg1 atLevel:(unsigned char)arg2;
- (id)groupNodeForGroupUid:(const UUIDData_5fbc143e *)arg1;
- (void)addAggNode:(id)arg1;
- (void)enumerateDirectChildren:(CDUnknownBlockType)arg1;
- (void)enumerateGroupsAtLevel:(unsigned char)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAllGroupsWithBlock:(CDUnknownBlockType)arg1;
- (id)descriptionWithGroupBy:(id)arg1;
- (id)groupValueHierarchyStringWithDelimiterString:(id)arg1;
- (id)groupValueHierarchyStringWithDelimiterString:(id)arg1 groupBy:(id)arg2 namingContext:(id)arg3;
- (id)groupValueHierarchyForChart:(_Bool)arg1 groupBy:(id)arg2;
- (id)groupValueAtLevel:(unsigned char)arg1;
- (void)clearEmptyNodesWithGroupBy:(id)arg1;
- (void)clearWithGroupBy:(id)arg1;
- (void)removeAllRowUids;
- (_Bool)containsRowUid:(const UUIDData_5fbc143e *)arg1;
- (void)addRowUid:(const UUIDData_5fbc143e *)arg1;
- (void)markDependentsAsDirtyWithCalcEngine:(id)arg1;
- (void)markAsDirtyWithCalcEngine:(id)arg1;
- (void)rebuildFormulasForAggNode:(id)arg1 forGroupBy:(id)arg2;
- (void)removeRowUids:(id)arg1 forGroupBy:(id)arg2;
- (void)removeRowUid:(const UUIDData_5fbc143e *)arg1 forGroupValueTuple:(id)arg2 atLevel:(unsigned char)arg3 forGroupBy:(id)arg4 withLocale:(id)arg5;
- (id)insertRowUid:(const UUIDData_5fbc143e *)arg1 forGroupValueTuple:(id)arg2 atLevel:(unsigned char)arg3 forGroupBy:(id)arg4 withLocale:(id)arg5;
- (_Bool)updateGroupCellValueIfKeyMatches:(id)arg1;
- (void)p_refreshGroupValue;
- (void)addChangesTo:(id)arg1 forDemotingValueAtLevel:(unsigned char)arg2 toLevel:(unsigned char)arg3;
- (void)addChangesTo:(id)arg1 forPromotingValueAtLevel:(unsigned char)arg2 toLevel:(unsigned char)arg3;
- (void)addChangesTo:(id)arg1 forRemovingValueAtLevel:(unsigned char)arg2;
- (void)addChangesTo:(id)arg1 forReplacingValue:(id)arg2 atLevel:(unsigned char)arg3;
- (id)findGroupNodeForDisplayValuesFromSplitter:(id)arg1 atLevel:(unsigned char)arg2 groupBy:(id)arg3 startAtComponent:(unsigned long long)arg4 startAtWord:(unsigned long long)arg5 preserveFlags:(struct TSUPreserveFlags *)arg6;
- (id)findGroupNodeForValue:(id)arg1 atLevel:(unsigned char)arg2 locale:(id)arg3;
- (struct TSCECategoryRef)groupValueHierarchyRefAtLevel:(unsigned char)arg1 forGroupBy:(id)arg2;
- (struct TSCECategoryRef)groupValueRefAtLevel:(unsigned char)arg1 forGroupBy:(id)arg2;
- (struct TSCECategoryRef)aggregateRefForType:(unsigned char)arg1 atLevel:(unsigned char)arg2 forGroupBy:(id)arg3 forColumnUid:(const UUIDData_5fbc143e *)arg4;
@property(readonly, retain, nonatomic) TSUUUIDSet *directChildGroupUids;
@property(readonly, retain, nonatomic) TSUUUIDSet *childGroupUids;
- (void)p_addChildGroupUidsIntoSet:(id)arg1 recursively:(_Bool)arg2;
- (const UUIDData_5fbc143e *)uidReturn;
- (void)updateWithDocumentRoot:(id)arg1;
@property(readonly, nonatomic) _Bool isErrorNode;
@property(readonly, nonatomic) _Bool isBlankNode;
@property(readonly, nonatomic) _Bool isLeaf;
- (void)encodeToArchive:(struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive *)arg1;
- (id)safeChildren;
- (void)removeChildForKey:(id)arg1;
- (void)addChild:(id)arg1 withKey:(id)arg2;
- (id)initWithArchive:(const struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive *)arg1 forGroupBy:(id)arg2 atLevel:(unsigned char)arg3;
- (id)initWithGroupCellValue:(id)arg1 atLevel:(unsigned char)arg2 groupUid:(UUIDData_5fbc143e)arg3 children:(id)arg4;
- (id)initAsRootNode;
@property(readonly, nonatomic) unordered_map_facfd2e8 *aggNodes;
@property(readonly, nonatomic) TSTGroupValueTuple *groupValueTuple;
@property(readonly) UUIDData_5fbc143e labelUid;

@end
