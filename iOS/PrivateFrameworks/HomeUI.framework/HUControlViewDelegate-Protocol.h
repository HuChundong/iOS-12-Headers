//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@protocol HUControlView;

@protocol HUControlViewDelegate <NSObject>
- (void)controlView:(id <HUControlView>)arg1 valueDidChange:(id)arg2;
- (void)controlViewDidEndUserInteraction:(id <HUControlView>)arg1;
- (void)controlViewDidBeginUserInteraction:(id <HUControlView>)arg1;
@end
