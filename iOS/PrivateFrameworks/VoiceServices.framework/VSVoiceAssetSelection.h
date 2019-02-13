//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASAsset, NSString, VSVoiceAsset;

@interface VSVoiceAssetSelection : NSObject
{
    VSVoiceAsset *_voiceData;
    ASAsset *_asset;
    NSString *_builtInVoicePath;
    NSString *_voicePath;
}

@property(retain, nonatomic) NSString *voicePath; // @synthesize voicePath=_voicePath;
@property(retain) NSString *builtInVoicePath; // @synthesize builtInVoicePath=_builtInVoicePath;
@property(retain) ASAsset *asset; // @synthesize asset=_asset;
@property(retain) VSVoiceAsset *voiceData; // @synthesize voiceData=_voiceData;
- (void).cxx_destruct;
- (_Bool)isDownloading;
- (_Bool)isInstalled;
- (unsigned long long)size;
- (id)descriptiveKey;
- (id)key;

@end
