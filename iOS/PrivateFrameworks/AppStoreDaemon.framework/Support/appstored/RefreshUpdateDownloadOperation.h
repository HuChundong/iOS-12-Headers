//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface RefreshUpdateDownloadOperation : ISOperation
{
    _Bool _userInitiated;
    NSString *_bundleID;
}

@property(nonatomic, getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (_Bool)_purchaseAutoUpdatePurchaseWithUpdate:(id)arg1 isBackground:(_Bool)arg2 error:(id *)arg3;
- (void)run;
- (id)initWithDownloadBundleIdentifier:(id)arg1;

@end

