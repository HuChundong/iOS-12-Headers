//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface SFAppleIDIdentity : NSObject <NSSecureCoding>
{
    NSString *_encDSID;
    _Bool _linkedToCurrentUser;
    NSString *_accountIdentifier;
    NSString *_altDSID;
    NSString *_appleID;
    NSDate *_certificateExpirationDate;
    NSData *_certificatePersistentReference;
    NSData *_intermediateCertificatePersistentReference;
    NSDate *_lastValidationAttemptDate;
    NSDate *_lastValidationDate;
    NSDate *_modificationDate;
    NSData *_privateKeyPersistentReference;
    NSString *_serialNumber;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSData *privateKeyPersistentReference; // @synthesize privateKeyPersistentReference=_privateKeyPersistentReference;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) _Bool linkedToCurrentUser; // @synthesize linkedToCurrentUser=_linkedToCurrentUser;
@property(retain, nonatomic) NSDate *lastValidationDate; // @synthesize lastValidationDate=_lastValidationDate;
@property(retain, nonatomic) NSDate *lastValidationAttemptDate; // @synthesize lastValidationAttemptDate=_lastValidationAttemptDate;
@property(retain, nonatomic) NSData *intermediateCertificatePersistentReference; // @synthesize intermediateCertificatePersistentReference=_intermediateCertificatePersistentReference;
@property(retain, nonatomic) NSData *certificatePersistentReference; // @synthesize certificatePersistentReference=_certificatePersistentReference;
@property(retain, nonatomic) NSDate *certificateExpirationDate; // @synthesize certificateExpirationDate=_certificateExpirationDate;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;
- (int)verifyKeys;
- (void)removeFromKeychain;
- (struct __SecIdentity *)copyIdentity;
@property(readonly, nonatomic) _Bool needsRenewal;
@property(readonly, nonatomic) _Bool isInvalid;
@property(readonly, nonatomic) _Bool certificateExpired;
-     // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}16@0:8, name: copyPrivateKey
- (struct __SecCertificate *)copyIntermediateCertificate;
- (struct __SecCertificate *)copyCertificateWithType:(long long)arg1;
- (struct __SecCertificate *)copyCertificate;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;
- (_Bool)isEqualToIdentity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
