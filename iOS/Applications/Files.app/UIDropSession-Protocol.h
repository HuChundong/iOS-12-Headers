//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSProgressReporting-Protocol.h"
#import "UIDragDropSession-Protocol.h"

@class NSProgress;
@protocol UIDragSession;

@protocol UIDropSession <NSProgressReporting, UIDragDropSession>
- (NSProgress *)loadObjectsOfClass:(Class)arg1 completion:(void (^)(NSArray *))arg2;
@property(nonatomic) unsigned long long progressIndicatorStyle;
@property(nonatomic, readonly) id <UIDragSession> localDragSession;
@end

