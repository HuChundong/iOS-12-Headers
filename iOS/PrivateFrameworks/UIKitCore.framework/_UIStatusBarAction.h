//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _UIStatusBarAction : NSObject
{
    _Bool _enabled;
    CDUnknownBlockType _block;
}

+ (id)actionWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
