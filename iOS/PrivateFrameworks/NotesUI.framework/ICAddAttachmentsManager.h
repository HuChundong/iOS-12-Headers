//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICAddAttachmentsManager : NSObject
{
}

+ (id)sharedManager;
- (void)saveAttachments:(id)arg1 toNote:(id)arg2 textBefore:(id)arg3 textAfter:(id)arg4 fetchFirst:(_Bool)arg5;
- (void)saveAttachments:(id)arg1 toNote:(id)arg2 textBefore:(id)arg3 textAfter:(id)arg4;
- (id)saveAttachmentsToNewNote:(id)arg1 inFolder:(id)arg2 textBefore:(id)arg3 textAfter:(id)arg4;

@end
