//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray;

@protocol HDSampleSaving
- (void)saveSamples:(NSArray *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)performIfAuthorizedToDeleteObjectTypes:(NSArray *)arg1 usingBlock:(void (^)(_Bool))arg2 errorHandler:(void (^)(NSError *))arg3;
- (void)performIfAuthorizedToSaveObjectTypes:(NSArray *)arg1 usingBlock:(void (^)(void))arg2 errorHandler:(void (^)(NSError *))arg3;
@end
