//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSSStyle, TSSStylesheet;

@protocol TSKStyleMapper <NSObject>
@property(nonatomic) _Bool forceMatchStyle;
@property(readonly, nonatomic) _Bool clientsMustRemap;
- (TSSStyle *)mappedStyleForStyle:(TSSStyle *)arg1;
- (void)popMappingContext:(id)arg1;
- (void)pushMappingContext:(id)arg1;
- (TSSStylesheet *)targetStylesheet;
@end
