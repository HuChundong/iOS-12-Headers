//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLSaver : NSObject
{
}

+ (_Bool)saveModelToArchive:(struct _MLModelOutputArchiver *)arg1 model:(id)arg2 compilerOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)saveModelToArchive:(struct _MLModelOutputArchiver *)arg1 model:(id)arg2 error:(id *)arg3;
+ (_Bool)saveModelToAssetAtURL:(id)arg1 model:(id)arg2 error:(id *)arg3;

@end
