//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SXTransitionDataSource;

@interface SXTransitionDataSourceNode : NSObject
{
    unsigned long long _type;
    id <SXTransitionDataSource> _transitionDataSource;
}

+ (id)nodeWithType:(unsigned long long)arg1 dataSource:(id)arg2;
@property(readonly, nonatomic) id <SXTransitionDataSource> transitionDataSource; // @synthesize transitionDataSource=_transitionDataSource;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

