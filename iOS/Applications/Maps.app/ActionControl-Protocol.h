//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol ActionCoordination;

@protocol ActionControl <NSObject>
@property(readonly, nonatomic) _Bool isActive;
@property(nonatomic) __weak id <ActionCoordination> coordinator;
- (void)deactivateWithContext:(NSDictionary *)arg1;
@end

