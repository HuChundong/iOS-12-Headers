//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapView, NVMainWindowController, VKMapView;

__attribute__((visibility("hidden")))
@interface StateCapture : NSObject
{
    unsigned long long _handle;
    MKMapView *_mapView;
    NVMainWindowController *_mainWindowController;
    VKMapView *_vkMapView;
}

+ (struct os_state_data_s *)stateDataForDictionary:(id)arg1 title:(id)arg2;
+ (id)sharedManager;
@property(readonly) VKMapView *vkMapView; // @synthesize vkMapView=_vkMapView;
@property(readonly) NVMainWindowController *mainWindowController; // @synthesize mainWindowController=_mainWindowController;
@property(readonly) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (struct os_state_data_s *)_stateCapture;
- (void)unregisterHandlerforStateCapture;
- (void)registerHandlerforStateCapture;

@end

