//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedHeadlineViewStyleType-Protocol.h"

@class UIColor;

@interface FRFeedHeadlineViewStyle : NSObject <FRFeedHeadlineViewStyleType>
{
    UIColor *_titleColor;
    UIColor *_excerptColor;
    long long _publisherLogoTheme;
}

@property(nonatomic) long long publisherLogoTheme; // @synthesize publisherLogoTheme=_publisherLogoTheme;
@property(retain, nonatomic) UIColor *excerptColor; // @synthesize excerptColor=_excerptColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (void).cxx_destruct;

@end
