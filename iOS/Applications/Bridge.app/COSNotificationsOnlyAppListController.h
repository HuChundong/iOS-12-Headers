//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BridgePreferences/BPSNotificationAppController.h>

@class NSString;

@interface COSNotificationsOnlyAppListController : BPSNotificationAppController
{
    NSString *_bundleID;
    NSString *_paneTitle;
}

@property(copy, nonatomic) NSString *paneTitle; // @synthesize paneTitle=_paneTitle;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)localizedMirroringDetailFooter;
- (id)localizedPaneTitle;
- (id)applicationBundleIdentifier;
- (void)setSpecifier:(id)arg1;

@end
