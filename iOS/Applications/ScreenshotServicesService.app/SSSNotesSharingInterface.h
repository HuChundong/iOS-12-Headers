//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface SSSNotesSharingInterface : NSObject
{
    UIViewController *_notesRemoteViewController;
}

+ (_Bool)shouldNotesSharingBeEnabled;
+ (id)_notesExtension;
- (void).cxx_destruct;
- (void)requestNotesViewControllerWithItems:(id)arg1 requestBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

