//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKMultilineText.h>

@class NSArray;

@interface TLKRichText : TLKMultilineText
{
    NSArray *_formattedTextItems;
}

@property(retain, nonatomic) NSArray *formattedTextItems; // @synthesize formattedTextItems=_formattedTextItems;
- (void).cxx_destruct;
- (id)filterItemsByType:(unsigned long long)arg1;
- (id)icons;
- (id)inlineRoundedText;
- (id)stars;
- (id)description;
@property(readonly) _Bool hasContent;
- (id)text;

@end

