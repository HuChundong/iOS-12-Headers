//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSMutableSet;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding>
{
    NSMutableSet *_set;
}

+ (_Bool)supportsSecureCoding;
+ (id)uniqueKeycodeFromExplanation:(unsigned char)arg1;
+ (id)stringFromExplanation:(unsigned char)arg1;
- (void).cxx_destruct;
- (_Bool)isEqualToQuickTypeExplanationSet:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)count;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (void)push:(unsigned char)arg1;
- (id)init;

@end
