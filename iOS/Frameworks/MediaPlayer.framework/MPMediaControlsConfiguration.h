//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSString;

@interface MPMediaControlsConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _shouldPreventAutorotation;
    _Bool _allowsNowPlayingApplicationLaunch;
    long long _style;
    NSString *_routingContextUID;
    NSString *_presentingAppBundleID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool allowsNowPlayingApplicationLaunch; // @synthesize allowsNowPlayingApplicationLaunch=_allowsNowPlayingApplicationLaunch;
@property(nonatomic) _Bool shouldPreventAutorotation; // @synthesize shouldPreventAutorotation=_shouldPreventAutorotation;
@property(copy, nonatomic) NSString *presentingAppBundleID; // @synthesize presentingAppBundleID=_presentingAppBundleID;
@property(copy, nonatomic) NSString *routingContextUID; // @synthesize routingContextUID=_routingContextUID;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
