//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC5Files17DOCPreviewManager : NSObject
{
    // Error parsing type: , name: transitioningController
    // Error parsing type: , name: source
    // Error parsing type: , name: presentedPreviewController
    // Error parsing type: , name: publishesUserActivity
    // Error parsing type: , name: currentUserActivity
    // Error parsing type: , name: currentQuickLookPreviewController
}

+ (id)shared;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewController:(id)arg1 willSaveEditedItem:(id)arg2;
- (_Bool)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;
- (_Bool)previewController:(id)arg1 canEditItem:(id)arg2;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)reallyBecomeCurrent:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

