//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface NCNotificationHiddenRequestsList : NSObject
{
    NSMutableSet *_hiddenSectionStrings;
    NSMutableDictionary *_hiddenRequests;
}

@property(retain, nonatomic) NSMutableDictionary *hiddenRequests; // @synthesize hiddenRequests=_hiddenRequests;
@property(retain, nonatomic) NSMutableSet *hiddenSectionStrings; // @synthesize hiddenSectionStrings=_hiddenSectionStrings;
- (void).cxx_destruct;
- (id)_requestsMatchingRequest:(id)arg1 inSet:(id)arg2;
- (id)_storageStringForSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)hiddenNotificationRequestsForSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (_Bool)isHiddenSectionIdentifer:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)removeHiddenSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)addHiddenSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (_Bool)isHiddenNotificationRequest:(id)arg1;
- (_Bool)containsHiddenNotificationRequest:(id)arg1;
- (void)removeHiddenNotificationRequest:(id)arg1;
- (void)replaceHiddenNotificationRequest:(id)arg1;
- (void)addHiddenNotificationRequest:(id)arg1;
- (void)clearAllNotificationRequests;
@property(readonly, nonatomic) NSSet *allNotificationRequests;
- (id)init;

@end

