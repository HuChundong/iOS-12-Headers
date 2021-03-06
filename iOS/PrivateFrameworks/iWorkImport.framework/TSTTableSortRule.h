//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTTableSortRule : NSObject <NSCopying>
{
    struct TSUModelColumnIndex _baseColumnIndex;
    int _direction;
}

+ (id)ruleWithBaseColumnIndex:(struct TSUModelColumnIndex)arg1 direction:(int)arg2;
@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) struct TSUModelColumnIndex baseColumnIndex; // @synthesize baseColumnIndex=_baseColumnIndex;
- (id)initFromArchive:(const struct TableSortOrderArchive_SortRuleArchive *)arg1;
- (void)encodeToArchive:(struct TableSortOrderArchive_SortRuleArchive *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)ruleByChangingDirectionTo:(int)arg1;
- (id)ruleByChangingBaseColumnIndexTo:(struct TSUModelColumnIndex)arg1;
- (id)initWithBaseColumnIndex:(struct TSUModelColumnIndex)arg1 direction:(int)arg2;

@end

