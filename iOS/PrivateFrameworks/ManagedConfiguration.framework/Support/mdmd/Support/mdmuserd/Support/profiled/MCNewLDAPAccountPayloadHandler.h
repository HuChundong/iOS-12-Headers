//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCACAccountPayloadHandler.h"

#import "DAValidityCheckConsumer-Protocol.h"

@class NSError, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface MCNewLDAPAccountPayloadHandler : MCACAccountPayloadHandler <DAValidityCheckConsumer>
{
    NSObject<OS_dispatch_semaphore> *_doneSema;
    _Bool _validationComplete;
    NSError *_validationError;
}

- (void).cxx_destruct;
- (void)remove;
- (void)unsetAside;
- (void)setAsideWithInstaller:(id)arg1;
- (_Bool)isInstalled;
- (id)accountTypeIdentifiers;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (id)_reallyInstallInstaller:(id)arg1 isInstalledByMDM:(_Bool)arg2;
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;
- (void)_preflightWithAccount:(id)arg1;
- (void)account:(id)arg1 isValid:(_Bool)arg2 validationError:(id)arg3;
- (id)_errorFromValidationError:(id)arg1;
- (id)_accountFromPayloadWithUserInputResponses:(id)arg1;
- (id)unhashedAccountIdentifier;
- (void)setUserInputResponses:(id)arg1;
- (id)userInputFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

