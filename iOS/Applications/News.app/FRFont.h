//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FRFont : NSObject
{
}

+ (id)_registrationQueue;
+ (id)_referenceCountedSet;
+ (id)_postScriptNameForFontAtFileURL:(id)arg1;
+ (_Bool)_unregisterFontAtFileURL:(id)arg1 error:(id *)arg2;
+ (_Bool)_shouldUnregisterFontWithFileURL:(id)arg1;
+ (unsigned long long)_referenceCountForFontWithFileURL:(id)arg1;
+ (void)_decreaseReferenceCountForFontWithFileURL:(id)arg1;
+ (void)_increaseReferenceCountForFontWithFileURL:(id)arg1;
+ (void)unregisterFontWithURL:(id)arg1;
+ (_Bool)registerFontWithURL:(id)arg1 error:(id *)arg2;

@end
