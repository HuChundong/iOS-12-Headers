//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorCaptionsResults : NSObject
{
    _Bool _isSupported;
    _Bool _remoteCanDisplayCaptions;
    NSSet *_localLanguages;
    NSSet *_remoteLanguages;
}

@property(nonatomic) _Bool isSupported; // @synthesize isSupported=_isSupported;
@property(nonatomic) _Bool remoteCanDisplayCaptions; // @synthesize remoteCanDisplayCaptions=_remoteCanDisplayCaptions;
@property(retain, nonatomic) NSSet *remoteLanguages; // @synthesize remoteLanguages=_remoteLanguages;
@property(retain, nonatomic) NSSet *localLanguages; // @synthesize localLanguages=_localLanguages;
- (void)dealloc;

@end

