//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FRFeedPickerDataSourceSubscriptionSorter, NSArray, NSMutableSet, NSOrderedSet;

@interface FRFeedPickerSection : NSObject
{
    NSMutableSet *_mutableTags;
    FRFeedPickerDataSourceSubscriptionSorter *_sorter;
    NSOrderedSet *_popularTagIDs;
    CDUnknownBlockType _transformBlock;
    NSArray *_mostFrequentlyVisitedTags;
    NSArray *_recentlyOpenedTags;
    NSArray *_alphabeticalTags;
}

+ (id)feedPickerSectionWithTags:(id)arg1 sorter:(id)arg2 popularTagIDs:(id)arg3 transformBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSArray *alphabeticalTags; // @synthesize alphabeticalTags=_alphabeticalTags;
@property(retain, nonatomic) NSArray *recentlyOpenedTags; // @synthesize recentlyOpenedTags=_recentlyOpenedTags;
@property(retain, nonatomic) NSArray *mostFrequentlyVisitedTags; // @synthesize mostFrequentlyVisitedTags=_mostFrequentlyVisitedTags;
@property(copy, nonatomic) CDUnknownBlockType transformBlock; // @synthesize transformBlock=_transformBlock;
@property(retain, nonatomic) NSOrderedSet *popularTagIDs; // @synthesize popularTagIDs=_popularTagIDs;
@property(retain, nonatomic) FRFeedPickerDataSourceSubscriptionSorter *sorter; // @synthesize sorter=_sorter;
@property(retain, nonatomic) NSMutableSet *mutableTags; // @synthesize mutableTags=_mutableTags;
- (void).cxx_destruct;
- (void)_buildSortedArrays;
- (id)_tagsForSortOrder:(unsigned long long)arg1;
- (id)feedDescriptorsForSort:(unsigned long long)arg1;
- (long long)numberOfTags;
- (_Bool)containsTag:(id)arg1;
- (long long)indexOfTag:(id)arg1 withSortOrder:(unsigned long long)arg2;
- (void)removeTag:(id)arg1;
- (void)addTags:(id)arg1;
- (void)addTag:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *tags;

@end
