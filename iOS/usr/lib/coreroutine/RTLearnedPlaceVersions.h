//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@class RTLearnedPlace;

@interface RTLearnedPlaceVersions : NSObject <NSCopying>
{
    RTLearnedPlace *_inferredVersion;
    RTLearnedPlace *_existingVersion;
    RTLearnedPlace *_truthfulCounterpart;
}

@property(retain, nonatomic) RTLearnedPlace *truthfulCounterpart; // @synthesize truthfulCounterpart=_truthfulCounterpart;
@property(retain, nonatomic) RTLearnedPlace *existingVersion; // @synthesize existingVersion=_existingVersion;
@property(retain, nonatomic) RTLearnedPlace *inferredVersion; // @synthesize inferredVersion=_inferredVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)trueVersion;

@end

