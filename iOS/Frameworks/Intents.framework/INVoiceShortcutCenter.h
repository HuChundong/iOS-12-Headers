//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VCVoiceShortcutClient;

@interface INVoiceShortcutCenter : NSObject
{
    VCVoiceShortcutClient *_voiceShortcutClient;
}

+ (id)sharedCenter;
+ (void)initialize;
@property(retain, nonatomic, setter=_setVoiceShortcutClient:) VCVoiceShortcutClient *voiceShortcutClient; // @synthesize voiceShortcutClient=_voiceShortcutClient;
- (void).cxx_destruct;
- (void)setShortcutSuggestions:(id)arg1;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllVoiceShortcutsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)_initWithVoiceShortcutClient:(id)arg1;

@end

