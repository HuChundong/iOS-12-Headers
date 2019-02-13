//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusFoundation/OFUIView.h>

#import <OpusKit/CAAnimationDelegate-Protocol.h>
#import <OpusKit/OKWidgetViewDelegate-Protocol.h>
#import <OpusKit/UICollectionViewDataSource-Protocol.h>
#import <OpusKit/UICollectionViewDelegate-Protocol.h>
#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, OFNSOperationQueue, OKDimmerView, OKPresentationViewControllerProxy, OKSynopsisGestureRecognizer, OKSynopsisInterpreter, UICollectionView;
@protocol OKSynopsisViewDelegate;

@interface OKSynopsisView : OFUIView <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CAAnimationDelegate, OKWidgetViewDelegate>
{
    OKSynopsisGestureRecognizer *_synopsisGestureRecognizer;
    NSArray *_widgetMediaItems;
    OFNSOperationQueue *_highSpeedOperationQueue;
    OKDimmerView *_backgroundView;
    _Bool _pinchStartedRight;
    _Bool _isAnimating;
    _Bool _isDisplay;
    UICollectionView *_collectionView;
    _Bool _scrollViewDidEndDragging;
    struct CGPoint _collectionViewContentPreviousOffset;
    OKPresentationViewControllerProxy *_presentationViewController;
    OKSynopsisInterpreter *_synopsisInterpreter;
    id <OKSynopsisViewDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(nonatomic) id <OKSynopsisViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OKSynopsisInterpreter *synopsisInterpreter; // @synthesize synopsisInterpreter=_synopsisInterpreter;
@property(nonatomic) OKPresentationViewControllerProxy *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
- (void)prepareAdjacentItemWidgetViewsForScrolling;
- (void)prepareAdjacentItemWidgetViews;
- (void)prepareAdjacentItemWidgetViews:(unsigned long long)arg1;
- (void)_scrollViewDidCompleteScrolling;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)hide;
- (void)show;
- (void)prepareForDisplaySynopsisView;
@property(readonly, nonatomic) OFUIView *presentationView;
@property(readonly, nonatomic) OFUIView *navigatorView;
- (void)widgetViewCancelAllOperations:(id)arg1;
- (void)widgetViewCancelAllOperations:(id)arg1 withIdentifier:(id)arg2;
- (void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3 forWidgetView:(id)arg4;
- (id)widgetViewResolution:(id)arg1;
- (void)widgetView:(id)arg1 addHighSpeedOperations:(id)arg2 andConsumingOperations:(id)arg3;
- (id)pageViewForWidgetView:(id)arg1;
- (id)collectionItemAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)handleTapCell:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)handleMagnification:(id)arg1;
- (void)endedGesture;
- (void)updateWithProgress:(double)arg1;
- (void)updateSynopsisViewOffsetForVisibleWidgets;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateSynopsisViewBlurForDisplay:(_Bool)arg1 withProgress:(double)arg2;
- (void)animateView:(id)arg1 forKeyPath:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 delay:(double)arg5 duration:(double)arg6 setDelegate:(id)arg7;
- (void)dealloc;
- (void)updateLayout:(struct CGRect)arg1;
- (void)initCollectionView;
- (id)initWithPresentationViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
