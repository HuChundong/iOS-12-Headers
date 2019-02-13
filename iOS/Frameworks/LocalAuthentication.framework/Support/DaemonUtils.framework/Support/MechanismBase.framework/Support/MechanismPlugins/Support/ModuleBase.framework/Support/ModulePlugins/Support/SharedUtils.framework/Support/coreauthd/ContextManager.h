//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface ContextManager : NSObject
{
    NSMapTable *_contextMap;
    NSMapTable *_contextProxyMap;
    NSMapTable *_contextByExternalizedContextMap;
    NSMutableDictionary *_modules;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)loadModule:(long long)arg1 error:(id *)arg2;
- (id)_pathForModule:(long long)arg1 error:(id *)arg2;
- (void)registerExternalizedContext:(id)arg1 forContext:(id)arg2;
- (void)addContext:(id)arg1;
- (void)addContextProxy:(id)arg1;
- (id)findContextForExternalizedContext:(id)arg1;
- (id)init;

@end
