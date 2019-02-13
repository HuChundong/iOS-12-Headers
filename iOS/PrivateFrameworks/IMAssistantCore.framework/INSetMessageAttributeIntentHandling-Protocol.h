//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class INSetMessageAttributeIntent;

@protocol INSetMessageAttributeIntentHandling <NSObject>
- (void)handleSetMessageAttribute:(INSetMessageAttributeIntent *)arg1 completion:(void (^)(INSetMessageAttributeIntentResponse *))arg2;

@optional
- (void)resolveAttributeForSetMessageAttribute:(INSetMessageAttributeIntent *)arg1 withCompletion:(void (^)(INMessageAttributeResolutionResult *))arg2;
- (void)confirmSetMessageAttribute:(INSetMessageAttributeIntent *)arg1 completion:(void (^)(INSetMessageAttributeIntentResponse *))arg2;
@end
