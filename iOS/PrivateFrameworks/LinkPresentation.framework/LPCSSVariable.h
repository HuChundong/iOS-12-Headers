//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPCSSVariable : NSObject
{
    _Bool _important;
    NSString *_name;
}

@property(readonly, nonatomic, getter=isImportant) _Bool important; // @synthesize important=_important;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)variableByResolvingWithThemePath:(id)arg1;
- (id)initWithName:(id)arg1 important:(_Bool)arg2;
- (id)initWithName:(id)arg1;

@end

