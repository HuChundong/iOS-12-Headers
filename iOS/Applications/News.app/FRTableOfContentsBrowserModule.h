//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSTableOfContentsBrowserModuleType-Protocol.h"

@class FRFavoritesPickerLauncher;

@interface FRTableOfContentsBrowserModule : NSObject <TSTableOfContentsBrowserModuleType>
{
    FRFavoritesPickerLauncher *_favoriteLaunchPicker;
}

@property(retain, nonatomic) FRFavoritesPickerLauncher *favoriteLaunchPicker; // @synthesize favoriteLaunchPicker=_favoriteLaunchPicker;
- (void).cxx_destruct;
- (void)presentViewControllerFromViewController:(id)arg1;
- (id)initWithFavoritePickerLauncher:(id)arg1;

@end

