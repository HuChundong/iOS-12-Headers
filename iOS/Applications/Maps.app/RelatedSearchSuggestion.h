//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface RelatedSearchSuggestion : NSObject
{
    _Bool _showCloseButton;
    NSArray *_components;
    double _visibleTime;
    NSString *_resultDisplayHeader;
    NSArray *_substitutes;
    NSArray *_pdSubstitutes;
}

@property(retain, nonatomic) NSArray *pdSubstitutes; // @synthesize pdSubstitutes=_pdSubstitutes;
@property(retain, nonatomic) NSArray *substitutes; // @synthesize substitutes=_substitutes;
@property(copy, nonatomic) NSString *resultDisplayHeader; // @synthesize resultDisplayHeader=_resultDisplayHeader;
@property(readonly, nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(readonly, nonatomic) double visibleTime; // @synthesize visibleTime=_visibleTime;
@property(retain, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (void)_parseComponents;
@property(readonly, nonatomic) NSString *displayString;
- (void)_parseSubtitutes;
- (id)initWithResultDisplayHeader:(id)arg1 substitutes:(id)arg2 visibleTime:(double)arg3 showCloseButton:(_Bool)arg4;

@end

