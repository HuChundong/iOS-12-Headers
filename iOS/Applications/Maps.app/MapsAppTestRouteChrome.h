//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsAppTest.h"

@protocol MapsAppTestRouteChromeDelegate;

__attribute__((visibility("hidden")))
@interface MapsAppTestRouteChrome : MapsAppTest
{
    id <MapsAppTestRouteChromeDelegate> _chromeDelegate;
}

@property(nonatomic) __weak id <MapsAppTestRouteChromeDelegate> chromeDelegate; // @synthesize chromeDelegate=_chromeDelegate;
- (void).cxx_destruct;
- (void)_presentDirectionDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupDirectionsPlan:(id)arg1;
- (_Bool)runTest;
- (void)cleanup:(_Bool)arg1;

@end

