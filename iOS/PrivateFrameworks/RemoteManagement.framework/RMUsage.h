//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, RMCoreDevice, RMCoreUser;

@interface RMUsage : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSSet *blocks; // @dynamic blocks;
@property(retain, nonatomic) RMCoreDevice *device; // @dynamic device;
@property(retain, nonatomic) NSDate *lastEventDate; // @dynamic lastEventDate;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @dynamic lastUpdatedDate;
@property(retain, nonatomic) RMCoreUser *user; // @dynamic user;
@end

