//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@interface STAppTitleSubtitleCell : PSTableCell
{
    _Bool _hasSubtitle;
}

+ (long long)cellStyle;
@property(nonatomic) _Bool hasSubtitle; // @synthesize hasSubtitle=_hasSubtitle;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_registerForAppInfoCacheNotifications;
- (void)_didFetchIcon:(id)arg1;
- (void)_registerForIconCacheNotifications;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool isAppCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

