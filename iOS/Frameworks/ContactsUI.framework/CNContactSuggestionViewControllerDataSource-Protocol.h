//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSAttributedString, NSString, NSURL;

@protocol CNContactSuggestionViewControllerDataSource <NSObject>
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *from;
@property(readonly, nonatomic) NSString *date;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSAttributedString *formattedSnippet;
@property(readonly, nonatomic) NSString *appName;
@property(readonly, nonatomic) unsigned long long type;
@end
