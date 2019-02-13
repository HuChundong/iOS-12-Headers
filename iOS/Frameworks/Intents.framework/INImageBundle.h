//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INImageBundle : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundlePath;
    NSString *_bundleIdentifier;
    unsigned long long _bundleType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long bundleType; // @synthesize bundleType=_bundleType;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
