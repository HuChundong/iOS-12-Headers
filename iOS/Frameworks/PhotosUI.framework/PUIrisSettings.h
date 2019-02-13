//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PUIrisSettings : PXSettings
{
    _Bool _showStatusBorder;
    _Bool _vitalityAllowed;
    _Bool _shouldAlwaysBadge;
}

+ (id)settingsControllerModule;
+ (id)_photosPlayerRootSettings;
+ (id)sharedInstance;
@property(nonatomic) _Bool shouldAlwaysBadge; // @synthesize shouldAlwaysBadge=_shouldAlwaysBadge;
@property(nonatomic, getter=isVitalityAllowed) _Bool vitalityAllowed; // @synthesize vitalityAllowed=_vitalityAllowed;
@property(nonatomic, getter=showStatusBorder) _Bool showStatusBorder; // @synthesize showStatusBorder=_showStatusBorder;
- (void)performPostSaveActions;
- (void)restoreDefaultValues;
- (void)setDefaultValues;
- (id)parentSettings;

@end
