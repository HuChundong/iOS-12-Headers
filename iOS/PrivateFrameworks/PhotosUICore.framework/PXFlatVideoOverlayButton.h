//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <PhotosUICore/PXVideoOverlayButton-Protocol.h>

@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton>
{
    long long _style;
    id _target;
    SEL _action;
    _Bool _showAsPause;
    _Bool __didConfigureForPause;
}

@property(nonatomic, setter=_setDidConfigureForPause:) _Bool _didConfigureForPause; // @synthesize _didConfigureForPause=__didConfigureForPause;
@property(nonatomic) _Bool showAsPause; // @synthesize showAsPause=_showAsPause;
- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;
- (id)initWithStyle:(long long)arg1;

@end
