//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentInteractionFactory-Protocol.h>

@class NSString;
@protocol SXWebContentNavigationManager;

@interface SXWebContentInteractionFactory : NSObject <SXWebContentInteractionFactory>
{
    id <SXWebContentNavigationManager> _navigationManager;
}

@property(readonly, nonatomic) id <SXWebContentNavigationManager> navigationManager; // @synthesize navigationManager=_navigationManager;
- (void).cxx_destruct;
- (id)interactionForDictionary:(id)arg1;
- (id)initWithNavigationManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

