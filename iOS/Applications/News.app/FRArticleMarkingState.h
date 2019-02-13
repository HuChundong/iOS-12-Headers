//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRArticleMarkingStateProvider-Protocol.h"

@class NSString;

@interface FRArticleMarkingState : NSObject <FRArticleMarkingStateProvider>
{
    _Bool _offensive;
    _Bool _saved;
    _Bool _liked;
    _Bool _disliked;
    _Bool _muted;
    NSString *_articleID;
}

@property(readonly, copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(readonly, nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(readonly, nonatomic) _Bool disliked; // @synthesize disliked=_disliked;
@property(readonly, nonatomic) _Bool liked; // @synthesize liked=_liked;
@property(readonly, nonatomic) _Bool saved; // @synthesize saved=_saved;
@property(readonly, nonatomic) _Bool offensive; // @synthesize offensive=_offensive;
- (void).cxx_destruct;
- (id)initWithArticleMarkingStateForArticleID:(id)arg1 isLiked:(_Bool)arg2 isDisliked:(_Bool)arg3 isMuted:(_Bool)arg4 isSaved:(_Bool)arg5 isOffensive:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
