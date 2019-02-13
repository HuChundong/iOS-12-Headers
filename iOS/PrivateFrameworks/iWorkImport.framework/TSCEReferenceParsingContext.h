//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString, TSCEAbortObject, TSCEQuotedRefPathSplitter;
@protocol TSCEReferenceResolving;

__attribute__((visibility("hidden")))
@interface TSCEReferenceParsingContext : NSObject <NSCopying>
{
    _Bool _filterColons;
    _Bool _referenceIsComplete;
    _Bool _parseAsBaseTableReference;
    _Bool _trimNames;
    _Bool _namesUsed;
    struct TSUPreserveFlags _preserveFlags;
    struct TSCETableResolver *_contextTableResolver;
    NSString *_contextSheetName;
    NSArray *_components;
    NSString *_aggregateFunction;
    TSCEQuotedRefPathSplitter *_refPathSplitter;
    TSCEAbortObject *_abortObject;
    NSString *_sheetName;
    NSString *_tableName;
    NSString *_rest;
    NSString *_sheetNameUnquoted;
    NSString *_tableNameUnquoted;
    NSMutableArray *_referencesMatchingInputAsPrefix;
}

@property(retain, nonatomic) NSMutableArray *referencesMatchingInputAsPrefix; // @synthesize referencesMatchingInputAsPrefix=_referencesMatchingInputAsPrefix;
@property(retain, nonatomic) NSString *tableNameUnquoted; // @synthesize tableNameUnquoted=_tableNameUnquoted;
@property(retain, nonatomic) NSString *sheetNameUnquoted; // @synthesize sheetNameUnquoted=_sheetNameUnquoted;
@property(retain, nonatomic) NSString *rest; // @synthesize rest=_rest;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) NSString *sheetName; // @synthesize sheetName=_sheetName;
@property(nonatomic) struct TSUPreserveFlags preserveFlags; // @synthesize preserveFlags=_preserveFlags;
@property(nonatomic) _Bool namesUsed; // @synthesize namesUsed=_namesUsed;
@property(nonatomic) _Bool trimNames; // @synthesize trimNames=_trimNames;
@property(nonatomic) _Bool parseAsBaseTableReference; // @synthesize parseAsBaseTableReference=_parseAsBaseTableReference;
@property(retain, nonatomic) TSCEAbortObject *abortObject; // @synthesize abortObject=_abortObject;
@property(nonatomic) _Bool referenceIsComplete; // @synthesize referenceIsComplete=_referenceIsComplete;
@property(nonatomic) _Bool filterColons; // @synthesize filterColons=_filterColons;
@property(retain, nonatomic) TSCEQuotedRefPathSplitter *refPathSplitter; // @synthesize refPathSplitter=_refPathSplitter;
@property(retain, nonatomic) NSString *aggregateFunction; // @synthesize aggregateFunction=_aggregateFunction;
@property(retain, nonatomic) NSArray *components; // @synthesize components=_components;
@property(retain, nonatomic) NSString *contextSheetName; // @synthesize contextSheetName=_contextSheetName;
@property(nonatomic) struct TSCETableResolver *contextTableResolver; // @synthesize contextTableResolver=_contextTableResolver;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <TSCEReferenceResolving> contextResolver;
- (id)initWithContextResolver:(id)arg1;
- (id)initWithContextResolver:(id)arg1 components:(id)arg2;
- (id)initWithContextTableResolver:(struct TSCETableResolver *)arg1;
- (id)initWithContextTableResolver:(struct TSCETableResolver *)arg1 components:(id)arg2;

@end
