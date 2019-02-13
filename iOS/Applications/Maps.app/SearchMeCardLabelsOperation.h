//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AutocompleteContext, NSString;
@protocol SearchMeCardLabelsOperationDelegate;

__attribute__((visibility("hidden")))
@interface SearchMeCardLabelsOperation : NSOperation
{
    NSString *_searchQuery;
    AutocompleteContext *_context;
    id <SearchMeCardLabelsOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <SearchMeCardLabelsOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_meCardLabelResultsForMeCard:(id)arg1;
- (void)main;
- (id)initWithSearchQuery:(id)arg1 context:(id)arg2;

@end
