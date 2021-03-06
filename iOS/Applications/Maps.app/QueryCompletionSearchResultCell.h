//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListViewSearchResultCell.h"

@class MKLocalSearchCompletion, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QueryCompletionSearchResultCell : ListViewSearchResultCell
{
    NSString *_titleText;
    NSArray *_titleBoldRanges;
    NSDictionary *_titleLabelTextAttributes;
    NSDictionary *_boldTitleLabelTextAttributes;
    MKLocalSearchCompletion *_completion;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) MKLocalSearchCompletion *completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (id)boldTitleLabelTextAttributes;
- (id)titleLabelTextAttributes;
- (void)setSearchResult:(id)arg1;

@end

