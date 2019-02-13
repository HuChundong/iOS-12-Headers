//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

#import <Contacts/ABPredicateDelegate-Protocol.h>

@class ABPredicate, CNCancelationToken, CNContactsEnvironment, NSString;
@protocol CNObserver;

__attribute__((visibility("hidden")))
@interface _CNABPredicateObservable : CNObservable <ABPredicateDelegate>
{
    void *_addressBook;
    unsigned int _sortOrdering;
    ABPredicate *_predicate;
    unsigned long long _options;
    CNContactsEnvironment *_environment;
    CNCancelationToken *_cancelationToken;
    id <CNObserver> _observer;
}

+ (id)observableWithPredicates:(id)arg1 sortOrdering:(unsigned int)arg2 options:(unsigned long long)arg3 addressBook:(void *)arg4 environment:(id)arg5;
@property(retain, nonatomic) id <CNObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) CNCancelationToken *cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned int sortOrdering; // @synthesize sortOrdering=_sortOrdering;
@property(readonly, nonatomic) ABPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2 moreComing:(_Bool)arg3;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2 metadata:(id)arg3;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1;
- (id)subscribe:(id)arg1;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 sortOrdering:(unsigned int)arg2 options:(unsigned long long)arg3 addressBook:(void *)arg4 environment:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
