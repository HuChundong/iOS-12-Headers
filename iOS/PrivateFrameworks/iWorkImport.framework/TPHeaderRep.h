//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPHeaderRep.h>

@class NSTimer, TPPaginatedPageInfo;

__attribute__((visibility("hidden")))
@interface TPHeaderRep : TSWPHeaderRep
{
    _Bool _hideKnobs;
    NSTimer *editingDidBeginTimer;
}

@property(nonatomic) _Bool hideKnobs; // @synthesize hideKnobs=_hideKnobs;
@property(retain, nonatomic) NSTimer *editingDidBeginTimer; // @synthesize editingDidBeginTimer;
- (void).cxx_destruct;
- (_Bool)p_isMiddleFooterRep;
- (_Bool)p_isMiddleHeaderRep;
- (_Bool)p_shouldCreateArrowKnobs;
- (_Bool)p_isInDocumentSetup;
@property(readonly, nonatomic) TPPaginatedPageInfo *pageInfo;
- (id)pageLayout;

@end
