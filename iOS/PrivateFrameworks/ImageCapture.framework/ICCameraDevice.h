//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ImageCapture/ICDevice.h>

@class NSArray, NSNumber, NSString;

@interface ICCameraDevice : ICDevice
{
    void *_cameraProperties;
    _Bool _basicMediaModel;
    _Bool _isEnumeratingContent;
    NSString *_buildVersion;
    NSString *_deviceClass;
    NSString *_deviceColor;
    NSString *_deviceEnclosureColor;
    NSNumber *_devicePairedState;
    NSString *_productType;
    NSString *_productVersion;
    NSArray *_supportedSidecarFiles;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly) _Bool isEnumeratingContent; // @synthesize isEnumeratingContent=_isEnumeratingContent;
@property(readonly) NSArray *supportedSidecarFiles; // @synthesize supportedSidecarFiles=_supportedSidecarFiles;
@property(readonly) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(readonly) NSString *productType; // @synthesize productType=_productType;
@property(readonly) NSNumber *devicePairedState; // @synthesize devicePairedState=_devicePairedState;
@property(readonly) NSString *deviceEnclosureColor; // @synthesize deviceEnclosureColor=_deviceEnclosureColor;
@property(readonly) NSString *deviceColor; // @synthesize deviceColor=_deviceColor;
@property(readonly) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property _Bool basicMediaModel; // @synthesize basicMediaModel=_basicMediaModel;
- (_Bool)applePTPCapable;
- (void)removeFolder:(id)arg1;
- (void)addFolder:(id)arg1;
- (void)cancelDownload;
- (void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)requestEject;
- (void)requestDeleteFiles:(id)arg1;
- (void)dispatchAsyncForOperationType:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)requestSyncClock;
- (void)requestCloseSession;
- (void)requestOpenSessionWithOptions:(id)arg1;
- (void)requestOpenSession;
- (void)aptpUpdateFilesWithCommand:(id)arg1 andData:(id)arg2;
- (id)cameraFileWithUUID:(id)arg1;
- (id)cameraFileWithObjectID:(unsigned long long)arg1;
- (id)indexedCameraFiles;
- (id)cameraFolderWithObjectID:(unsigned long long)arg1;
- (id)indexedCameraFolders;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
- (id)filesOfType:(id)arg1;
- (void)processAddedFiles:(id)arg1;
- (void)popMediaFiles:(id)arg1;
- (void)pushMediaFiles:(id)arg1;
- (void)removeCameraFileFromIndex:(id)arg1;
- (void)addCameraFileToIndex:(id)arg1;
- (void)removeCameraFolderFromIndex:(id)arg1;
- (void)addCameraFolderToIndex:(id)arg1;
- (_Bool)updateMediaPresentation;
@property unsigned long long mediaPresentation;
- (id)cameraFileIndexesMatchingDateCriteria:(id)arg1;
- (void)removeMediaFile:(id)arg1;
- (_Bool)addMediaFiles:(id)arg1;
- (void)discardCameraFiles:(id)arg1;
- (_Bool)addMediaFile:(id)arg1;
- (id)addCameraFiles:(id)arg1;
- (id)relateMedia:(id)arg1;
- (id)relateGroupedMedia:(id)arg1;
- (id)relateLegacyMedia:(id)arg1;
- (void)grindMedia:(id [10])arg1 index:(int *)arg2 file:(id)arg3;
- (void)blendMedia:(id [10])arg1 ofLength:(int)arg2 withMedia:(id [10])arg3 ofLength:(int)arg4;
- (long long)stitchMedia:(id)arg1 withMedia:(id)arg2;
- (id)ownerMedia:(id)arg1 withMedia:(id)arg2;
@property(readonly) NSArray *mediaFiles;
@property(readonly) NSArray *contents;
- (void)pendNotifyingDelegateOfAddedItem:(id)arg1;
- (void)notifyDelegateOfAddedItems:(id)arg1;
- (void)notifyDelegateOfAddedItem:(id)arg1;
- (void)resetFailureCount;
- (unsigned int)increaseDeviceFailureCount;
@property long long enumerationOrder;
- (void)setApplePTPObjectLimit:(id)arg1;
- (id)applePTPObjectLimit;
- (id)applePTPFiles;
- (id)deviceCommandQueue;
- (id)deviceNotificationQueue;
@property(getter=isApplePTPCapable) _Bool applePTPCapable;
- (_Bool)legacyDevice;
- (void)setAppleRelatedUUIDSupport:(unsigned long long)arg1;
- (_Bool)supportsMediaFormatCatalog;
@property _Bool iCloudPhotosEnabled;
@property(getter=isAccessRestrictedAppleDevice) _Bool accessRestrictedAppleDevice;
@property unsigned long long contentCatalogPercentCompleted;
- (void)incrementNumberOfDownloadableItems;
- (void)decrementNumberOfDownloadableItems;
@property unsigned long long numberOfDownloadableItems;
- (void)incrementEstimatedNumberOfDownloadableItems;
- (void)decrementEstimatedNumberOfDownloadableItems;
@property unsigned long long estimatedNumberOfDownloadableItems;
- (double)downloadCancelTimestamp;
@property(readonly) double timeOffset;
@property(readonly) unsigned long long batteryLevel;
@property(readonly) _Bool batteryLevelAvailable;
@property _Bool allowsSyncingClock;
@property(getter=isLocked) _Bool locked;
@property _Bool beingEjected;
@property(getter=isEjectable) _Bool ejectable;
@property(copy) NSString *volumePath;
- (void)dealloc;
- (id)description;
- (id)init;

@end
