//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@interface EKPersistentSharee : EKPersistentObject
{
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
- (id)description;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void)setShareeAccessLevel:(int)arg1;
- (int)shareeAccessLevel;
- (void)setShareeStatus:(int)arg1;
- (int)shareeStatus;
- (void)setExternalID:(id)arg1;
- (id)externalID;
- (void)setLastName:(id)arg1;
- (id)lastName;
- (void)setFirstName:(id)arg1;
- (id)firstName;
- (void)setAddress:(id)arg1;
- (id)address;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (void)setUUID:(id)arg1;
- (id)UUID;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

