//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView;

@interface FIUIWorkoutFootnoteTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_footnoteLabel;
    UIView *_dividerView;
    NSString *_titleText;
    NSString *_footnoteText;
}

+ (double)preferredHeight;
@property(copy, nonatomic) NSString *footnoteText; // @synthesize footnoteText=_footnoteText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

