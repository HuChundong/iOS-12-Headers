//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosEditUI/PUEditPluginSession.h>

__attribute__((visibility("hidden")))
@interface PUVideoEditPluginSession : PUEditPluginSession
{
    _Bool _allowLoopingVideoExtensions;
}

@property(nonatomic) _Bool allowLoopingVideoExtensions; // @synthesize allowLoopingVideoExtensions=_allowLoopingVideoExtensions;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (id)videoDataSource;
- (unsigned long long)pluginManagerMediaType;

@end
