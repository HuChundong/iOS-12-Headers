//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQDClassNameMap : NSObject
{
}

+ (Class)classForName:(const char *)arg1 inRootType:(Class)arg2;
+ (void)registerGlobalClass:(Class)arg1 name:(const char *)arg2;
+ (void)registerClass:(Class)arg1 forName:(const char *)arg2 inRootType:(Class)arg3;
+ (void)initialize;
+ (void)registerDefaults;

@end
