//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface SKAttribute : NSObject <NSSecureCoding>
{
    long long _type;
    NSString *_name;
    basic_string_23d93216 _nameString;
}

+ (id)attributeWithName:(id)arg1 type:(long long)arg2;
+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSString *name;
- (const basic_string_23d93216 *)getNameString;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (_Bool)isEqualToAttribute:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
