//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface CATMessage : NSObject <NSSecureCoding>
{
    NSUUID *_messageUUID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *messageUUID; // @synthesize messageUUID=_messageUUID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(retain, nonatomic) id cat_assertion;

@end
