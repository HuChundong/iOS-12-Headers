//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _PPTState : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    int _enteredCount;
    _Bool _hasRendered;
    NSMutableArray *_renderStatistics;
}

@property(retain) NSMutableArray *renderStatistics; // @synthesize renderStatistics=_renderStatistics;
@property _Bool hasRendered; // @synthesize hasRendered=_hasRendered;
- (void).cxx_destruct;
- (void)groupNotifyOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)leaveDispatchGroup;
- (void)enterDispatchGroup;
- (id)init;

@end
