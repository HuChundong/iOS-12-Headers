//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUAssertionPolicyHandler-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface NUAssertionPolicyComposite : NSObject <NUAssertionPolicyHandler>
{
    NSMutableArray *_policies;
}

@property(readonly) NSArray *policies; // @synthesize policies=_policies;
- (void).cxx_destruct;
- (void)notifyAssertion:(id)arg1;
- (void)addPolicy:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
