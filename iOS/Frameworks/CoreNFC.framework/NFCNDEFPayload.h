//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreNFC/NSSecureCoding-Protocol.h>

@class NSData;

@interface NFCNDEFPayload : NSObject <NSSecureCoding>
{
    unsigned char _typeNameFormat;
    NSData *_type;
    NSData *_identifier;
    NSData *_payload;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(copy, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSData *type; // @synthesize type=_type;
@property(nonatomic) unsigned char typeNameFormat; // @synthesize typeNameFormat=_typeNameFormat;
- (id)description;
- (void)dealloc;
- (id)initWithFormatType:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

