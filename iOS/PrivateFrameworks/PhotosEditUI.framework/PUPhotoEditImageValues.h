//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PUPhotoEditImageValues : NSObject
{
    _Bool _complete;
    NSDictionary *_smartToneStatistics;
    NSDictionary *_smartColorStatistics;
    double _smartToneAutoSuggestion;
    double _smartColorAutoSuggestion;
    NSDictionary *_autoCropValues;
    NSDictionary *_portraitValues;
    NSDictionary *_apertureValues;
}

@property(getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(copy) NSDictionary *apertureValues; // @synthesize apertureValues=_apertureValues;
@property(copy) NSDictionary *portraitValues; // @synthesize portraitValues=_portraitValues;
@property(copy) NSDictionary *autoCropValues; // @synthesize autoCropValues=_autoCropValues;
@property double smartColorAutoSuggestion; // @synthesize smartColorAutoSuggestion=_smartColorAutoSuggestion;
@property double smartToneAutoSuggestion; // @synthesize smartToneAutoSuggestion=_smartToneAutoSuggestion;
@property(copy) NSDictionary *smartColorStatistics; // @synthesize smartColorStatistics=_smartColorStatistics;
@property(copy) NSDictionary *smartToneStatistics; // @synthesize smartToneStatistics=_smartToneStatistics;
- (void).cxx_destruct;

@end

