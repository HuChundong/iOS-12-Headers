//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QLItemDataThumbnailGenerator : NSObject
{
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_executeCompletionHandlerWithImage:(id)arg1;
- (void)generateThumbnailWithData:(id)arg1 contentType:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
