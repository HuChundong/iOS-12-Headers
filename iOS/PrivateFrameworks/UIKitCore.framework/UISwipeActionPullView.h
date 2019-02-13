//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIContextualAction, UISwipeActionButton;
@protocol UISwipeActionPullViewDelegate;

@interface UISwipeActionPullView : UIView
{
    NSMutableArray *_buttons;
    NSArray *_actions;
    UISwipeActionButton *_pressedButton;
    _Bool _swipeActionsDidChange;
    _Bool _isCollapsed;
    double _openThreshold;
    double _confirmationThreshold;
    double _minimumOffset;
    double _currentExtraOffset;
    unsigned long long _style;
    _Bool _buttonsUnderlapSwipedView;
    _Bool _autosizesButtons;
    unsigned long long _cellEdge;
    double _currentOffset;
    id <UISwipeActionPullViewDelegate> _delegate;
    UIColor *_backgroundPullColor;
    unsigned long long _state;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool autosizesButtons; // @synthesize autosizesButtons=_autosizesButtons;
@property(nonatomic) _Bool buttonsUnderlapSwipedView; // @synthesize buttonsUnderlapSwipedView=_buttonsUnderlapSwipedView;
@property(copy, nonatomic) UIColor *backgroundPullColor; // @synthesize backgroundPullColor=_backgroundPullColor;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) id <UISwipeActionPullViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double currentOffset; // @synthesize currentOffset=_currentOffset;
@property(readonly, nonatomic) unsigned long long cellEdge; // @synthesize cellEdge=_cellEdge;
- (void).cxx_destruct;
- (id)description;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_unpressedButton:(id)arg1;
- (void)_pressedButton:(id)arg1;
- (void)_tappedButton:(id)arg1;
- (id)sourceViewForAction:(id)arg1;
- (void)moveToOffset:(double)arg1 extraOffset:(double)arg2 animated:(_Bool)arg3 usingSpringWithStiffness:(double)arg4 initialVelocity:(double)arg5;
- (void)configureWithSwipeActions:(id)arg1;
- (void)freeze;
- (void)resetView;
- (void)layoutSubviews;
- (void)_rebuildButtons;
- (Class)_buttonClass;
- (unsigned long long)_swipeActionCount;
- (double)_directionalMultiplier;
@property(readonly, nonatomic) double confirmationThreshold;
@property(readonly, nonatomic) double openThreshold;
@property(readonly, nonatomic) UIColor *primaryActionColor;
@property(readonly, nonatomic) _Bool hasActions;
@property(readonly, nonatomic) _Bool primaryActionIsDestructive;
@property(readonly, nonatomic) UIContextualAction *primarySwipeAction;
- (id)initWithCellEdge:(unsigned long long)arg1 style:(unsigned long long)arg2;

@end
