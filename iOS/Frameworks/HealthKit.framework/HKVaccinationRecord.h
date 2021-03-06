//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalCoding, HKMedicalDate, HKVaccinationRecordType, NSArray, NSString;

@interface HKVaccinationRecord : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    NSArray *_vaccinationCodings;
    HKMedicalDate *_expirationDate;
    NSString *_doseNumber;
    NSString *_doseQuantity;
    NSString *_performer;
    NSArray *_bodySiteCoding;
    NSString *_reaction;
    _Bool _notGiven;
    HKMedicalDate *_administrationDate;
    HKMedicalCoding *_statusCoding;
    _Bool _patientReported;
    NSArray *_routeCodings;
    NSArray *_reasonsCodings;
    NSArray *_reasonsNotGivenCodings;
}

+ (_Bool)_isConcreteObjectClass;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 vaccinationCodings:(id)arg10 expirationDate:(id)arg11 doseNumber:(id)arg12 doseQuantity:(id)arg13 performer:(id)arg14 bodySiteCoding:(id)arg15 reaction:(id)arg16 notGiven:(_Bool)arg17 administrationDate:(id)arg18 statusCoding:(id)arg19 patientReported:(_Bool)arg20 routeCodings:(id)arg21 reasonsCodings:(id)arg22 reasonsNotGivenCodings:(id)arg23;
+ (id)defaultDisplayString;
+ (id)vaccinationCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (id)routeCodingsPreferredSystems;
+ (id)reasonsNotGivenCodingsPreferredSystems;
+ (id)reasonsCodingsPreferredSystems;
+ (id)bodySiteCodingPreferredSystems;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 vaccinationCodings:(id)arg9 expirationDate:(id)arg10 doseNumber:(id)arg11 doseQuantity:(id)arg12 performer:(id)arg13 bodySiteCoding:(id)arg14 reaction:(id)arg15 notGiven:(_Bool)arg16 administrationDate:(id)arg17 statusCoding:(id)arg18 patientReported:(_Bool)arg19 routeCodings:(id)arg20 reasonsCodings:(id)arg21 reasonsNotGivenCodings:(id)arg22;
- (void).cxx_destruct;
@property(readonly, copy) HKVaccinationRecordType *vaccinationRecordType;
- (id)_validateConfiguration;
- (void)_setReasonsNotGivenCodings:(id)arg1;
@property(readonly, copy) NSArray *reasonsNotGivenCodings;
- (void)_setReasonsCodings:(id)arg1;
@property(readonly, copy) NSArray *reasonsCodings;
- (void)_setRouteCodings:(id)arg1;
@property(readonly, copy) NSArray *routeCodings;
- (void)_setPatientReported:(_Bool)arg1;
@property(readonly) _Bool patientReported;
- (void)_setStatusCoding:(id)arg1;
@property(readonly, copy) HKMedicalCoding *statusCoding;
- (void)_setAdministrationDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *administrationDate;
- (void)_setNotGiven:(_Bool)arg1;
@property(readonly) _Bool notGiven;
- (void)_setReaction:(id)arg1;
@property(readonly, copy) NSString *reaction;
- (void)_setBodySiteCoding:(id)arg1;
@property(readonly, copy) NSArray *bodySiteCoding;
- (void)_setPerformer:(id)arg1;
@property(readonly, copy) NSString *performer;
- (void)_setDoseQuantity:(id)arg1;
@property(readonly, copy) NSString *doseQuantity;
- (void)_setDoseNumber:(id)arg1;
@property(readonly, copy) NSString *doseNumber;
- (void)_setExpirationDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *expirationDate;
- (void)_setVaccinationCodings:(id)arg1;
@property(readonly, copy) NSArray *vaccinationCodings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)medicalRecordPreferredSystems;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)vaccinationCodingsTasks;
- (id)statusCodingTasks;
- (id)routeCodingsTasks;
- (id)reasonsNotGivenCodingsTasks;
- (id)reasonsCodingsTasks;
- (id)bodySiteCodingTasks;

@end

