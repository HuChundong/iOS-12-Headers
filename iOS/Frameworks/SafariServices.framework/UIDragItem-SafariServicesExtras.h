//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDragItem.h>

@class NSURL, WebBookmark;

@interface UIDragItem (SafariServicesExtras)
+ (void)_sf_loadObjectsFromDragItems:(id)arg1 usingLocalObjectLoader:(CDUnknownFunctionPointerType)arg2 objectLoader:(CDUnknownFunctionPointerType)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSURL *_sf_localURL;
@property(readonly, nonatomic) WebBookmark *_sf_localBookmark;
- (id)_sf_initWithBookmark:(id)arg1;
@end
