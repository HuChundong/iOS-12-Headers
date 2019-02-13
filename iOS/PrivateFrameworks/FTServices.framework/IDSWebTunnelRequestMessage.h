//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTServices/FTIDSMessage.h>

@class NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IDSWebTunnelRequestMessage : FTIDSMessage
{
    NSString *_messageRequestUUID;
    NSString *_messageURL;
    NSData *_messageRequestBodyData;
    NSDictionary *_messageRequestBodyDictionary;
    NSMutableDictionary *_messageHeaders;
    NSNumber *_maximumResponseSize;
    NSDictionary *_responseBodyDictionary;
    NSData *_responseBodyData;
    NSDictionary *_responseHeaders;
    NSNumber *_responseCode;
    NSNumber *_responseStatus;
    _Bool _disableIDSTranslation;
    NSString *_userAgentOverride;
}

@property(nonatomic) _Bool disableIDSTranslation; // @synthesize disableIDSTranslation=_disableIDSTranslation;
@property(copy, nonatomic) NSNumber *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(copy, nonatomic) NSNumber *responseCode; // @synthesize responseCode=_responseCode;
@property(copy, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(copy, nonatomic) NSDictionary *responseBodyDictionary; // @synthesize responseBodyDictionary=_responseBodyDictionary;
@property(copy, nonatomic) NSData *responseBodyData; // @synthesize responseBodyData=_responseBodyData;
@property(copy, nonatomic) NSString *userAgentOverride; // @synthesize userAgentOverride=_userAgentOverride;
@property(copy, nonatomic) NSNumber *maximumResponseSize; // @synthesize maximumResponseSize=_maximumResponseSize;
@property(copy, nonatomic) NSMutableDictionary *messageHeaders; // @synthesize messageHeaders=_messageHeaders;
@property(copy, nonatomic) NSDictionary *messageRequestBodyDictionary; // @synthesize messageRequestBodyDictionary=_messageRequestBodyDictionary;
@property(copy, nonatomic) NSData *messageRequestBodyData; // @synthesize messageRequestBodyData=_messageRequestBodyData;
@property(copy, nonatomic) NSString *messageURL; // @synthesize messageURL=_messageURL;
@property(copy, nonatomic) NSString *messageRequestUUID; // @synthesize messageRequestUUID=_messageRequestUUID;
- (void).cxx_destruct;
- (void)handleResponseHeaders:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)additionalMessageHeadersForOutgoingPush;
- (_Bool)isIDSMessage;
- (_Bool)wantsIDSProtocolVersion;
- (_Bool)isWebTunnelMessage;
- (_Bool)wantsCompressedBody;
- (_Bool)wantsBinaryPush;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessage:(id)arg1;

@end
