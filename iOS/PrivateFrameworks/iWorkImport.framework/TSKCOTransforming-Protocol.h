//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TSKCOAbstractOperation, TSKCOIdPlacementBaseOperation, TSKCOOperationTransformHistory, TSKCOReplaceRangeOperation, TSKCOUpdateIdOperation, TSKCOUpdateRangeOperation;
@protocol TSKCOTransforming;

@protocol TSKCOTransforming
- (TSKCOAbstractOperation<TSKCOTransforming> *)transformDynamicByAnyOperation:(TSKCOAbstractOperation<TSKCOTransforming> *)arg1 byHigherPriority:(_Bool)arg2 history:(TSKCOOperationTransformHistory *)arg3;
- (TSKCOUpdateRangeOperation *)transformUpdateRangeOperation:(TSKCOUpdateRangeOperation *)arg1 isHigherPriority:(_Bool)arg2 history:(TSKCOOperationTransformHistory *)arg3;
- (TSKCOReplaceRangeOperation *)transformReplaceRangeOperation:(TSKCOReplaceRangeOperation *)arg1 isHigherPriority:(_Bool)arg2 history:(TSKCOOperationTransformHistory *)arg3;
- (TSKCOUpdateIdOperation *)transformUpdateIdOperation:(TSKCOUpdateIdOperation *)arg1 isHigherPriority:(_Bool)arg2 history:(TSKCOOperationTransformHistory *)arg3;
- (TSKCOIdPlacementBaseOperation *)transformIdPlacementBaseOperation:(TSKCOIdPlacementBaseOperation *)arg1 isHigherPriority:(_Bool)arg2 history:(TSKCOOperationTransformHistory *)arg3;
@end
