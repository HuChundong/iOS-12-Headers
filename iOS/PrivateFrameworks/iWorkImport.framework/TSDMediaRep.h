//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDStyledRep.h>

#import <iWorkImport/CALayerDelegate-Protocol.h>

@class NSString, TSDFrameRep, TSDMediaInfo, TSDMediaLayout;

__attribute__((visibility("hidden")))
@interface TSDMediaRep : TSDStyledRep <CALayerDelegate>
{
    TSDFrameRep *mFrameRep;
}

@property(retain, nonatomic) TSDFrameRep *frameRep; // @synthesize frameRep=mFrameRep;
- (void).cxx_destruct;
- (_Bool)isPlaceholder;
- (void)willBeRemoved;
@property(readonly, nonatomic) TSDMediaLayout *mediaLayout;
@property(readonly, nonatomic) TSDMediaInfo *mediaInfo;
- (void)dealloc;
- (_Bool)i_shouldRenderStroke:(id)arg1;
- (void)i_updateFrameRep;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
