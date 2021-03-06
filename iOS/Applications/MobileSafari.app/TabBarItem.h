//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TabBar, TabBarItemLayoutInfo, UIImage;

@interface TabBarItem : NSObject
{
    _Bool _active;
    _Bool _isPlaceholder;
    NSString *_title;
    UIImage *_icon;
    unsigned long long _mediaCaptureDeviceIcon;
    TabBar *_tabBar;
    TabBarItemLayoutInfo *_layoutInfo;
}

@property(retain, nonatomic) TabBarItemLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) __weak TabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(nonatomic) unsigned long long mediaCaptureDeviceIcon; // @synthesize mediaCaptureDeviceIcon=_mediaCaptureDeviceIcon;
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

