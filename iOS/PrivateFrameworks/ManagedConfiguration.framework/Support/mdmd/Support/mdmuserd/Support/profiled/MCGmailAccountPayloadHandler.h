//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class NSDictionary;

@interface MCGmailAccountPayloadHandler : MCNewPayloadHandler
{
    NSDictionary *_setAsideAccountDictionary;
}

@property(retain, nonatomic) NSDictionary *setAsideAccountDictionary; // @synthesize setAsideAccountDictionary=_setAsideAccountDictionary;
- (void).cxx_destruct;
- (void)unsetAside;
- (void)setAside;
- (void)remove;
- (void)_remove;
- (_Bool)isInstalled;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (id)_installWithAccountDictionary:(id)arg1;
- (id)accountDictionaryWithIsInstalledByMDM:(_Bool)arg1;
- (id)MCACAccountIdentifier;
- (id)unhashedAccountIdentifier;
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;

@end

