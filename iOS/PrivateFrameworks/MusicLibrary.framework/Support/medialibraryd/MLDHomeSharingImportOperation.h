//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLDDAAPImportOperation.h"

@class ML3EntityReplacer;

@interface MLDHomeSharingImportOperation : MLDDAAPImportOperation
{
    ML3EntityReplacer *_containerReplacer;
    int _playlistNameOrder;
}

- (void).cxx_destruct;
- (void)updateImportProgress:(float)arg1;
- (shared_ptr_7b646331)containerImportItemFromDAAPElement:(shared_ptr_be2f9a71)arg1 withTrackIds:(vector_d87a6415)arg2 trackPersonIdentifiers:(vector_6e7979f9)arg3;
- (shared_ptr_7b646331)importItemFromDAAPElement:(shared_ptr_be2f9a71)arg1;
- (_Bool)_performHomeSharingImportWithTransaction:(id)arg1;
- (void)main;
- (unsigned long long)importSource;

@end
