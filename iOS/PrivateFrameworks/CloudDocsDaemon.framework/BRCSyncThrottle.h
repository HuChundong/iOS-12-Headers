//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCThrottle.h>

@class NSPredicate;

@interface BRCSyncThrottle : BRCThrottle
{
    NSPredicate *_predicate;
}

@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;
- (_Bool)_validateThrottleParams:(id)arg1;
- (_Bool)matchesItem:(id)arg1 nsecsToRetry:(unsigned long long *)arg2 now:(unsigned long long)arg3;

@end

