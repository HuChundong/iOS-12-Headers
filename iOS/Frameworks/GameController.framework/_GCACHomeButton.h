//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameController/_GCControllerButtonInput.h>

@protocol _GCACHomeButtonDelegate;

@interface _GCACHomeButton : _GCControllerButtonInput
{
    id <_GCACHomeButtonDelegate> _delegate;
    _Bool needsReset;
}

- (void).cxx_destruct;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
