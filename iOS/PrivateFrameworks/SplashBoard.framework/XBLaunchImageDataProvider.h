//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/XBSnapshotDataProvider-Protocol.h>

@class NSString, UIImage, XBDisplaySnapshot, XBSnapshotDataProviderContext;

@interface XBLaunchImageDataProvider : NSObject <XBSnapshotDataProvider>
{
    XBDisplaySnapshot *_snapshot;
    UIImage *_cachedImage;
    XBSnapshotDataProviderContext *_context;
}

@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)invalidateImage;
- (id)fetchImage;
- (id)initWithRequest:(id)arg1 contextID:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

