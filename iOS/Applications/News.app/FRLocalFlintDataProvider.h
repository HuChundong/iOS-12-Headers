//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRFlintDataProvider.h"

@class NSMutableArray, NSString, SXContext;

@interface FRLocalFlintDataProvider : FRFlintDataProvider
{
    SXContext *_context;
    NSMutableArray *_fontResources;
    NSString *_localDraftPath;
}

@property(copy, nonatomic) NSString *localDraftPath; // @synthesize localDraftPath=_localDraftPath;
@property(readonly, nonatomic) NSMutableArray *fontResources; // @synthesize fontResources=_fontResources;
@property(retain, nonatomic) SXContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)registerAllFontsInDirectory:(id)arg1;
- (CDUnknownBlockType)loadImagesForImageRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)translateURL:(id)arg1;
- (id)loadContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLocalDraftPath:(id)arg1 resourceManager:(id)arg2 cloudContext:(id)arg3 embedConfigurationManager:(id)arg4;

@end

