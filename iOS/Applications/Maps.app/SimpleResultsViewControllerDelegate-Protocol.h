//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SearchResult, SimpleResultsViewController, VKLabelMarker;

@protocol SimpleResultsViewControllerDelegate <NSObject>
- (void)simpleResultsViewContoller:(SimpleResultsViewController *)arg1 selectClusteredLabelMarker:(VKLabelMarker *)arg2;
- (void)simpleResultsViewContoller:(SimpleResultsViewController *)arg1 selectSearchResult:(SearchResult *)arg2;
@end
