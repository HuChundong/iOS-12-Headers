//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@interface ADAMSBagManager : ADSingleton
{
}

+ (id)sharedInstance;
- (id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)arg1;
- (_Bool)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
- (_Bool)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
- (_Bool)authenticateAccountThroughAMSOperation:(id)arg1;

@end
