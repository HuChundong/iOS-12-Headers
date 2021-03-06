//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaSocial/NSCopying-Protocol.h>

@class NSString, NSURL, SSVMediaSocialPostArtist;

@interface MSCLTag : NSObject <NSCopying>
{
    NSString *_entityType;
    NSString *_identifier;
    NSString *_name;
    NSString *_tagString;
    NSURL *_thumbnailImageURL;
}

@property(copy, nonatomic) NSURL *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property(copy, nonatomic) NSString *tagString; // @synthesize tagString=_tagString;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *entityType; // @synthesize entityType=_entityType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SSVMediaSocialPostArtist *artistRepresentation;
- (id)initWithTagDictionary:(id)arg1;
- (id)initWithArtist:(id)arg1;

@end

