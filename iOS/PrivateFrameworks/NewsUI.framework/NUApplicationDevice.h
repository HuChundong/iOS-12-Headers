//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUDevice-Protocol.h>

@class NSString, UIApplication, UIScreen;

@interface NUApplicationDevice : NSObject <NUDevice>
{
    UIApplication *_application;
    UIScreen *_screen;
}

@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSplitScreen) _Bool splitScreen;
- (id)initWithApplication:(id)arg1 screen:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
