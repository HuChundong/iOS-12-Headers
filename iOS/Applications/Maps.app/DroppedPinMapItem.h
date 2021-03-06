//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchResultMapItemBase.h"

#import "PersonalizedAutocompleteItem-Protocol.h"

@class DroppedPinMapItemKey, NSArray;

__attribute__((visibility("hidden")))
@interface DroppedPinMapItem : SearchResultMapItemBase <PersonalizedAutocompleteItem>
{
    NSArray *_autocompletionStrings;
    DroppedPinMapItemKey *_droppedPinKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *autocompletionStrings;
@property(readonly, nonatomic) long long autocompleteObjectPriority;
@property(readonly, nonatomic) id autocompleteObject;
@property(readonly, nonatomic) long long autocompleteOrder;
@property(readonly, nonatomic) long long autocompleteCategoryPriority;
- (id)styleAttributes;
- (id)title;
- (id)keys;
- (id)initWithSearchResult:(id)arg1;

@end

