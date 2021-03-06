//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableDictionary, RemindersCardContentController, RemindersCardController, UIView;

@interface RemindersDetailContainerViewController : UIViewController
{
    RemindersCardController *_cardController;
    UIView *_dimmingView;
    NSMutableDictionary *_cardConstraints;
    NSArray *_dimmingConstraints;
    RemindersCardContentController *_contentController;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) RemindersCardContentController *contentController; // @synthesize contentController=_contentController;
@property(readonly, nonatomic) RemindersCardController *cardController; // @synthesize cardController=_cardController;
- (void).cxx_destruct;
- (void)setDimmed:(_Bool)arg1;
- (void)adjustConstraints;
- (void)setupConstraints;
- (struct UIEdgeInsets)cardInsets;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)loadView;

@end

