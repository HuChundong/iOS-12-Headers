//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class FairPlayDecryptSession, NSData, NSString;

@interface FairPlayDecryptFileOperation : ISOperation
{
    NSData *_dpInfo;
    double _lastSnapshotTime;
    NSString *_path;
    FairPlayDecryptSession *_fairplayDecryptSession;
}

- (void)_updateProgressWithByteCount:(long long)arg1;
- (void)_initializeProgressWithFileHandle:(id)arg1;
- (_Bool)_decryptWithSession:(id)arg1 error:(id *)arg2;
- (void)run;
- (void)dealloc;
- (id)initWithPath:(id)arg1 dpInfo:(id)arg2;
- (id)init;

@end

