//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SUManagedDeviceUpdateDelay;
@protocol SUManagedDeviceManagerDelegate;

@interface SUManagedDeviceManager : NSObject
{
    SUManagedDeviceUpdateDelay *mdmDelay;
    id <SUManagedDeviceManagerDelegate> _delegate;
    SUManagedDeviceUpdateDelay *_mdmDelay;
}

+ (id)sharedInstance;
@property(nonatomic) id <SUManagedDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SUManagedDeviceUpdateDelay *mdmDelay; // @synthesize mdmDelay=_mdmDelay;
- (_Bool)isDelayed;
- (id)delayedStartDate;
- (_Bool)shouldDelayUpdate:(id)arg1;
- (void)startDelayWindow:(id)arg1;
- (void)refreshDelayedState;
- (void)profileChanged;
- (void)unregisterProfileChangeListener;
- (void)registerProfileChangeListener;
- (void)dealloc;
- (id)init;

@end
