//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalCoding, HKMedicalDate, NSArray;

@interface HKAllergyReaction : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_manifestionCodings;
    HKMedicalDate *_onsetDate;
    HKMedicalCoding *_severityCoding;
}

+ (_Bool)supportsSecureCoding;
+ (id)allergyReactionWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3;
+ (id)severityCodingPreferredSystems;
+ (id)manifestationCodingsPreferredSystems;
@property(readonly, copy, nonatomic) HKMedicalCoding *severityCoding; // @synthesize severityCoding=_severityCoding;
@property(readonly, copy, nonatomic) HKMedicalDate *onsetDate; // @synthesize onsetDate=_onsetDate;
@property(readonly, copy, nonatomic) NSArray *manifestionCodings; // @synthesize manifestionCodings=_manifestionCodings;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3;
- (id)init;

@end
