//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface TSPPackageEntryInfo : NSObject
{
    unsigned int _CRC;
    unsigned long long _encodedLength;
    NSDate *_lastModificationDate;
}

@property(readonly, nonatomic) unsigned int CRC; // @synthesize CRC=_CRC;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) unsigned long long encodedLength; // @synthesize encodedLength=_encodedLength;
- (void).cxx_destruct;
- (id)initWithEncodedLength:(unsigned long long)arg1 lastModificationDate:(id)arg2 CRC:(unsigned int)arg3;
- (id)init;

@end
