//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKNanoSyncPairedDeviceInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_sourceBundleIdentifier;
    NSString *_systemBuildVersion;
    NSString *_productType;
    unsigned long long _state;
    int _protocolVersion;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly) int protocolVersion;
@property(readonly, getter=isRestoreComplete) _Bool restoreComplete;
@property(readonly, getter=isActive) _Bool active;
@property(readonly, copy) NSString *productType;
@property(readonly, copy) NSString *systemBuildVersion;
@property(readonly, copy) NSString *sourceBundleIdentifier;
- (id)initWithSourceBundleIdentifier:(id)arg1 systemBuildVersion:(id)arg2 productType:(id)arg3 active:(_Bool)arg4 restoreComplete:(_Bool)arg5 protocolVersion:(int)arg6;

@end
