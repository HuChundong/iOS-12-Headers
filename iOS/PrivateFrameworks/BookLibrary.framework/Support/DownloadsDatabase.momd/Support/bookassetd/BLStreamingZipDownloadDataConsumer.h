//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLDownloadDataConsumer.h"

#import "SZExtractorDelegate-Protocol.h"

@class NSDictionary, NSString, SZExtractor;

__attribute__((visibility("hidden")))
@interface BLStreamingZipDownloadDataConsumer : BLDownloadDataConsumer <SZExtractorDelegate>
{
    SZExtractor *_extractor;
    _Bool _hasConsumedData;
    NSDictionary *_options;
    NSString *_path;
    double _percentComplete;
    unsigned long long _resumptionOffset;
}

- (unsigned long long)resumptionOffset;
- (double)percentComplete;
- (_Bool)hasConsumedData;
- (void).cxx_destruct;
- (id)_stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (id)_stringWithFileSystemRepresentation:(const char *)arg1;
- (unsigned long long)_diskUsageForPath:(id)arg1;
- (void)extractionCompleteAtArchivePath:(id)arg1;
- (void)setExtractionProgress:(double)arg1;
- (void)truncate;
- (void)suspend;
- (void)reset;
- (_Bool)finish:(id *)arg1;
- (unsigned long long)diskUsage;
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

