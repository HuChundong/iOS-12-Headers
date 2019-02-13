//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>

@class IPAAdjustmentVersion, NSDictionary, NSString;

@interface IPAAdjustment : NSObject <NSCopying>
{
    NSString *_identifier;
    IPAAdjustmentVersion *_version;
    NSDictionary *_settings;
}

@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) IPAAdjustmentVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqualToAdjustment:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
