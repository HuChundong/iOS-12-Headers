//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/NSObject-Protocol.h>

@class UIView, _TVInspectorCapturingView;

@protocol _TVInspectorCapturingViewDelegate <NSObject>
- (void)capturingView:(_TVInspectorCapturingView *)arg1 didCaptureTapOnView:(UIView *)arg2;
- (UIView *)rootView;
@end
