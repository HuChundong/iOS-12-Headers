//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SFSecurityManager : NSObject
{
    NSString *_provider;
    NSString *_securityTypeDescription;
}

@property(readonly, nonatomic) NSString *securityTypeDescription; // @synthesize securityTypeDescription=_securityTypeDescription;
@property(readonly, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)initWithProvider:(id)arg1 securityTypeDescription:(id)arg2;

@end

