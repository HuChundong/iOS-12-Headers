//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface LoadingCell : UITableViewCell
{
    int _mode;
    UIView *_loadingView;
    UIView *_noAppsView;
}

@property(retain, nonatomic) UIView *noAppsView; // @synthesize noAppsView=_noAppsView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)initWithMode:(int)arg1 reuseIdentifier:(id)arg2;

@end
