//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Pasteboard/PBItem.h>

@interface PBItem (Server)
- (void)saveRepresentationsToStorageBaseURL:(id)arg1 fileProtectionType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_saveRepresentationsToBaseURL:(id)arg1 types:(id)arg2 fileProtectionType:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setStorageBaseURL:(id)arg1;
- (id)persistentFileNameForType:(id)arg1;
@end
