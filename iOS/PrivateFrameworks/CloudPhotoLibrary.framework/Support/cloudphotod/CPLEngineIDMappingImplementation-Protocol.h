//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLScopedIdentifier, NSString;

@protocol CPLEngineIDMappingImplementation <CPLEngineStorageImplementation>
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)addAddEventForRecordWithLocalScopedIdentifier:(CPLScopedIdentifier *)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addDeleteEventForRecordWithLocalScopedIdentifier:(CPLScopedIdentifier *)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)removeMappingForCloudScopedIdentifier:(CPLScopedIdentifier *)arg1 error:(id *)arg2;
- (_Bool)hasPendingIdentifiers;
- (_Bool)markAllPendingIdentifiersForScopeWithIdentifier:(NSString *)arg1 asFinalWithError:(id *)arg2;
- (_Bool)setFinalCloudScopedIdentifier:(CPLScopedIdentifier *)arg1 forPendingCloudScopedIdentifier:(CPLScopedIdentifier *)arg2 error:(id *)arg3;
- (_Bool)addCloudScopedIdentifier:(CPLScopedIdentifier *)arg1 forLocalScopedIdentifier:(CPLScopedIdentifier *)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;
- (CPLScopedIdentifier *)localScopedIdentifierForCloudScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(_Bool *)arg2;
- (CPLScopedIdentifier *)cloudScopedIdentifierForLocalScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(_Bool *)arg2;
@end

