//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PersonalizedItemSource.h"

@class GEOMapItemContainedPlace, NSArray, NSSet;
@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface PlaceCardLinkedPlacesItemSource : PersonalizedItemSource
{
    id <GEOMapItem> _geoMapItem;
    GEOMapItemContainedPlace *_containedPlace;
    NSArray *_linkedPlaces;
    NSSet *_linkedPlaceIdentifiers;
    unsigned long long _featureID;
}

@property(readonly, nonatomic) unsigned long long featureID; // @synthesize featureID=_featureID;
- (void).cxx_destruct;
- (id)allItems;
- (void)updateForPlaceCardItem:(id)arg1;

@end

