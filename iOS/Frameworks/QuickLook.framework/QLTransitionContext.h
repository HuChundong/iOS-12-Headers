//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class QLPreviewController, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface QLTransitionContext : NSObject <NSSecureCoding>
{
    QLPreviewController *_previewController;
    UIImage *_sourceViewSnapshotImage;
    _Bool _contextPreparedToSend;
    _Bool _usingViewForZoomTransition;
    UIView *_sourceView;
    double _topNavigationOffset;
    double _hostNavigationOffset;
    UIView *_sourceViewSnapshot;
    struct CGSize _previewItemSize;
    struct CGRect _sourceFrame;
    struct CGRect _uncroppedFrame;
}

+ (id)firstChildNavigationControllerFromViewController:(id)arg1;
+ (_Bool)useViewTransitionForPreviewController:(id)arg1;
+ (_Bool)useImageTransitionForPreviewController:(id)arg1;
+ (_Bool)useZoomTransitionForPreviewController:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIView *sourceViewSnapshot; // @synthesize sourceViewSnapshot=_sourceViewSnapshot;
@property struct CGSize previewItemSize; // @synthesize previewItemSize=_previewItemSize;
@property _Bool usingViewForZoomTransition; // @synthesize usingViewForZoomTransition=_usingViewForZoomTransition;
@property double hostNavigationOffset; // @synthesize hostNavigationOffset=_hostNavigationOffset;
@property double topNavigationOffset; // @synthesize topNavigationOffset=_topNavigationOffset;
@property struct CGRect uncroppedFrame; // @synthesize uncroppedFrame=_uncroppedFrame;
@property struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (void)setUpTransitionSourceView;
- (id)initWithQLPreviewController:(id)arg1 containerView:(id)arg2 toViewController:(id)arg3;
- (id)sourceViewSnapshotImage;
- (void)_snapshotSourceViewIfNeeded;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)prepareContextToSend;

@end
