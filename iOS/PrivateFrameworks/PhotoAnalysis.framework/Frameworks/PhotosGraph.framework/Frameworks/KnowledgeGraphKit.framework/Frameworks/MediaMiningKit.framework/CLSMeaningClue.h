//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSClue.h>

@interface CLSMeaningClue : CLSClue
{
    id _relatedData;
}

+ (id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4;
+ (id)clueWithValue:(id)arg1 forKey:(id)arg2;
@property(retain) id relatedData; // @synthesize relatedData=_relatedData;
- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqualToClue:(id)arg1;

@end
