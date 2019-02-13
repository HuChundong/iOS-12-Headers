//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TITransientLexiconManaging-Protocol.h>

@class NSString;

@interface TITransientLexiconManager : NSObject <TITransientLexiconManaging>
{
    struct _LXLexicon *_namedEntityLexiconRef;
    struct _LXLexicon *_namedEntityPhraseLexiconRef;
    _Bool _lexiconsLoaded;
}

+ (id)getEntries:(struct _LXLexicon *)arg1;
+ (id)sharedInstance;
+ (id)singletonInstance;
+ (void)setSharedTITransientLexiconManager:(id)arg1;
- (void)debugLogEntities;
@property(readonly, nonatomic) const struct _LXLexicon *namedEntityPhraseLexicon;
@property(readonly, nonatomic) const struct _LXLexicon *namedEntityLexicon;
- (void)getOnce:(CDUnknownBlockType)arg1;
- (_Bool)searchForWordCaseInsensitive:(id)arg1;
- (_Bool)searchForWord:(id)arg1;
- (_Bool)searchHelper:(struct _LXLexicon *)arg1 forWord:(struct __CFString *)arg2 caseSensitive:(_Bool)arg3;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)loadLexicons;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
