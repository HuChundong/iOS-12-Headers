//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MRDInitiatePlaybackMessage : NSObject
{
    NSString *_bundleID;
    NSData *_indexPathData;
}

@property(readonly, nonatomic) NSData *indexPathData; // @synthesize indexPathData=_indexPathData;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)arg1 indexPathData:(id)arg2;

@end

