//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "FRCellGroupable-Protocol.h"

@class UIViewController;
@protocol NFReuseIdentifiable;

@interface FRFeedViewControllerCollectionViewCell : UICollectionViewCell <FRCellGroupable>
{
    UIViewController<NFReuseIdentifiable> *_viewController;
    CDUnknownBlockType _onReuse;
    CDUnknownBlockType _onRecycle;
    CDUnknownBlockType _isInUse;
    struct UIEdgeInsets _viewControllerEdgeInsets;
}

@property(copy, nonatomic) CDUnknownBlockType isInUse; // @synthesize isInUse=_isInUse;
@property(copy, nonatomic) CDUnknownBlockType onRecycle; // @synthesize onRecycle=_onRecycle;
@property(copy, nonatomic) CDUnknownBlockType onReuse; // @synthesize onReuse=_onReuse;
@property(retain, nonatomic) UIViewController<NFReuseIdentifiable> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) struct UIEdgeInsets viewControllerEdgeInsets; // @synthesize viewControllerEdgeInsets=_viewControllerEdgeInsets;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
