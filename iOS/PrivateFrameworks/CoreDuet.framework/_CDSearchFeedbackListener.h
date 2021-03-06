//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/SFFeedbackListener-Protocol.h>

@class NSString;
@protocol _DKKnowledgeSaving;

@interface _CDSearchFeedbackListener : NSObject <SFFeedbackListener>
{
    NSString *_clientIdentifier;
    id <_DKKnowledgeSaving> _store;
}

+ (id)feedbackListenerWithStore:(id)arg1 clientIdentifier:(id)arg2;
+ (id)feedbackListenerWithClientIdentifier:(id)arg1;
+ (id)feedbackListener;
@property(retain, nonatomic) id <_DKKnowledgeSaving> store; // @synthesize store=_store;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

