//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSArray, NSData, NSDate, NSURL, TSKStructuredTextImportSettings, TSTCellRegion;

__attribute__((visibility("hidden")))
@interface TSTStructuredTextImportRecord : NSObject <NSCopying>
{
    _Bool _pasteWasUpdate;
    TSKStructuredTextImportSettings *_importSettings;
    NSURL *_importSource;
    NSDate *_importDate;
    NSData *_sourceData;
    double _confidence;
    TSTCellRegion *_importedRegion;
    unsigned long long _sourceColumnCount;
    unsigned long long _sourceRowCount;
    NSArray *_pasteInverseCommands;
    unsigned long long _pasteType;
}

+ (id)recordFromArchive:(const struct StructuredTextImportRecord *)arg1;
+ (id)record;
@property(nonatomic) _Bool pasteWasUpdate; // @synthesize pasteWasUpdate=_pasteWasUpdate;
@property(nonatomic) unsigned long long pasteType; // @synthesize pasteType=_pasteType;
@property(retain, nonatomic) NSArray *pasteInverseCommands; // @synthesize pasteInverseCommands=_pasteInverseCommands;
@property(nonatomic) unsigned long long sourceRowCount; // @synthesize sourceRowCount=_sourceRowCount;
@property(nonatomic) unsigned long long sourceColumnCount; // @synthesize sourceColumnCount=_sourceColumnCount;
@property(retain, nonatomic) TSTCellRegion *importedRegion; // @synthesize importedRegion=_importedRegion;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(copy, nonatomic) NSData *sourceData; // @synthesize sourceData=_sourceData;
@property(retain, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property(retain, nonatomic) NSURL *importSource; // @synthesize importSource=_importSource;
@property(retain, nonatomic) TSKStructuredTextImportSettings *importSettings; // @synthesize importSettings=_importSettings;
- (void).cxx_destruct;
- (void)encodeToArchive:(struct StructuredTextImportRecord *)arg1;
- (id)initFromArchive:(const struct StructuredTextImportRecord *)arg1;
@property(readonly, nonatomic, getter=isReimportable) _Bool reimportable;
@property(readonly, nonatomic, getter=isWholeTableImport) _Bool wholeTableImport;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

