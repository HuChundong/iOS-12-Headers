//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMessageLoadingContext, MFMessageLoadingContextEvent, MFMessageSigner;

@interface MFMessageLoadingContextSMIMEInfo : NSObject
{
    MFMessageLoadingContextEvent *_loadEvent;
}

+ (id)smimeInfoForLoadEvent:(id)arg1;
@property(readonly, nonatomic) MFMessageLoadingContextEvent *loadEvent; // @synthesize loadEvent=_loadEvent;
- (void)reevaluateTrustWithNetworkAccessAllowed;
@property(readonly, nonatomic, getter=isMessageEncrypted) _Bool messageEncrypted;
@property(readonly, nonatomic, getter=isMessageSigned) _Bool messageSigned;
@property(readonly, nonatomic) MFMessageSigner *firstSigner;
- (id)signers;
@property(readonly, nonatomic) __weak MFMessageLoadingContext *context;
- (id)initWithLoadEvent:(id)arg1;
- (void)dealloc;

@end
