//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICSuzeLeaseSession, MPCSuzeLeaseSession;

@interface _MPCSuzeLeaseSessionInfo : NSObject
{
    _Bool _shouldStopWhenFinished;
    long long _clientCount;
    ICSuzeLeaseSession *_icLeaseSession;
    MPCSuzeLeaseSession *_mpcLeaseSession;
}

@property(nonatomic) _Bool shouldStopWhenFinished; // @synthesize shouldStopWhenFinished=_shouldStopWhenFinished;
@property(readonly, nonatomic) MPCSuzeLeaseSession *mpcLeaseSession; // @synthesize mpcLeaseSession=_mpcLeaseSession;
@property(readonly, nonatomic) ICSuzeLeaseSession *icLeaseSession; // @synthesize icLeaseSession=_icLeaseSession;
@property(nonatomic) long long clientCount; // @synthesize clientCount=_clientCount;
- (void).cxx_destruct;
- (id)initWithICLeaseSession:(id)arg1;

@end
