//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKPaymentPass, PKVerificationChannel;
@protocol OS_dispatch_queue, OS_dispatch_source, PKPaymentVerificationObserverDelegate;

@interface PKPaymentVerificationObserver : NSObject
{
    _Bool _observing;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_identifier;
    PKPaymentPass *_pass;
    PKVerificationChannel *_verificationChannel;
    id <PKPaymentVerificationObserverDelegate> _delegate;
}

@property(nonatomic) id <PKPaymentVerificationObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) PKVerificationChannel *verificationChannel; // @synthesize verificationChannel=_verificationChannel;
@property(readonly, retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)stop;
- (void)startObservingVerificationSourceWithTimeout:(double)arg1;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 verificationChannel:(id)arg2 identifier:(id)arg3;

@end
