//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, NSSet, NSString;
@protocol TSCEReferenceResolving;

@protocol TSCEResolverContainer <NSObject>
- (void)clearRemappedTableNames;
- (NSSet *)remappedTableNames;
- (void)addRemappedTableName:(NSString *)arg1;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned int)saveNextUntitledResolverIndex;
- (unsigned int)nextUntitledResolverIndex;
- (_Bool)resolverNameIsUsed:(NSString *)arg1;
- (NSArray *)resolversMatchingPrefix:(NSString *)arg1;
- (id <TSCEReferenceResolving>)resolverMatchingName:(NSString *)arg1;
@end
