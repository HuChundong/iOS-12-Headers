//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface RTStateTransition : NSObject <NSSecureCoding>
{
    NSMutableArray *_listTransitions;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *listTransitions; // @synthesize listTransitions=_listTransitions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)count;
- (id)getPredTrans:(double)arg1 duration:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4;
- (void)cleanTransition:(double)arg1;
- (void)showTransition;
- (void)submitTransition:(id)arg1;
- (void)addStateTransitionOneTimeTransFromStateTransition:(id)arg1;
- (id)init;

@end
