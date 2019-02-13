//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL, UIView;

@interface SBSAppDragLocalContext : NSObject
{
    _Bool _cancelsViaScaleAndFade;
    NSString *_applicationBundleIdentifier;
    NSSet *_launchActions;
    NSURL *_launchURL;
    long long _startLocation;
    UIView *_portaledPreview;
}

@property(nonatomic) _Bool cancelsViaScaleAndFade; // @synthesize cancelsViaScaleAndFade=_cancelsViaScaleAndFade;
@property(retain, nonatomic) UIView *portaledPreview; // @synthesize portaledPreview=_portaledPreview;
@property(readonly, nonatomic) long long startLocation; // @synthesize startLocation=_startLocation;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(readonly, copy, nonatomic) NSSet *launchActions; // @synthesize launchActions=_launchActions;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
- (void).cxx_destruct;
- (id)initWithApplicationBundleIdentifier:(id)arg1 withLaunchActions:(id)arg2 startLocation:(long long)arg3;

@end
