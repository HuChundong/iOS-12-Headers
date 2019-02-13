//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSString, RAPReport;
@protocol RAPAppStateProtocol;

__attribute__((visibility("hidden")))
@interface RAPQuestion : NSObject
{
    NSMapTable *_observers;
    NSHashTable *_children;
    _Bool _complete;
    RAPQuestion *_parentQuestion;
    RAPReport *_report;
}

+ (id)RAPTitle;
@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) __weak RAPReport *report; // @synthesize report=_report;
@property(readonly, nonatomic) __weak RAPQuestion *parentQuestion; // @synthesize parentQuestion=_parentQuestion;
- (void).cxx_destruct;
- (id)_parentQuestionOfClass:(Class)arg1;
- (_Bool)_isParentQuestionKindOfClass:(Class)arg1;
- (id)_reportedPlace;
- (id)_alternateAuxiliaryControlsRecording;
- (id)_alternatePlaceContext;
- (id)_alternateMapViewContext;
@property(readonly, nonatomic, getter=_context) id <RAPAppStateProtocol> context;
@property(readonly, nonatomic, getter=_isRecursivelyComplete) _Bool recursivelyComplete;
- (void)_fillSubmittableProblem:(id)arg1;
- (void)_setComplete:(_Bool)arg1 allowInvokingDidChange:(_Bool)arg2;
- (void)_setComplete:(_Bool)arg1;
- (void)_didChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;
- (void)_removeFromParentQuestion;
- (void)_removeChildQuestion:(id)arg1;
- (void)_addChildQuestion:(id)arg1;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;
- (id)image;
- (id)localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;

@end
