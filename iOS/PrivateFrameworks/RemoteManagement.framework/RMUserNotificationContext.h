//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/NSSecureCoding-Protocol.h>

@class NSArray, NSString, UNNotificationTrigger;

@interface RMUserNotificationContext : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSArray *_localizedUserNotificationBodyArguments;
    UNNotificationTrigger *_trigger;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) UNNotificationTrigger *trigger; // @synthesize trigger=_trigger;
@property(copy, nonatomic) NSArray *localizedUserNotificationBodyArguments; // @synthesize localizedUserNotificationBodyArguments=_localizedUserNotificationBodyArguments;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)notificationBundleIdentifier;
- (id)destinations;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)notificationContentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end
