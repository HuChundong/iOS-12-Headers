//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDDeviceInfoDataSourceDelegate-Protocol.h"
#import "MRDNowPlayingDataSourceDelegate-Protocol.h"

@class MRDDeviceInfoDataSource, MRDMediaRemoteClient, MRDNowPlayingClient, MRDNowPlayingDataSource, MRMutableApplicationActivity, NSArray, NSMutableArray, NSString, _MRDeviceInfoMessageProtobuf, _MRNowPlayingPlayerPathProtobuf, _MROriginProtobuf;
@protocol MRDNowPlayingOriginClientDelegate, OS_dispatch_queue;

@interface MRDNowPlayingOriginClient : NSObject <MRDNowPlayingDataSourceDelegate, MRDDeviceInfoDataSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_nowPlayingClients;
    unsigned int _volumeControlCapabilities;
    float _volume;
    MRDNowPlayingClient *_explicitNowPlayingClient;
    MRDNowPlayingClient *_activeNowPlayingClient;
    _Bool _anyAppIsPlaying;
    _MROriginProtobuf *_origin;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    MRMutableApplicationActivity *_activity;
    MRDMediaRemoteClient *_overrideClient;
    MRDNowPlayingDataSource *_nowPlayingDataSource;
    MRDDeviceInfoDataSource *_deviceInfoDataSource;
    id <MRDNowPlayingOriginClientDelegate> _delegate;
    MRDNowPlayingClient *_computedNowPlayingClient;
    MRDNowPlayingClient *_inferredNowPlayingClient;
}

@property(retain, nonatomic) MRDNowPlayingClient *inferredNowPlayingClient; // @synthesize inferredNowPlayingClient=_inferredNowPlayingClient;
@property(retain, nonatomic) MRDNowPlayingClient *computedNowPlayingClient; // @synthesize computedNowPlayingClient=_computedNowPlayingClient;
@property(nonatomic) __weak id <MRDNowPlayingOriginClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool anyAppIsPlaying; // @synthesize anyAppIsPlaying=_anyAppIsPlaying;
@property(retain, nonatomic) MRDDeviceInfoDataSource *deviceInfoDataSource; // @synthesize deviceInfoDataSource=_deviceInfoDataSource;
@property(retain, nonatomic) MRDNowPlayingDataSource *nowPlayingDataSource; // @synthesize nowPlayingDataSource=_nowPlayingDataSource;
@property(retain, nonatomic) MRDNowPlayingClient *explicitNowPlayingClient; // @synthesize explicitNowPlayingClient=_explicitNowPlayingClient;
@property(retain, nonatomic) MRDMediaRemoteClient *overrideClient; // @synthesize overrideClient=_overrideClient;
@property(retain, nonatomic) MRMutableApplicationActivity *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) _MROriginProtobuf *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (_Bool)_didPlaybackEndRecently:(id)arg1;
- (id)_playerPathForNowPlayingClient:(id)arg1;
- (unsigned int)_stateFromDataSource:(id)arg1;
- (void)_registerCallbacks;
- (void)_reloadNowPlayingClientFromDataSource:(id)arg1;
- (id)_addNowPlayingClient:(id)arg1;
- (void)_updateActivityStatus:(int)arg1;
- (void)_reevaluateState;
- (id)_calculateComputedNowPlayingClient;
- (id)_calculateActiveNowPlayingClient;
- (_Bool)_calculateAnyAppIsPlaying;
- (_Bool)_shouldHandleNotification:(id)arg1;
- (void)_handleNowPlayingAppMaybeDidChange:(id)arg1;
- (void)deviceInfoDataSource:(id)arg1 deviceInfoDidChange:(id)arg2;
- (void)nowPlayingDataSourceAnyApplicationPlaybackStateDidChange:(id)arg1;
- (void)nowPlayingDataSourceNowPlayingApplicationPlaybackStateDidChange:(id)arg1;
- (void)nowPlayingDataSourceNowPlayingApplicationDidChange:(id)arg1;
- (void)removeNowPlayingClientForClient:(id)arg1;
- (id)existingNowPlayingClientForClient:(id)arg1;
- (id)existingNowPlayingClientForDisplayID:(id)arg1;
- (id)existingNowPlayingClientForPid:(int)arg1;
- (id)existingNowPlayingClientForPlayerPath:(id)arg1;
- (id)nowPlayingClientForClient:(id)arg1;
@property(readonly, nonatomic) _Bool isActivityActive;
@property(readonly, nonatomic) MRDNowPlayingClient *activeNowPlayingClient;
@property(readonly, nonatomic) NSArray *mostRecentPlayers;
@property(readonly, nonatomic) NSArray *nowPlayingClients;
- (void)flipVolumeControlCapabilityFlag:(unsigned int)arg1 enable:(_Bool)arg2;
@property(nonatomic) unsigned int volumeControlCapabilities;
@property(nonatomic) float volume;
- (void)updateDeviceInfo:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithOrigin:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
