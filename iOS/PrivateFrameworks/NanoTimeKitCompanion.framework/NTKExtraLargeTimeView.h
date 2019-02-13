//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CLKDevice, NSString, NTKDigitalTimeLabel;

@interface NTKExtraLargeTimeView : UIView <NTKTimeView>
{
    CLKDevice *_device;
    _Bool _statusBarVisible;
    _Bool _frozen;
    NTKDigitalTimeLabel *_timeHourView;
    NTKDigitalTimeLabel *_timeMinuteView;
}

@property(retain, nonatomic) NTKDigitalTimeLabel *timeMinuteView; // @synthesize timeMinuteView=_timeMinuteView;
@property(retain, nonatomic) NTKDigitalTimeLabel *timeHourView; // @synthesize timeHourView=_timeHourView;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
- (void).cxx_destruct;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setStatusBarVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)performWristRaiseAnimation;
- (void)cancelWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)cleanupAfterZoom;
- (void)prepareToZoom;
- (void)setBottomColor:(id)arg1;
- (void)setTopColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
