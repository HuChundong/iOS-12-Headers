//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCore/FMOwnerAccountIdentity-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FMInternalOwnerAccount : NSObject <FMOwnerAccountIdentity>
{
    NSString *_personId;
    NSString *_username;
    NSString *_firstName;
    NSString *_lastName;
}

@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *personId; // @synthesize personId=_personId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccount:(id)arg1;

@end

