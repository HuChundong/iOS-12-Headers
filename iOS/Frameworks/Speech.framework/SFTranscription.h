//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Speech/NSCopying-Protocol.h>
#import <Speech/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SFTranscription : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_formattedString;
    NSArray *_segments;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, copy, nonatomic) NSString *formattedString; // @synthesize formattedString=_formattedString;
- (void).cxx_destruct;
- (id)_initWithSegments:(id)arg1 formattedString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

