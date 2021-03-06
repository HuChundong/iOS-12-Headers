//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol LaunchAlertsManagerDelegate;

__attribute__((visibility("hidden")))
@interface LaunchAlertsManager : NSObject
{
    unsigned long long _currentAlertNumber;
    NSMutableArray *_alertsArray;
    _Bool _alertsProcessed;
    id <LaunchAlertsManagerDelegate> _delegate;
}

+ (id)sharedManager;
@property(nonatomic) __weak id <LaunchAlertsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_getAlertObjectOfType:(long long)arg1;
- (void)_executeNextAlert:(id)arg1;
- (void)_executeFirstAlert;
@property(readonly, nonatomic) _Bool currentlyShowingAlert;
- (void)cancelAlertIfNecessary:(long long)arg1;
- (void)addAlert:(long long)arg1;
- (void)displayAlertsIfNecessary;
- (id)init;

@end

