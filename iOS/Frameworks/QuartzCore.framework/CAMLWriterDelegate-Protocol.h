//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/NSObject-Protocol.h>

@class CAMLWriter, NSString, NSURL;

@protocol CAMLWriterDelegate <NSObject>

@optional
- (_Bool)CAMLWriter:(CAMLWriter *)arg1 shouldEncodeObject:(id)arg2;
- (NSURL *)CAMLWriter:(CAMLWriter *)arg1 URLForResource:(id)arg2;
- (NSString *)CAMLWriter:(CAMLWriter *)arg1 IDForObject:(id)arg2;
- (NSString *)CAMLWriter:(CAMLWriter *)arg1 typeForObject:(id)arg2;
@end
