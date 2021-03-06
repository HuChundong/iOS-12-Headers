//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class CNPromise, NSDictionary, NSNumber;

@interface CNContactMatchInfo : NSObject <NSSecureCoding>
{
    _Bool _matchedNameProperty;
    NSNumber *_relevanceScore;
    NSDictionary *_matchedProperties;
    CNPromise *_excerpt;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool matchedNameProperty; // @synthesize matchedNameProperty=_matchedNameProperty;
@property(retain, nonatomic) CNPromise *excerpt; // @synthesize excerpt=_excerpt;
@property(copy, nonatomic) NSDictionary *matchedProperties; // @synthesize matchedProperties=_matchedProperties;
@property(copy, nonatomic) NSNumber *relevanceScore; // @synthesize relevanceScore=_relevanceScore;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

