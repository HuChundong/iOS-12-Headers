//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/NSObject-Protocol.h>

@class CLLocation;
@protocol MapsSuggestionsSource;

@protocol MapsSuggestionsSourceDelegate <NSObject>
- (_Bool)detachSource:(id <MapsSuggestionsSource>)arg1;
- (_Bool)attachSource:(id <MapsSuggestionsSource>)arg1;
- (CLLocation *)currentBestLocation;
- (unsigned long long)deleteEntries:(struct NSArray *)arg1 source:(struct NSString *)arg2;
- (unsigned long long)addOrUpdateSuggestionEntries:(struct NSArray *)arg1 source:(struct NSString *)arg2 deleteMissing:(_Bool)arg3;
@end
