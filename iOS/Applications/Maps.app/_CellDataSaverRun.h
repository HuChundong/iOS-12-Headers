//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _CellDataSaverRun : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _totalTiles;
    unsigned long long _successCount;
    unsigned long long _failureCount;
}

@property(nonatomic) unsigned long long failureCount; // @synthesize failureCount=_failureCount;
@property(nonatomic) unsigned long long successCount; // @synthesize successCount=_successCount;
@property(nonatomic) unsigned long long totalTiles; // @synthesize totalTiles=_totalTiles;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;

@end

