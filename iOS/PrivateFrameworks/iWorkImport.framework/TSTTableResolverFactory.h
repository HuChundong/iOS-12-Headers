//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCEResolverLocatingProtocol-Protocol.h>
#import <iWorkImport/TSCETableResolverFactoryProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTTableResolverFactory : NSObject <TSCETableResolverFactoryProtocol, TSCEResolverLocatingProtocol>
{
    struct TSCECalcEngine *_calcEngine;
}

- (vector_4115f7f8)cellRefsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (vector_a1208d01)valuesForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2 error:(id *)arg3;
- (unsigned char)aggregateTypeForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (id)resolverMatchingNameWithContextContainer:(id)arg1 inDocumentRoot:(id)arg2 contextContainerName:(id)arg3;
- (id)resolverMatchingName:(id)arg1 inDocumentRoot:(id)arg2 contextResolver:(id)arg3;
- (id)resolverContainerMatchingName:(id)arg1 inDocumentRoot:(id)arg2;
- (struct TSCETableResolver *)newTableResolverForResolver:(id)arg1;
- (id)initWithCalcEngine:(struct TSCECalcEngine *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

