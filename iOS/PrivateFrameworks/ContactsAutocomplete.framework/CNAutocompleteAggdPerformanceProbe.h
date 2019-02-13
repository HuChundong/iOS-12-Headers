//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompletePerformanceProbe-Protocol.h>

@class CNAutocompleteAggdProbe, NSMutableDictionary, NSString;

@interface CNAutocompleteAggdPerformanceProbe : NSObject <CNAutocompletePerformanceProbe>
{
    CNAutocompleteAggdProbe *_aggdProbe;
    NSMutableDictionary *_pendingAddData;
}

@property(readonly, nonatomic) NSMutableDictionary *pendingAddData; // @synthesize pendingAddData=_pendingAddData;
@property(retain, nonatomic) CNAutocompleteAggdProbe *aggdProbe; // @synthesize aggdProbe=_aggdProbe;
- (void).cxx_destruct;
- (void)sendData;
- (void)recordNumberOfCalendarServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfSupplementalResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfPredictionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfDirectoryServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfSuggestionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfContactResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfRecentResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordLatency:(double)arg1 forResultCount:(unsigned long long)arg2 forSource:(id)arg3;
- (void)recordNumberOfResultsReturned:(unsigned long long)arg1 inTimeInterval:(double)arg2 forBatch:(unsigned long long)arg3 includesServers:(_Bool)arg4;
- (id)initWithAggdProbe:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
