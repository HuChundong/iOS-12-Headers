//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface UsedApp : NSObject <NSCopying>
{
    _Bool _usingLasModified;
    NSString *_bundleID;
    NSDate *_lastLaunched;
    NSString *_matchedBucket;
    long long _usageWindowMatchType;
}

@property(nonatomic) _Bool usingLasModified; // @synthesize usingLasModified=_usingLasModified;
@property(nonatomic) long long usageWindowMatchType; // @synthesize usageWindowMatchType=_usageWindowMatchType;
@property(copy, nonatomic) NSString *matchedBucket; // @synthesize matchedBucket=_matchedBucket;
@property(copy, nonatomic) NSDate *lastLaunched; // @synthesize lastLaunched=_lastLaunched;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleID:(id)arg1;

@end
