//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/DDOperation.h>

@class DOMNode, WebFrame;

__attribute__((visibility("hidden")))
@interface DDWebKitOperation : DDOperation
{
    DOMNode *_startNode;
    int _startOffset;
    DOMNode *_endNode;
    int _endOffset;
}

@property int endOffset; // @synthesize endOffset=_endOffset;
@property(retain, nonatomic) DOMNode *endNode; // @synthesize endNode=_endNode;
@property int startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) DOMNode *startNode; // @synthesize startNode=_startNode;
- (void).cxx_destruct;
- (void)dispatchContainerModificationBlock:(CDUnknownBlockType)arg1;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (_Bool)needsToStartOver;
- (_Bool)containerIsReady;
- (_Bool)doURLificationOnDocument;
- (struct __DDScanQuery *)_createScanQueryForBackend;
- (void)_updateGenerationNumber;
- (_Bool)_rangeValidForContainer;
- (void)_applyContainerRestrictionsToTypes;
- (_Bool)_containerReadyForDetection;
- (void)cleanup;

// Remaining properties
@property(retain, nonatomic) WebFrame *container; // @dynamic container;

@end

