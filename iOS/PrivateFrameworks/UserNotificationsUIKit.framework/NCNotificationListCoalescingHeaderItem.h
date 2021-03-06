//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationListCoalescingItem-Protocol.h>

@class NSString;

@interface NCNotificationListCoalescingHeaderItem : NSObject <NCNotificationListCoalescingItem>
{
    NSString *_coalescingIdentifier;
    NSString *_sectionTitle;
}

@property(readonly, copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(readonly, copy, nonatomic) NSString *coalescingIdentifier; // @synthesize coalescingIdentifier=_coalescingIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long itemType;
- (id)initWithCoalescingIdentifier:(id)arg1 sectionTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

