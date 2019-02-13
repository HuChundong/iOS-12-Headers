//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MCMClientConnection : NSObject
{
    NSMutableDictionary *_sanitizedLookup;
    _Bool _entitled;
    _Bool _allowOtherIdLookup;
    _Bool _allowGroupIdLookup;
    _Bool _unrestricted;
    unsigned int _clientUserId;
    NSString *_clientBundleIdentifier;
    NSArray *_entitledWipeIdentifiers;
    NSDictionary *_lookup;
}

+ (id)sharedClientConnection;
@property(readonly, nonatomic) NSDictionary *lookup; // @synthesize lookup=_lookup;
@property(retain, nonatomic) NSArray *entitledWipeIdentifiers; // @synthesize entitledWipeIdentifiers=_entitledWipeIdentifiers;
@property(nonatomic) _Bool unrestricted; // @synthesize unrestricted=_unrestricted;
@property(nonatomic) _Bool allowGroupIdLookup; // @synthesize allowGroupIdLookup=_allowGroupIdLookup;
@property(nonatomic) _Bool allowOtherIdLookup; // @synthesize allowOtherIdLookup=_allowOtherIdLookup;
@property(nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) unsigned int clientUserId; // @synthesize clientUserId=_clientUserId;
@property(retain, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
- (void).cxx_destruct;
- (id)_setOfStringsFromArray:(id)arg1;
- (id)_lookupForContainerClass:(unsigned long long)arg1;
- (_Bool)isEntitledForLookupWithClass:(unsigned long long)arg1 identifier:(id)arg2;
- (void)deleteUserManagedAssetForUser:(unsigned int)arg1 identifier:(id)arg2 relativePath:(id)arg3 withError:(unsigned long long *)arg4;
- (id)userManagedAssetsPathForUser:(unsigned int)arg1 identifier:(id)arg2 isRelative:(_Bool)arg3 createIfNecessary:(_Bool)arg4 existed:(_Bool *)arg5 withError:(unsigned long long *)arg6;
- (void)setNetworkExtensionForUser:(unsigned int)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 withError:(unsigned long long *)arg4;
- (id)stageSharedContentForIdentifier:(id)arg1 sourceRelativePath:(id)arg2 destRelativePath:(id)arg3 withError:(unsigned long long *)arg4;
- (void)retryTestForUser:(unsigned int)arg1 withNumCrashes:(unsigned long long)arg2 withError:(unsigned long long *)arg3;
- (unsigned long long)diskUsageForUserId:(unsigned int)arg1 uuid:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 withError:(unsigned long long *)arg5;
- (void)deleteDataContainerContentForUser:(unsigned int)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 withError:(unsigned long long *)arg4;
- (void)deleteContainerForUser:(unsigned int)arg1 withIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 transient:(_Bool)arg4 withError:(unsigned long long *)arg5;
- (void)regenerateDirectoryUUIDForUser:(unsigned int)arg1 withInternalUUID:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 withError:(unsigned long long *)arg5;
- (void)_regenerateAllSystemContainerPaths;
- (void)recreateDefaultStructureForUser:(unsigned int)arg1 withUUID:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 withError:(unsigned long long *)arg5;
- (id)metadataForUser:(unsigned int)arg1 withUUID:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 withError:(unsigned long long *)arg5;
- (id)infoValueForKey:(id)arg1 userId:(unsigned int)arg2 uuid:(id)arg3 identifier:(id)arg4 containerClass:(unsigned long long)arg5 useLocking:(_Bool)arg6 withError:(unsigned long long *)arg7;
- (void)setInfoValue:(id)arg1 forKey:(id)arg2 userId:(unsigned int)arg3 uuid:(id)arg4 identifier:(id)arg5 containerClass:(unsigned long long)arg6 useLocking:(_Bool)arg7 withError:(unsigned long long *)arg8;
- (void)deleteContainersOnDeathRowWithCompletion:(CDUnknownBlockType)arg1;
- (void)stageForDeleteContainersWithUsers:(id)arg1 UUIDs:(id)arg2 identifiers:(id)arg3 classes:(id)arg4 useLocking:(_Bool)arg5 withError:(unsigned long long *)arg6;
- (void)replaceContainer:(id)arg1 withContainer:(id)arg2 userIdOld:(unsigned int)arg3 userIdNew:(unsigned int)arg4 identifierOld:(id)arg5 identifierNew:(id)arg6 containerClassOld:(unsigned long long)arg7 containerClassNew:(unsigned long long)arg8 preserveOldUUID:(_Bool)arg9 startDeletionThread:(_Bool)arg10 withError:(unsigned long long *)arg11;
- (id)containersForUser:(unsigned int)arg1 withClass:(unsigned long long)arg2 transient:(_Bool)arg3 withError:(unsigned long long *)arg4;
- (id)createOrLookupContainerForUser:(unsigned int)arg1 identifier:(id)arg2 createIfNecessary:(_Bool)arg3 containerClass:(unsigned long long)arg4 transient:(_Bool)arg5 useLocking:(_Bool)arg6 withError:(unsigned long long *)arg7;
- (void)rebootContainerManagerCleanup;
- (void)rebootContainerManagerSetup;
- (void)_cleanupOrphanedDataForUser:(unsigned int)arg1 containerClass:(unsigned long long)arg2;
- (void)containerManagerCleanup;
- (void)containerManagerSetup;
- (id)initWithBundleId:(id)arg1 clientUserId:(unsigned int)arg2 entitled:(_Bool)arg3 allowOtherIdLookup:(_Bool)arg4 unrestricted:(_Bool)arg5 lookup:(id)arg6 entitledWipeIdentifiers:(id)arg7;
- (id)initWithBundleId:(id)arg1 unrestricted:(_Bool)arg2;
- (_Bool)_recoverFromReplaceOperationsWithError:(id *)arg1;
- (_Bool)_writeToDiskReplaceAt:(id)arg1 old:(id)arg2 withNew:(id)arg3 usingStaging:(id)arg4 toDestination:(id)arg5 error:(id *)arg6;
- (id)_readAndValidateReplaceFileAtUrl:(id)arg1 error:(id *)arg2;
- (_Bool)_moveItemAtURLToDeathRow:(id)arg1 isDir:(_Bool)arg2 startDeletionThread:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_createSubDirectories:(id)arg1 containerMetadata:(id)arg2 error:(id *)arg3;
- (_Bool)_removeItemOrMoveToTempAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)_createTopLevelContainerDirectory:(id)arg1 containerClass:(unsigned long long)arg2 owner:(unsigned int)arg3 error:(id *)arg4;

@end
