//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CMKEffectFilterManager : NSObject
{
    NSMutableArray *_effects;
    NSMutableArray *_names;
    NSMutableArray *_aggdNames;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)aggdNameForFilter:(id)arg1;
- (id)displayNameForFilter:(id)arg1;
- (unsigned long long)_indexForFilter:(id)arg1;
- (id)displayNameForIndex:(unsigned long long)arg1;
- (id)filterForIndex:(unsigned long long)arg1;
- (unsigned long long)blackAndWhiteFilterCount;
- (unsigned long long)blackAndWhiteFilterStartIndex;
- (unsigned long long)filterCount;
- (void)_addEffectNamed:(id)arg1 aggdName:(id)arg2 filter:(id)arg3;
- (id)init;

@end
