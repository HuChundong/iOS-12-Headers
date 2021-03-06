//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLAssetsdClientService-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface PLAssetsdClientServiceSender : NSObject <PLAssetsdClientService>
{
    NSObject<OS_xpc_object> *_connection;
}

- (void)resourceURLReceivedForIdentifier:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)assetAvailableForIdentifier:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)downloadFinishedForIdentifier:(id)arg1 success:(_Bool)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(_Bool)arg3 data:(id)arg4 error:(id)arg5;
- (void)_sendMessageForTaskIdentifier:(id)arg1 operation:(long long)arg2 configurationBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

